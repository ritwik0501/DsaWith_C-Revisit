#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (end >= start)
    {
        if (arr[mid] < target)
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }

    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 46;
    int pos=binary_search(arr, size, target);
    cout << "position for "<< target << " is :  " << pos;
}