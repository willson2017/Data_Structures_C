#include "header.h"

//insert series


//insert sort
void InsertSort(int R[], int n)
{
    int i, j;
    int temp;

    for (i = 2; i <=n; i++)
    {
        temp = R[i];
        j = i-1;
        while(j >=1 && temp < R[j])
        {
            R[j+1] = R[j];
            j--;
        }
        R[j+1] = temp;
    }
}


//half insert sort

//shell sort



//swap series

//Bubble sort
void BubbleSort(int R[], int n)
{
    int i, j, flag;
    int temp;

    for (i = 1; i <=n-1; i++)
    {
        flag = 0;
        for(j = n; j >= i+1; j--)
        {
            if (R[j-1] > R[j])
            {
                temp = R[j];
                R[j] = R[j-1];
                R[j-1] = temp;
                flag = 1;
            }
            if (flag == 0)
                return;
        }
    }

}

//quick sort
void QuickSort(int R[], int l, int r)
{
    int temp;
    int i = l;
    int j = r;
    if (l < r)
    {
        temp = R[l];
        while(i != j)
        {
            while(j > i && R[j] > temp)
                j--;
            if (i < j)
            {
                R[i] = R[j];
                i++;
            }
            while(i < j &&  R[i] < temp)
                i++;
            if (i < j)
            {
                R[j] = R[i];
                j--;
            }
        }
        R[i] = temp;
        QuickSort(R, l, i-1);
        QuickSort(R, i+1, r);
    }
}


//selection sort

void SelectionSort(int R[], int n)
{
    int i, j, k;
    int temp;
    for(i = 1; i <= n; i++)
    {
        k = i;
        for(j = i+1; j <=n; j++)
        {
            if (R[k] > R[j])
                k = j;
        }
        temp = R[i];
        R[i] = R[k];
        R[k] = temp;
    }
}

//heapsort (selection sort)
//build big (small) root heap
void sift(int R[], int low, int high)
{
    int i = low;
    int j = 2*i;
    int temp = R[i];
    while(j <= high)
    {
        if (j < high && R[j] < R[j+1])
            j++;
        if (temp < R[j])
        {
            R[i] = R[j];
            i = j;
            j = 2*i;

        }
        else
            break;
    }
    R[i] = temp;
}
void HeapSort(int R[], int n)
{
    int i;
    int temp;
    for(i=n/2; i >=1; i--) //Ajust the heap
    {
        sift(R, i, n);
    }

    for(i=n; i >= 2; i--) //seperate the array into ordered and unordered, and sort the unordered
    {
        temp = R[1];
        R[1] = R[i];
        R[i] = temp;
        sift(R, 1, i-1);
    }

}

//merge sort (2 groups)

//radix sort(divide and collection)




















