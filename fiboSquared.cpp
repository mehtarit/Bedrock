#import <iostream>

using namespace std;

void calculate_next(int& a, int& b, int& c, int m)
{
	c = (a+b) % m;
	a = b;
	b = c;
}

int fibonacci(int n, int m)
{
	//gives the nth fibonacci number

	int a = 0;
	int b = 1;
	int c = n;

	for(int i = 1; i < n; i++)
	{
		calculate_next(a, b, c, m);
	}

	return c;
}

int getLastDigitFibo(long long n)
{
	int pisano = 60; //pisano length for 10 is 60
	int n_prime = n % pisano;
	int fibo_at_n_prime_mod_ten = fibonacci(n_prime, 10);
	return fibo_at_n_prime_mod_ten % 10;
}

int main()
{
	long long n;

	cin >> n;

	//edge cases

	if(n < 3)
	{
		cout << n << endl;
		return 42;
	}

	int last_digit_n = getLastDigitFibo(n);
	int last_digit_n_minus_one = getLastDigitFibo(n-1);

	int result = last_digit_n*(last_digit_n + last_digit_n_minus_one);
	result = result % 10;

	cout << result << endl;
	return 42;
}