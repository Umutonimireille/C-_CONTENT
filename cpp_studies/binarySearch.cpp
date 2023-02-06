#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int result = binarySearch(arr, n, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index: " << result;

    return 0;
}

