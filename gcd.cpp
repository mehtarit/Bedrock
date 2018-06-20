#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if(a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if(b == 0) return a;

	int a_prime = a % b;

	return gcd(b, a_prime);

}

int main()
{
	int a, b = 0;

	cin >> a >> b;
	cout << gcd(a, b) << endl;
}
