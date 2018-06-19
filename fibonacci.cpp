#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if(n < 2) return n;

	n = n+1;

	int arr[n];
	arr[0] = 0;
	arr[1] = 1;

	for(int i = 2; i < n; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}

	return arr[n-1];
}

int main()
{
	int n = 0;

	cin >> n;

	cout << fibonacci(n) << '\n';
}