public class Complex
{
	//instance variables
	private double re, imag;
	//default contstructor
	public Complex()
	{
		re = 0;
		imag = 0;
	}
	//overloaded constructors
	public Complex(double x)
	{
		re = x;
	}

	public Complex(double x, double y)
	{
		re = x;
		imag = y;
	}
	//returns real part
	public double re() { return re; }
	//returns imaginary part
	public double imag() { return imag; }

	//concatenates complex number into a string
	public String toString()
	{
		if (imag == 0) return re + "";
	    if (re == 0) return imag + "i";
	    if (imag <  0) return re + " - " + (-imag) + "i";
	    return re + " + " + imag + "i";
	}
	//returns the conjugate of the complex number
	public Complex conjugate() {  return new Complex(re, -imag); }
	//checks if the complex object is real
	public String isReal(Complex a)
	{
		if (a.imag == 0) return "The number is real: " + a.re;
		else if (a.imag <  0) return "The number is not real: " + a.re + " - " + (-a.imag) + "i";
	    else return "The number is not real: " + a.re + " + " + a.imag + "i";
	}
}