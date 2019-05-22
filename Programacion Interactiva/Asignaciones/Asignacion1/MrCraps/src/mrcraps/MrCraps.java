package assignament_1 ;

import java.util.Random;
import java.util.Scanner;

public class Craps {

	public static void main(String[] args) {
		Scanner scanercito = new Scanner(System.in);
		System.out.println("Ingresa tu nombre");
		String name = scanercito.nextLine();
		// https://stackoverflow.com/questions/5887709/getting-random-numbers-in-java
		Random randi = new Random(System.currentTimeMillis());

		boolean win = false;
		while (!win) {
			
			int dado = randi.nextInt(10) + 2;

			switch (dado) {
			case 2:
				System.out.println("Sacaste " + dado + " Y perdiste CRAPS!");
				break;
			case 3:
				System.out.println("Sacaste " + dado + " Y perdiste CRAPS!");
				break;

			case 12:
				System.out.println("Sacaste " + dado + " Y perdiste CRAPS!");
				break;
			case 7:
				System.out.println("Sacaste " + dado + " Y ganaste \n NATURAL!");
				break;
			case 11:
				System.out.println("Sacaste " + dado + " Y ganaste \n NATURA!");
				break;

			default:
				
				int punto = dado;
				boolean hasDone = false;
				
				while(!hasDone){
				dado = randi.nextInt(10) + 2;
				System.out.println("Sacaste un " + dado);
				int auxPunto = dado;
				if(dado == 7){
					hasDone = true;
					win = true;
					System.out.println("You Lose");
					break;
				} else {
					System.out.println("Oprima una tecla para lanzar");
					String respuesta = scanercito.nextLine();
					
					switch(dado){
					
					case 4:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
					case 5:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
					case 6:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
					case 8:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
					case 9:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
					case 10:
						if(punto == dado);
						hasDone = true;
						win = true;
						System.out.println("Sacaste un " + dado);
						System.out.println("You win");
						break;
						
					}
				}
				
				
			}
				
				
				
			
				
				
				
				}
				break;
			}
		}
	}
