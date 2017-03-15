import java.math.BigInteger;
import java.util.Scanner;

public class ThreeSum {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int N = input.nextInt();
		
		BigInteger mod = BigInteger.valueOf(1000000007);
		
		BigInteger biN = BigInteger.valueOf(N);
		BigInteger biNPlusOne = BigInteger.valueOf(N + 1);
		
		BigInteger expOne = biN.pow(4);
		BigInteger expTwo = BigInteger.valueOf(6).multiply(biN.pow(3));
		BigInteger expThree = BigInteger.valueOf(11).multiply(biN.pow(2));		      
		BigInteger expFour = BigInteger.valueOf(6).multiply(biN);
		
		BigInteger expr = expOne.add(expTwo).add(expThree).add(expFour);
		
		BigInteger sum = biN.multiply(biNPlusOne).multiply(expr).divide(BigInteger.valueOf(48));
		
		System.out.println(sum.mod(mod));
	}
}