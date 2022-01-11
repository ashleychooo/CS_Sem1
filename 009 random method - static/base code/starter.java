import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Random rand = new Random();
		int b09 = rand.nextInt(10);
		System.out.println(b09);
		
		int b08 = rand.nextInt(100)+1;
		System.out.println(b08);
		
		double b07;
		b07 = 0;
		b07 = rand.nextDouble();
		b07 = b07 + 2.5;
		System.out.println(b07);
		
		double b06;
		b06 = rand.nextInt(575);
		b06 = b06 + 14;
		b06 = b06 + rand.nextDouble();
		System.out.println(b06);
	

		System.out.println("       ");
		System.out.println("Notes");
		int b05 = rand.nextInt(56)+10;
		System.out.println(b05);
		
		double a;
		a = 0;
		a = rand.nextDouble();  // 0-1, not 1
		System.out.println(a);
								// 12.5-13.5
		a = a + 12.5;
		System.out.println(a);
		System.out.println("--------------");
		double b;
		b = 0;
		b = rand.nextDouble();
		System.out.println(b);
		b = b + 35.3;
		System.out.println(b);
		System.out.println("--------------");
		// double between 5-205
		double c;
		c = rand.nextInt(200);  //5-205 =200   0-199
		System.out.println(c);
		c = c + 5;          //5-204
		System.out.println(c);
		c = c + rand.nextDouble();
		System.out.println(c);

	}
}
