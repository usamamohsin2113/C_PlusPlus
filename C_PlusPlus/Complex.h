// Use of complex numbers with some errors in formulaes

#include <iostream>

class complex
{
	int real, comp;
public:
	complex() :real(0), comp(0) {}
	complex(int r, int c) :real(c), comp(c) {}

	void set()
	{
		using std::cout;
		using std::cin;

		cout << "\nEnter real part : ";
		cin >> real;
		cout << "\nEnter complex part : ";
		cin >> comp;
	}

	void get()
	{
		using std::cout;

		if (comp > 0)
			cout << real << " + " << comp << " i";
		else
			cout << real << " - " << -(comp) << " i";
	}

	complex operator +(complex data)
	{
		complex temp;
		temp.real = real + data.real;
		temp.comp = comp + data.comp;

		return temp;
	}

	complex operator -(complex data)
	{
		complex temp;
		temp.real = real - data.real;
		temp.comp = comp - data.comp;

		return temp;
	}

	complex operator *(complex data)
	{
		complex temp;
		temp.real = real * data.real - comp * data.comp;
		temp.comp = real * data.comp + data.comp * real;

		return temp;
	}

	bool operator >(complex data)
	{
		if (real > data.real)
			return true;
		else
			false;
	}

	bool operator <(complex data)
	{
		if (real < data.real)
			return true;
		else
			false;
	}

	bool operator >=(complex data)
	{
		if (real >= data.real)
			return true;
		else
			false;
	}

	bool operator <=(complex data)
	{
		if (real <= data.real)
			return true;
		else
			false;
	}

	bool operator ==(complex data)
	{
		if (real == data.real)
			return true;
		else
			false;
	}
};

void main2()
{
	using std::cout;
	complex ob1, ob2, ob3;

	ob1.set();
	ob2.set();

	ob3 = ob1 + ob2;
	cout << "\n\nSum of Given values : ";
	ob3.get();

	ob3 = ob1 - ob2;
	cout << "\n\nDiffrence of Given values : ";
	ob3.get();

	ob3 = ob1 * ob2;
	cout << "\n\nProduct of Given values : ";
	ob3.get();

	cout << "\n\n";
}
