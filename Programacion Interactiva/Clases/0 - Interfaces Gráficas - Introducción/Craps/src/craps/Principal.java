/*
 * Introducci�n Java - Repaso Orientaci�n a Objetos
 * Profesora Paola J. Rodr�guez
 */

package craps;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.UIManager;

// TODO: Auto-generated Javadoc
/**
 * The Class Principal. Encarga de ejecutar el programa
 * invoca a la vista
 */
public class Principal {

	/**
	 * The main method.
	 *
	 * @param args the arguments. No se usan en este programa
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		/*
		 * VistaConsola consola = new VistaConsola(); consola.iniciarJuego();
		 */
		
		try {
			String className = UIManager.getCrossPlatformLookAndFeelClassName();
			UIManager.setLookAndFeel(className);
			}
		catch (Exception e) {}
			
		EventQueue.invokeLater(new Runnable() {
		                                    	public void run() {
			                                     Craps myCraps = new Craps();
			                                    }});
	
	}

}
