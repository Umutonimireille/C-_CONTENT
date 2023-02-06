#include <iostream>

using namespace std;

// Function to calculate sum
int EvenOddSum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	int diff;
	for (int i = 0; i < n; i++) {
		// Loop to find even, odd sum
		if (i % 2 == 0)
			even += arr[i];
		else
			odd += arr[i];
	}

	cout << "Even index positions sum " << even;
	cout << "\nOdd index positions sum " << odd;
	diff = odd - even;
	cout<<"the diff is:"<<diff;
//	return diff ;
}

// Driver function
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	EvenOddSum(arr, n);

	return 0;
}

