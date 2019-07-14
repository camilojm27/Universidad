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
public class Craps extends JFrame {
	private JLabel dado1, dado2, tiro, punto;
	private JButton lanzar;
	private JTextField valorTiro, valorPunto;
	private ImageIcon imagen;
	private Escucha escucha;
	private ControlCraps controlCraps;
	
	public Craps(){
		initGUI();
		
		this.setTitle("Juego Craps");
		this.setSize(380, 200);
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
    
	public void initGUI() {
		//container y layout
		Container container = this.getContentPane();
		container.setLayout(new FlowLayout());
		
		//crear su objeto escucha
		escucha  = new Escucha();
		
		//crear los componentes graficos
		imagen = new ImageIcon("src/imagenes/dado.png");
		
		dado1 = new JLabel();
		dado1.setIcon(imagen);
		add(dado1);
		
		dado2 = new JLabel();
		dado2.setIcon(imagen);
		add(dado2);
		
		lanzar = new JButton("lanzar");
		lanzar.addActionListener(escucha);
		add(lanzar);
		
		tiro = new JLabel("Tiro:");
		tiro.setVisible(false);
		add(tiro);
		
		valorTiro = new JTextField(2);
		valorTiro.setVisible(false);
		valorTiro.setEditable(false);
		add(valorTiro);
		
		punto = new JLabel("Punto:");
		punto.setVisible(false);
		add(punto);
		
		valorPunto = new JTextField(2);
		valorPunto.setVisible(false);
		valorPunto.setEditable(false);
		add(valorPunto);
		
		//crer el objeto que maneja la logica
		controlCraps = new ControlCraps();
	}
	
	private class Escucha implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			//actualizar las caras del dado
			controlCraps.calcularTiro();
			
			imagen = new ImageIcon("src/imagenes/"+controlCraps.getCaraDado1()+".png");
			dado1.setIcon(imagen);
			imagen = new ImageIcon("src/imagenes/"+controlCraps.getCaraDado2()+".png");
			dado2.setIcon(imagen);
				
			//determinar el estado y mostrarlo en la ventana auxiliar
			
			controlCraps.determinarJuego();
			
			switch(controlCraps.getEstado()) {
			case 1: //gano
				    tiro.setVisible(true);
				    valorTiro.setText(String.valueOf(controlCraps.getTiro()));
				    valorTiro.setVisible(true);
				    JOptionPane.showMessageDialog(null, "Has Ganado!!");
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
				    JOptionPane.showMessageDialog(null, "Has sacado punto!! /n Para ganar debe sacar" +
				                                  String.valueOf(controlCraps.getPunto())+ "/n Pierdes si sacas 7");
				    break;
			}
			
		}
		
	}
}
