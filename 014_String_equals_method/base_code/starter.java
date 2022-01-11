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
		}
		else if (john.equals("Warrior"))
		{
			System.out.println("You are a warrior, your role is to avenger your second sister's death");
		}
		else if (john.equals("Rogue"))
		{
			System.out.println("You are a rogue, your mission is to become the prince's bodyguard and spy on him");
		}
		else
		{
			System.out.println("Check your spelling you may have misspelled it");
		}
		System.out.println("Good luck!");
		
	}
}
