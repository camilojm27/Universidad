/**
 * 
 */
package craps;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

/**
 * @author paola
 *
 */
public class VistaGraficaCraps1 extends JFrame {
	private JLabel dado1, dado2, tiro, punto;
	private JButton lanzar;
	private JTextField valorTiro, valorPunto;
	private Escucha escucha;
	private ImageIcon imagen;
	private ControlCraps controlCraps;
	
	public VistaGraficaCraps1() {
		
		initGUI();
		
		this.setTitle("Craps");
		this.setResizable(true);
		setSize(450,200);
		this.setLocationRelativeTo(null);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	public void initGUI() {
		//contenderor y layout
		Container container = this.getContentPane();
		container.setLayout(new FlowLayout());
		
		//Crear objeto escucha
		escucha = new Escucha();
		
		//crear componentes gráficos
		
		imagen = new ImageIcon("src/imagenes/dado.png");
		
		dado1 = new JLabel();
		dado1.setIcon(imagen);
		add(dado1);
		
		
		
		dado2 = new JLabel();
		dado2.setIcon(imagen);
		add(dado2);
		
		lanzar = new JButton("Lanzar Dados");
		lanzar.addActionListener(escucha);
		add(lanzar);
		
		tiro = new JLabel("Tiro:");
		tiro.setVisible(false);
		add(tiro);
		
		valorTiro = new JTextField(2);
		valorTiro.setEditable(false);
		valorTiro.setVisible(false);
		add(valorTiro);
		
		punto = new JLabel("Punto:");
		punto.setVisible(false);
		add(punto);
		
		valorPunto = new JTextField(2);
		valorPunto.setEditable(false);
		valorPunto.setVisible(false);
		add(valorPunto);
		
		//crear el objeto para manejo de la lógica
		controlCraps = new ControlCraps();
		
	}
	
	private class Escucha implements ActionListener{
      
		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			//calcular tiro y visualizar las caras
			
			controlCraps.calcularTiro();
						
			imagen = new ImageIcon("src/imagenes/"+String.valueOf(controlCraps.getCaraDado1())+".png");
			dado1.setIcon(imagen);
			
			imagen = new ImageIcon("src/imagenes/"+String.valueOf(controlCraps.getCaraDado2())+".png");
			dado2.setIcon(imagen);
			
			//determinar el juego
			
			controlCraps.determinarJuego();
			
			switch(controlCraps.getEstado()) {
			case 1: //gano
				    tiro.setVisible(true);
				    valorTiro.setText(String.valueOf(controlCraps.getTiro()));
				    valorTiro.setVisible(true);
				    JOptionPane.showMessageDialog(null,"Has ganado");
				    break;
			case 2: //perdio
					tiro.setVisible(true);
					valorTiro.setText(String.valueOf(controlCraps.getTiro()));
					valorTiro.setVisible(true);
					JOptionPane.showMessageDialog(null, "Has Perdido!!");
					break;
			case 3: //punto
				    tiro.setVisible(true);
					valorTiro.setText(String.valueOf(controlCraps.getTiro()));
					valorTiro.setVisible(true);	
					punto.setVisible(true);
					valorPunto.setText(String.valueOf(controlCraps.getPunto()));
					valorPunto.setVisible(true);
				    String mensaje = "Estas en Punto!! \n Debes seguir lanzando \n Ganas si sacas nuevamente " + String.valueOf(controlCraps.getPunto())+
				    "\n Pierdes si sacas 7";
					JOptionPane.showMessageDialog(null,mensaje);
					break;
			}
			
		}
		
	}

}
