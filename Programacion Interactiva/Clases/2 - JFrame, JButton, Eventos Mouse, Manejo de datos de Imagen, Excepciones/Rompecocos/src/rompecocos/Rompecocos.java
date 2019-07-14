package rompecocos;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.Random;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;

import misComponentes.Titulos;

public class Rompecocos extends JFrame {
	public static final String rutaFile="src/imagenes/rompecocos.jpg";
	
	private int fichaSize=100;
	private int gridSize=4;
	private BufferedImage bufferImage = null;
	private Ficha[][] tablero = new Ficha[gridSize][gridSize];
	private JPanel centralPanel, panelBotones;
	private JButton ayuda, revolver, salir;
	private Escuchas escucha;
	private JFrame miMisma = this;
	private Ayuda ventanaAyuda = new Ayuda(miMisma);
	
	public Rompecocos() {
		
		try {
			bufferImage = ImageIO.read(new File(rutaFile));
			Ficha.setFichaSizeMaxFichas(fichaSize, gridSize*gridSize);
			
			initGUI();
			
			//default window configuration
			this.setUndecorated(true);
			pack();
			this.setResizable(false);
			this.setLocationRelativeTo(null);
			this.setVisible(true);
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			JOptionPane.showMessageDialog(null, "No se ha encontrado el archivo rompecocos.jpg");
		}
	}
	
	private void initGUI() {
		//define window container y layout
		
		//crear el escucha
		escucha = new Escuchas();
		
		//crear la GUI
		
		//titulo
		Titulos titulo = new Titulos("Rompecocos",30,Color.BLACK);
		add(titulo,BorderLayout.NORTH);
		
		//zona de juego - centralPanel
		
		dividirImage();		
		
		//panel bontones
		panelBotones = new JPanel();
		ayuda = new JButton("ayuda");
		ayuda.addActionListener(escucha);
		panelBotones.add(ayuda);
		revolver = new JButton("revolver");
		revolver.addActionListener(escucha);
		panelBotones.add(revolver);
		salir= new JButton("salir");
		salir.addActionListener(escucha);
		panelBotones.add(salir);
		
		add(panelBotones,BorderLayout.SOUTH);
		
	}
	
	private void dividirImage() {
		centralPanel = new JPanel();
		centralPanel.setLayout(new GridLayout(gridSize,gridSize));
		add(centralPanel, BorderLayout.CENTER);
		
		int id = 0;
		
		for(int row=0; row<gridSize; row++) {
			for(int col=0; col<gridSize; col++) {
				//calcular la porcion de imagen y idImage para crear el Ficha
				int x=col*fichaSize;
				int y=row*fichaSize;
				BufferedImage subImage= bufferImage.getSubimage(x, y, fichaSize, fichaSize);
				ImageIcon buttonImage = new ImageIcon(subImage);
				tablero[row][col]=new Ficha(buttonImage,id,row,col);
				tablero[row][col].addMouseListener(escucha);
				centralPanel.add(tablero[row][col]);
				id++;
			}
		}
		revolverFichas();
	}
	
	private void clickedFicha(Ficha fichaClick) {
		int row = fichaClick.getRow();
		int col = fichaClick.getCol();
		
		if(row>0 && tablero[row-1][col].hasNoImage()) {
			fichaClick.intercambiar(tablero[row-1][col]);
		}
		else {
			if(row<gridSize-1 && tablero[row+1][col].hasNoImage()) {
				fichaClick.intercambiar(tablero[row+1][col]);
			}
			else {
				if(col>0 && tablero[row][col-1].hasNoImage()) {
					fichaClick.intercambiar(tablero[row][col-1]);
				}
				else {
					if(col<gridSize-1 && tablero[row][col+1].hasNoImage()) {
						fichaClick.intercambiar(tablero[row][col+1]);
					}
				}
			}
		}
		
		if(validarOrden()) {
			tablero[gridSize-1][gridSize-1].mostrarImagen();
		}
	}

	private void revolverFichas() {
		int initRow=gridSize-1;
		int initCol=gridSize-1;
		
		Random random = new Random();
		
		for(int i=0;i<15*gridSize*gridSize;i++) {
			int direction = random.nextInt(4);
			
			switch(direction) {
			case 0://arriba
				   if(initRow>0) {
					   tablero[initRow][initCol].intercambiar(tablero[initRow-1][initCol]);
					   initRow--;
				   }
				   break;
			case 1: //abajo
					if(initRow<gridSize-1) {
						tablero[initRow][initCol].intercambiar(tablero[initRow+1][initCol]);
						initRow++;
					}
					break;
			case 2: //izquierda
					if(initCol>0) {
						tablero[initRow][initCol].intercambiar(tablero[initRow][initCol-1]);
						initCol--;
					}
					break;
			case 3: //derecha
					if(initCol<gridSize-1) {
						tablero[initRow][initCol].intercambiar(tablero[initRow][initCol+1]);
						initCol++;
					}
					break;
			}
		}
		
	}	
	
	private boolean validarOrden() {
		int id=0;
		boolean orden=true;
		
		for(int row=0; row<gridSize && orden; row++) {
			for(int col=0; col<gridSize && orden;col++) {
				if(tablero[row][col].getIdImage()==id) {
					id++;
				}
				else {
					orden=false;
				}
			}
		}
		return orden;
	}

	
	private class Escuchas extends MouseAdapter implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent eventAction) {
			// TODO Auto-generated method stub
			//responde a los eventos de los botones ayuda, revolver, salir
			if(eventAction.getSource()==salir){
				System.exit(0);
			}
			else {
				if(eventAction.getSource()==ayuda){
					//llamar a la venta ayuda
					ventanaAyuda.setVisible(true);
					miMisma.setEnabled(false);
					
				}
				else {
					//llamar a la funcion revolver ficha
					revolverFichas();
				}
				
			}
			
		}
		
		@Override
		public void mouseClicked(MouseEvent eventMouse) {
			// TODO Auto-generated method stub
			//intercambiar fichas !!
			Ficha fichaClick= (Ficha)eventMouse.getSource();
			clickedFicha(fichaClick);
		}
		
	}

}
