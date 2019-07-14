package dibujando;

import java.awt.Color;
import java.awt.Font;
import java.awt.FontMetrics;
import java.awt.Graphics;

import javax.swing.JPanel;

public class Canvas extends JPanel {
	private String texto;
	private int parte;
	private Font font;
	
	public Canvas() {	
		setBackground(Color.LIGHT_GRAY);
		texto="Dibujando Java 2D";
		parte=1;
		font = new Font(Font.DIALOG, Font.BOLD, 27);
	}
	
	public void dibujarParte() {
		parte++;
		repaint();
	}
	
	public void paintComponent(Graphics g) {
		/*Ojo esto es muy importante y era la falla que nos 
		salia en la clase.  Es necesario llamar al 
		paintComponent del padre, es decir de JPanel, ya que 
		si no se hace llama al de la ventana JFrame*/
		super.paintComponent(g);
		
		g.setFont(font);
		FontMetrics metrics = g.getFontMetrics(font);
		
		switch(parte) {
		case 1: //dibujar texto
			g.setColor(Color.BLUE);
		    g.drawString(texto, 20, 22);
			break;
		case 2: //dibujando lineas
			
			g.setColor(Color.LIGHT_GRAY);
			g.fillRect(20, 22-metrics.getHeight(), metrics.stringWidth(texto), metrics.getHeight()+metrics.getDescent());
			g.setColor(Color.RED);
			g.drawString("Dibujando Líneas", 20, 22);
			g.drawLine(5, 30, 380, 30);
			break;
		case 3: //dibujar rectangulos.
			g.setColor(Color.LIGHT_GRAY);
			g.fillRect(20, 22-metrics.getHeight(), metrics.stringWidth(texto), metrics.getHeight()+metrics.getDescent());
			
			g.setColor(Color.CYAN);
			g.drawString("Dibujando Rectángulos", 20, 22);
			g.drawRect(5, 40, 90, 55);
			g.fillRect(100, 40, 90, 55);
			g.setColor(Color.ORANGE);
			g.drawRoundRect(290, 40, 90, 55, 20, 20);
			g.fillRoundRect(195, 40, 90, 50, 50, 50);
			g.draw3DRect(5, 100, 90, 55, true);
			g.fill3DRect(100, 100, 90, 55, false);
			break;
		case 4://dibujar ovalos				
			g.setColor(Color.GRAY);
			g.drawString("Dibujando Ovalos", 20, 22);
			g.drawOval(195, 100, 90, 55);
			g.fillOval(290, 100, 90, 55);
			break;
		default:g.setColor(Color.BLUE);
	    g.setFont(new Font(Font.DIALOG, Font.BOLD, 27));
		g.drawString("The End!!", 50, 22);
		break;		
		}
	}

}
