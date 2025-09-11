#include <iostream>
using namespace std;

bool Threesum(int arr[], int size, int target)
{
    // sort the array
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size - 2; i++)
    {
        int findnumber = target - arr[i];
        int start = i + 1;
        int end = size - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == findnumber)
            { 
                return true;
            }
            else if (arr[start] + arr[end] > findnumber)
            {
                end = end - 1;
            }
            else
            {
                start = start + 1;
            }
        }
    }
    return false;
}

int main()
{
   
    int arr[] = {1, 4, 45, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool res = Threesum(arr, size, 24);
   
    if (res)
    {
        cout << "Possible 3 sum " << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}