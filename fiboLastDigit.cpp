#include <iostream>

using namespace std;

int fibo_last_digit(int n)
{
	if(n < 2) return n;

	int previous = 0;
	int current = 1;

	for(int i = 0; i < n -1; i++)
	{
		int tmp_previous = previous % 10;
		previous = current % 10;
		current = tmp_previous + previous;
	}

	return current % 10;
}

int main()
{
	int n = 0;
	cin >> n;
	cout << fibo_last_digit(n) << '\n';
}