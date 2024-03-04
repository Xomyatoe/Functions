#include <iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
long long int Factorial(int n);
double Power(double a, int n);
#define CALC
//#define FACTORIAL
#define POWER
void main()
{
	setlocale(LC_ALL, "");
	/*int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Diff(a, b) << endl;
	cout << a << "*" << b << "=" << Prod(a, b) << endl;
	cout << a << "/" << b << "=" << Quote(a, b) << endl;*/
	int a;
	int n;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	cout << a <<" ^ " << n << " = " << Power(a, n) << endl;
#ifdef FACTORIAL

	int n; 
	cout << "¬ведите число: "; cin >> n;
	cout << Factorial(n) << endl;
#endif // FACTORIAL


}
int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quote(int a, int b)
{
	return (double)a / b;
}
#ifdef DEBUG

long long int Factorial(int n)
{
	long long int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;

}
#endif // DEBUG



double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}