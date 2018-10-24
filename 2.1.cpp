#include<iostream>
using namespace std;
typedef long long ll;
///SMO-1702027
int count,ck,c;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    c++;
}

void bubbleSort(int arr[], int n)
{

   int i, j;
   for (i = 0; i < n-1; i++)
   {
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);

        }
        count++;
     }
     ck++;
   }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n\n%d Comparisons %d Passes %d Interchanges.\n",count,ck,c);
}


int main()
{
    int arr[] = {'P','E','O','P','L','E',};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
