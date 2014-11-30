public static void main(String[] args) {
	String hersteller;
	String modell;
	double beschleunigung;
	int gewicht;

	hersteller = "Audi";
	modell = "A8";
	beschleunigung = 4.1;
	gewicht = 2000;

	System.out.println("Hersteller: " + hersteller);
	System.out.println("Modell: " + modell);
	System.out.println("Beschleunigung: " + beschleunigung + "m/(s*s)");
	System.out.println("Gewicht: " + gewicht + "kg");

	double kraft = gewicht * beschleunigung;
	System.out.println("Kraft: " + kraft + "kg*m/(s*s);
}
