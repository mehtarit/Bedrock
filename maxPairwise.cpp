#include <iostream>
#include <cstdint>

using namespace std;

int64_t GetPairwiseProduct(int n, int array[]);

int main() {
    int n = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {	
    	cin >> arr[i];
    }

    int64_t product = GetPairwiseProduct(n, arr);
    cout << product;

    return 0;
}

int64_t GetPairwiseProduct(int n, int array[])
{
	int64_t max = 0;
    int64_t secondMax = 0;

    for(int i = 0; i < n; i++)
    {	
    	if(max < array[i])
    	{
    		secondMax = max;
    		max = array[i];
    	}
    	else if(secondMax < array[i])
    	{
    		secondMax = array[i];
    	}
    }

    int64_t product = max*secondMax;
    return product;
}