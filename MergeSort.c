#include <stdio.h>
#include <stdlib.h>
int c;
void mergeSort(int[], int, int);
void merge(int[], int, int, int);
int main()
{
    int a[50], n, i;

    printf("Enter the elements: ");
    scanf("%d", &n);
    printf("Enter elements : ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("before sort\n");
    mergeSort(a, 0, n - 1);
    printf("after sort\n");

    printf("\nSorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nNumer of exchanges: %d", c);
    return 0;
}
void merge(int A[], int beg, int mid, int end)
{
    int temp[35], i, j, k;
    k = 0;
    i = beg;
    j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (A[i] < A[j])
        {
            temp[k++] = A[i++];
            c++;
        }
        else
        {
            temp[k++] = A[j++];
            c++;
        }
    }
    while (i <= mid)
    {
        temp[k++] = A[i++];
        c++;
    }
    while (j <= end)
    {
        temp[k++] = A[j++];
        c++;
    }
    for (i = end; i >= beg; i--)
    {
        A[i] = temp[--k];
    }
}

void mergeSort(int a[], int BEG, int END)
{
    if (BEG < END)
    {
        int MID = (BEG + MID) / 2;
        mergeSort(a, BEG, MID);
        mergeSort(a, MID + 1, END);
        merge(a, BEG, MID, END);
    }
}

