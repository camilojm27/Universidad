package mrcraps;

import java.util.Random;
import java.util.Scanner;

public class MrCraps {

	public static void main(String[] args) {
		Scanner scanercito = new Scanner(System.in);
		System.out.println("Ingresa tu nombre");
		String name = scanercito.nextLine();
		// https://stackoverflow.com/questions/5887709/getting-random-numbers-in-java
		Random randi = new Random(System.currentTimeMillis());

		boolean win = false;
		while (!win) {
			
			int dado = randi.nextInt(12);

			if (dado == 0) {
				dado++;
			}

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
				win = punto(dado);
				break;
			}
		}
	}

	public static boolean punto(int dado) {
		
		return true;
	}
}
