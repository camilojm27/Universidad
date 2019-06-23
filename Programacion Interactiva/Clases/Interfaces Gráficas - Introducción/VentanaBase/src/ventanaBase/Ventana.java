/**
 * 
 */
package ventanaBase;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

/**
 * @author paola
 *
 */
public class Ventana extends JFrame {
	private JLabel rotulo;
	private JButton entrar, salir;
	private Escucha escucha;
	
	public Ventana() {
		initGUI();
		
		this.setTitle("Primera Ventana");
		pack();//this.setSize(300, 400);
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	public void initGUI() {
		//definir el container
		//establecer el layout
		Container contanier = getContentPane();
		contanier.setLayout(new FlowLayout());
		
		//crear el objeto Escucha
		escucha = new Escucha();
		//agregar componentes graficos
		rotulo = new JLabel("Ventana Base");
		this.add(rotulo);
		
		entrar = new JButton();
		entrar.setText("Entrar");
		entrar.addActionListener(escucha);
		this.add(entrar);
		
		salir = new JButton("salir");
		salir.addActionListener(escucha);
		this.add(salir);
		
	}
	
	private class Escucha implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			// TODO Auto-generated method stub
			
			if(e.getSource()==entrar) {
				JOptionPane.showMessageDialog(null, "Tocaste el botón entrar");
			}
			else {
				JOptionPane.showMessageDialog(null, "Tocaste el botón salir");
			}
			
		}
		
	}
	

}
