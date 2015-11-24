public class Starter {
	public static void main(String[] args) {
		int p = 13;
		long E1 = 16384000000L;

		long einwohner = berechneEinwohner(E1, p);

		System.out.println("Der " + p + "-te Planet hat " + einwohner + " Einwohner.");
	}

	public static long berechneEinwohner(long e1, int planetenNummer) {
		if(planetenNummer == 1){
//			Wir wissen wie viele Einwohner der erste Planet hat
			return e1;
		}
		else{
//			Die Haelfte vom vorherigen Planeten.
			return berechneEinwohner(e1, planetenNummer - 1) / 2;
		}
	}
}

