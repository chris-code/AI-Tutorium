import inout.Console;

public class Starter {
	public static void main(String[] args) {
		System.out.print("Bitte Namen eingeben: ");
		String name = Console.readString();

		System.out.print("Bitte Passwort eingeben: ");
		String passwort = Console.readString();

		switch (name) {
		case "Balzebub":
			if (passwort.equals("Meisterklasse1337")) {
				System.out.println("Login erfolgreich");
			} else {
				System.out.println("Nutzername oder Passwort falsch!");
			}
			break;
		case "foo":
			if (passwort.equals("bar")) {
				System.out.println("Login erfolgreich");
			} else {
				System.out.println("Nutzername oder Passwort falsch!");
			}
			break;
		default:
			System.out.println("Nutzername oder Passwort falsch!");
			break;
		}
	}
}

