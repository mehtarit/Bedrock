#include <iostream>

using namespace std;


void pre_compute(int arr[])
{
	int n = 60;
	arr[0] = 0;
	arr[1] = 1;
	int previous = 0;
	int current = 1;
	int sum_last_digit = 1;

	for(int i = 2; i < n-1; i++)
	{
		int temp_previous = previous % 10;
		previous = current % 10;
		current = temp_previous + previous;
		sum_last_digit = sum_last_digit % 10 + current % 10;
		arr[i] = sum_last_digit %10;
	}

}

int main()
{
	long long n;

	//pisano period of 10 is 60
	int arr[60];
	pre_compute(arr);

	cin >> n;

	int n_mod_sixty = n % 60;
	cout << arr[n_mod_sixty] << endl;

	return 0;
}