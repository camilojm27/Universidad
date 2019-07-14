/*
 * Introducción Java - Repaso Orientación a Objetos
 * Profesora Paola J. Rodríguez
 */
package craps;

import java.util.Random;

// TODO: Auto-generated Javadoc
/**
 * The Class Dado.
 * Esta clase representa un dado y guarda información de la cara visible del mismo
 */
public class Dado {
    
    /** The cara. Cara visible del dado al ser lanzado */
    private int cara;
    
	/**
	 * Gets the cara. Devuelve el valor de la cara visible el cual se general aleatoriamente
	 *
	 * @return the cara. el valor aleatorio entre 1 y 6
	 */
	public int getCara() {
		Random aleatorio= new Random();
	    cara = aleatorio.nextInt(6)+1;
		return cara;
	}
 
}
