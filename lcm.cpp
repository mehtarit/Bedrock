#include <iostream>

using namespace std;


int get_gcd(int a, int b)
{
	if(b == 0) return a;

	int a_prime = a % b;

	return get_gcd(b, a_prime);

}


int64_t lcm(int a, int b)
{
	if(a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int gcd = get_gcd(a, b);

	int64_t a_by_gcd= a/gcd;

	int64_t lcm = b*a_by_gcd;

	return lcm;
}

int main()
{
	int a, b = 0;

	cin >> a >> b;

	cout << lcm(a, b) << endl;
}