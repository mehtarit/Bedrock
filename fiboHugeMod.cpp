#include <iostream>

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


int pisano_length(int m)
{
	if(m == 2) return 3;

//Upper bound: π(m)≤6m with equality iff m=2×5n for n=1,2,3,…. [Attributed to K. S. Brown, proof]

	int max_pisano = 6*m;
	int a = 0;
	int b = 1;
	int c = 1;

	 for(int i = 2; i < max_pisano; i++)
	 {	
	 	calculate_next(a, b, c, m);

	 	if(a == 0 && b == 1) return i-1;
	 }

	 return 1;
}

int n_mod_m(long long n, int m)
{
	int pisano = pisano_length(m);
	int n_prime = n % pisano;
	int fibo_at_n_prime_mod_m = fibonacci(n_prime, m);
	return fibo_at_n_prime_mod_m;

}

int main()
{
	long long n =0;
	int m = 0;

	cin >> n >> m;
	cout << n_mod_m(n, m) << endl;
}