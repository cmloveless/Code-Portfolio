import java.util.Scanner;

public class QFormula
{
	public static void main(String [] args)
	{
		double a, b, c;
		Scanner input = new Scanner(System.in);

		System.out.print("Please enter a value for a: ");
		a = input.nextDouble();

		System.out.print("Please enter a value for b: ");
		b = input.nextDouble();

		System.out.print("Please enter a value for c: ");
		c = input.nextDouble();

		Quadratic quad = new Quadratic(a, b, c);

		ComplexPair answer = quad.solve(quad);

		System.out.print("The roots are: " + answer.getPair());
	}
}