import java.util.Scanner;

public class Hidden {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int M = input.nextInt();
		
		for (int i = 0; i < M; i++) {
			int F = input.nextInt();
			int G = input.nextInt();
			int K = input.nextInt();
			
			String msg = input.next();
			String hidden = input.next();
			
			if (msg.charAt(0) != hidden.charAt(0)) {
				System.out.println("No");
				continue;
			}
			
			int msgIndex = K;
			int hiddenIndex = 1;
			
			while (msgIndex < F && hiddenIndex < G) {
				if (msg.charAt(msgIndex) == hidden.charAt(hiddenIndex)) {
					msgIndex += K;
					hiddenIndex++;
				}
				else
					msgIndex++;
			}
			
			if (msgIndex <= F && hiddenIndex >= G)
				System.out.println("Yes");
			else
				System.out.println("No");
		}
	}
}