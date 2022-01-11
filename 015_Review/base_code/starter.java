import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner (System.in);
		System.out.print("Choose a character, a Wizard, Warrior, or a Rogue: "); 
		String john = sc.nextLine();
		if (john.equals("Wizard"))
		{
			System.out.println("You are a Wizard, your goal is to create a spell causing the prince to fall asleep");
			System.out.println("    ");
		}
		else if (john.equals("Warrior"))
		{
			System.out.println("You are a warrior, your role is to avenger your second sister's death");
			System.out.println("    ");
		}
		else if (john.equals("Rogue"))
		{
		System.out.println("You are a rogue, your mission is to become the prince's bodyguard and spy on him");
		System.out.println("    ");
		}
		else
		{
			System.out.println("Check your spelling you may have misspelled it");
		}
		System.out.println("You will be given 25 points to put into your five abilities: Strength, Dexterity, Intelligence, Constitution, and Charisma.");
		System.out.println("And remember the following traits can only have a maximum of 10 points each, choose wisely.");
		System.out.println("    ");
		System.out.println("How much power would you like your Strength to be: ");
		int apple = sc.nextInt();
		Random rand = new Random();
		System.out.print("Now you only have ");
		int A = 25;
		int B = apple;
		System.out.print(A-B);
		System.out.println(" points left");
		System.out.println("How much power would you like your Dexterity to be: ");
		int guy = sc.nextInt();
		System.out.print("Now you only have ");
		int C = guy;
		System.out.print((A-B)-C);
		System.out.println(" points left");
		System.out.println("How much power would you like your Intelligence to be: ");
		int boy = sc.nextInt();
		System.out.print("Now you only have ");
		int D = boy;
		System.out.print(((A-B)-C)-D);
		System.out.println(" points left");
		System.out.println("How much power would you like your Constitution to be: ");
		int girl = sc.nextInt();
		System.out.print("Now you only have ");
		int E = girl;
		System.out.print((((A-B)-C)-D)-E);
		System.out.println(" points left");
		System.out.println("How much power would you like your Charisma to be: ");
		int hi = sc.nextInt();
		System.out.print("Now you only have ");
		int F = hi;
		System.out.print(((((A-B)-C)-D)-E)-F);
		System.out.println(" points left");
		System.out.println("You have got your powers, so let's begin your first mission!");


	}
}
