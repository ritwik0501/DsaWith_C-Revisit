#include <iostream>
using namespace std;

int LargestElementInarray2(int arr[], int size)
{
    int smallest = 0;
    for (int i = 0; i < size; i++)
    {
       if (arr[i] > smallest)
            {
                smallest = arr[i];
            }
    }
    return smallest;
}

int main()
{
    int arr[] = {100 , 3, 4, 500, 6, 7, 8};
    int size = 7;
    cout<<"Largest Element In array "<<LargestElementInarray2(arr,size);
}