#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int s, int e, int mid)
{

    int count = 0;
    int i, j, k;

    i = s;
    j = mid;
    k = s;

    while (i <= mid - 1 && j <= e)
    {

        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count = count + (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
    return count;
}

int mergeSort(int arr[], int temp[], int s, int e)
{

    int mid, count = 0;
    // b.c.
    if (e > s)
    {
        mid = (s + e) / 2;
        // Left part sorting
        count += mergeSort(arr, temp, s, mid);

        // Right part sorting
        count += mergeSort(arr, temp, mid + 1, e);

        count += merge(arr, temp, s, e, mid + 1);
    }

    return count;
}

int main()
{

    int arr[] = {8, 4, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[n];

    int count = mergeSort(arr, temp, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << count;
    return 0;
}