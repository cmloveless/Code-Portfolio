public class ComplexPair
{
	//variable declaration
	private String pair;
	//default constructor
	public ComplexPair()
	{
		pair = "";
	}
	//overloaded constructors
	public ComplexPair(Complex a)
		{
			pair = a.toString();
	}

	public ComplexPair(Complex a, Complex b)
	{
		pair = a.toString() + b.toString();
	}
	//accessor method
	public String getPair()
	{
		return pair;
	}
	//mutator method
	public void setPair(String s)
		{
			pair = s;
	}
	//check if roots are equal
	public String isEqual(Complex a, Complex b)
	{
		if (a.re() == b.re() && a.imag() == b.imag())
			return "Both complex numbers are identical!";
		else
			return "The complex numbers are not identical";
	}
}