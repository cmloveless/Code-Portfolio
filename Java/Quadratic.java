import java.lang.Math;

public class Quadratic
{
	//variables
	private double a, b, c, discrim, root1, root2;
	//default constructor
	public Quadratic()
	{
		a = 0.0;
		b = 0.0;
		c = 0.0;
		discrim = 0.0;
	}
	//overloaded constructor
	public Quadratic(double newa, double newb, double newc)
	{
		a = newa;
		b = newb;
		c = newc;

	}
	//mutator methods
	public void setA(double newa)
	{
		a = newa;
	}

	public void setB(double newb)
	{
		b = newb;
	}

	public void setC(double newc)
	{
		c = newc;
	}

	public double discriminant()
	{
		return (b*b)- (4 * a * c);
	}

	//the actual solution method
	public ComplexPair solve(Quadratic solution)
	{
		if (solution.a == 0)
		{
			ComplexPair linear = new ComplexPair();
			linear.setPair("This is a linear equation.");
			return linear;
		}
		if (solution.discriminant() > 0)
		{
			root1 = ((-solution.b) + Math.sqrt(solution.discriminant())) / (2 * solution.a);
			root2 = ((-solution.b) - Math.sqrt(solution.discriminant())) / (2 * solution.a);
			Complex r1 = new Complex (root1);
			Complex r2 = new Complex (root2);
			return new ComplexPair(r1, r2);
		}
		if (solution.discriminant() == 0)
		{
			root1 = (-solution.b) / (2 * solution.a);
			Complex r1 = new Complex(root1);
			return new ComplexPair(r1);
		}
		if (solution.discriminant() < 0)
		{
			solution.root1 = (-solution.b) / (2 * solution.a);
			solution.root2 = (Math.sqrt(-1 * solution.discriminant())) / (2 * solution.a);
			Complex r1 = new Complex (root1);
			Complex r2 = new Complex (root2);
			return new ComplexPair(r1,r2);
		}
		else
		{
			ComplexPair error = new ComplexPair();
			error.setPair("Something has gone wrong :(");
			return error;
		}
	}


}