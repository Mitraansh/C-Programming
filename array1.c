#include <stdio.h>
  
void printKMax(int arr[], int n, int k)
{
    int j, max;
  
    for (int i = 0; i <= n - k; i++) {
        max = arr[i];
  
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }
}
  
// Driver Code
int main()
{
    int arr[100000] ;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",n);
    int k = 3;
    printKMax(arr, n, k);
    return 0;
}