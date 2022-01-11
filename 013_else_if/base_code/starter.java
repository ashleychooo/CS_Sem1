import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.println("Pick a number from 1-1000");
		int ace = sc.nextInt();
		Random rand = new Random();
		int ac = rand.nextInt(1000);
		System.out.println(ac);
		if (ace != ac)
		{
			System.out.println("The number you have picked is bigger. The number was " + ace + "");
		}
		else
		{
			System.out.println("Your number was smaller");
		}
	}
}
