package dibujando;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class GUIDibujar extends JFrame {
	private Canvas myCanvas;
	private Escuchas escucha;
	
	public GUIDibujar() {
		initGUI();
		
		//configuracion por defecto de la ventana
		setTitle("Java 2D");
		this.setResizable(true);
		setSize(450,200);
		this.setLocationRelativeTo(null);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	private void initGUI() {
		//container y layout
		
		//crear el objeto escucha
		escucha = new Escuchas();
		//crear su GUI
		myCanvas = new Canvas();
		//adicionar el escucha
		myCanvas.addKeyListener(escucha);
		myCanvas.setFocusable(true);		
	    add(myCanvas,BorderLayout.CENTER);
		
	    //crear objeto control
	}
  private class Escuchas extends KeyAdapter{
	@Override
	public void keyPressed(KeyEvent arg0) {
		// TODO Auto-generated method stub
		myCanvas.dibujarParte();
	}
  }
}
