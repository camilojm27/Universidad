/**
 * 
 */
package ventanaBase;

import java.awt.EventQueue;

import javax.swing.UIManager;

/**
 * @author paola
 *
 */
public class PrincipalVentanaBase {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
        
		try {
			String className = UIManager.getCrossPlatformLookAndFeelClassName();
			UIManager.setLookAndFeel(className);
			}
		catch (Exception e) {}
			
		EventQueue.invokeLater(new Runnable() {
		                                    	public void run() {
			                                     Ventana miVentana = new Ventana();
			                                    }});
	}
}
