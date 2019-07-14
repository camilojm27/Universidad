package craps;

import java.awt.Color;
import java.awt.Cursor;
import java.awt.Dimension;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.border.TitledBorder;

import misComponentes.Titulos;

public class VistaCrapsGridBadLayout extends JFrame {
    private JPanel zonaJuego, panelResultados;
    private JLabel dado1, dado2, tiro, punto;
    private JTextField valorTiro, valorPunto;
    private Titulos titulo, resultados;
    private ImageIcon imagen;
    private JButton lanzar, salir;
    private JTextArea mensajes;
    
    private Escuchas escucha;
    private ControlCraps controlCraps;
    
	public VistaCrapsGridBadLayout() {
    	 initGUI();
    	  
    	 //configuracion Default Windows
    	 //setTitle("Juego Craps");
    	 this.setUndecorated(true);
    	 this.setBackground(new Color(255,255,25,60));
    	 pack();
    	 setLocationRelativeTo(null);
    	 //this.setResizable(true);
    	 setVisible(true);
    	 //this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);    	 
     }
	
	private void initGUI() {
		//container de la ventana y su layout
		this.getContentPane().setLayout(new GridBagLayout());
		
		GridBagConstraints constraints = new GridBagConstraints();
		
		//crear objeto maneja escuchas
		escucha = new Escuchas();
		
		//crear su GUI
		
		//titulo
		titulo = new Titulos("Juego Craps",30,new Color(0,0,0));
		titulo.setCursor(new Cursor(Cursor.MOVE_CURSOR));
		titulo.addMouseListener(escucha);
		titulo.addMouseMotionListener(escucha);
		
		constraints.gridx=0;
		constraints.gridy=0;
		constraints.gridwidth=2;
		constraints.fill=GridBagConstraints.HORIZONTAL;
		
		add(titulo,constraints);
			
		
		//zona de Juego
		zonaJuego = new JPanel();
		
		imagen = new ImageIcon("src/imagenes/dado.png");
		dado1 = new JLabel(imagen);
		dado2 = new JLabel(imagen);
		lanzar = new JButton("lanzar");
		lanzar.setCursor(new Cursor(Cursor.HAND_CURSOR));
		//adicionar el escucha
		
		lanzar.addActionListener(escucha);
		
		zonaJuego.add(dado1);
		zonaJuego.add(dado2);
		zonaJuego.add(lanzar);
		
		//zonaJuego.setBackground(Color.green);
		//zonaJuego.setSize(new Dimension(100,60));
		zonaJuego.setPreferredSize(new Dimension(310,180));
		zonaJuego.setBorder(new TitledBorder("Zona Juego"));
		
		constraints.gridx=0;
		constraints.gridy=1;
		constraints.gridwidth=1;
		constraints.gridheight=3;
		constraints.fill=GridBagConstraints.NONE;
		
		add(zonaJuego, constraints);	
	    
	    //Salir
	    
	    salir = new JButton("Salir");
	    salir.addActionListener(escucha);
	    salir.setCursor(new Cursor(Cursor.HAND_CURSOR));
	    
	    constraints.gridx=0;
		constraints.gridy=4;
		constraints.gridwidth=1;
		constraints.gridheight=1;
		constraints.anchor=GridBagConstraints.LAST_LINE_END;
	    
	    add(salir,constraints);
	    
	    //resultados
	    
	    resultados = new Titulos("Resultados",24,new Color(255,20,155));
	    
	    constraints.gridx=1;
		constraints.gridy=1;
		constraints.gridwidth=1;
		constraints.gridheight=1;
		constraints.anchor=GridBagConstraints.CENTER;
		constraints.fill=GridBagConstraints.HORIZONTAL;
	    add(resultados,constraints);
	
	    //panel Resultados
	    panelResultados = new JPanel();
	    panelResultados.setLayout(new GridLayout(2,2));
	    
	    tiro = new JLabel("Tiro");
	    punto = new JLabel("punto");
	    valorTiro = new JTextField(2);
	    valorTiro.setEditable(false);
	    valorPunto = new JTextField(2);
	    valorPunto.setEditable(false);
	    
	    panelResultados.add(tiro);
	    panelResultados.add(valorTiro);
	    panelResultados.add(punto);
	    panelResultados.add(valorPunto);
	    
	    panelResultados.setBackground(Color.WHITE);
	    
	    constraints.gridx=1;
		constraints.gridy=2;
		constraints.gridwidth=1;
		constraints.gridheight=1;
		constraints.anchor=GridBagConstraints.CENTER;
		constraints.fill=GridBagConstraints.NONE;
	    
	    add(panelResultados,constraints);
	    
	    //area de texto
	    mensajes = new JTextArea(10,20);
	    mensajes.setText("Lanza los dados para iniciar el juego. \n");
	    JScrollPane scroll = new JScrollPane(mensajes);
	    mensajes.setEditable(false);
	    
	    constraints.gridx=1;
		constraints.gridy=3;
		constraints.gridwidth=1;
		constraints.gridheight=2;
		constraints.anchor=GridBagConstraints.CENTER;
		constraints.fill=GridBagConstraints.VERTICAL;
	    add(scroll,constraints);
	    
		//crear objeto Control
	    controlCraps = new ControlCraps();
	    
	}
	
	private class Escuchas extends MouseAdapter implements ActionListener {
         private int x, y;
		
		@Override
		public void actionPerformed(ActionEvent eventAction) {
			// TODO Auto-generated method stub
			if(eventAction.getSource()==salir) {
				System.exit(0);
			}	
			else {
				controlCraps.calcularTiro();
				
				imagen = new ImageIcon("src/imagenes/"+String.valueOf(controlCraps.getCaraDado1())+".png");
				dado1.setIcon(imagen);
				
				imagen = new ImageIcon("src/imagenes/"+String.valueOf(controlCraps.getCaraDado2())+".png");
				dado2.setIcon(imagen);
				
				//determinar el juego
				
				controlCraps.determinarJuego();
				
				switch(controlCraps.getEstado()) {
				case 1: //gano			    
					    valorTiro.setText(String.valueOf(controlCraps.getTiro()));
					    mensajes.append("Has ganado \n");
					    break;
				case 2: //perdio
						valorTiro.setText(String.valueOf(controlCraps.getTiro()));
						mensajes.append("Has Perdido \n");
						break;
				case 3: //punto
					    valorTiro.setText(String.valueOf(controlCraps.getTiro()));
						valorPunto.setText(String.valueOf(controlCraps.getPunto()));
						String mensaje = "Estas en Punto!! \n Debes seguir lanzando \n Ganas si sacas nuevamente " + String.valueOf(controlCraps.getPunto())+
					    "\n Pierdes si sacas 7 \n";
						mensajes.append(mensaje);
						break;
				}
				
			}
		 }

		@Override
		public void mousePressed(MouseEvent eventMouse) {
			// TODO Auto-generated method stub
			x=eventMouse.getX();
			y=eventMouse.getY();
		}
		
		@Override
		public void mouseDragged(MouseEvent eventMouse) {
			// TODO Auto-generated method stub
			setLocation(eventMouse.getXOnScreen()-x,eventMouse.getYOnScreen()-y);
		}
		
	}
}
