import java.util.Random;
import inout.Console;

public class Starter {
	public static void main(String[] args) {
		Random generator = new Random();
		int geheim = generator.nextInt(100) + 1;
		int geraten;
		
		do {
			System.out.print("Bitte Zahl eingeben: ");
			geraten = Console.readInt();
			if(geraten > geheim){
				System.out.println("Zu gross!");
			}
			else if(geraten < geheim){
				System.out.println("Zu klein!");
			}
		} while (geheim != geraten);
		System.out.println("Richtig! Es war die " + geheim + "!");
	}
}

