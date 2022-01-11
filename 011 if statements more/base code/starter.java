import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Input a word");
		String a = sc.nextLine();
		System.out.println("Input a word");
		String b = sc.nextLine();
		if (a != b || b == a)
		{
			System.out.println("appleboy");
		}
	}
}