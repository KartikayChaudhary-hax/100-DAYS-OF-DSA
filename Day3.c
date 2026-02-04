#include <stdio.h>

int main() 
{
    int n, k, index=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");

    for(int i=0;i<n;i++) 
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&k);
    int counter=0;

    for(int i=0;i<n;i++)
    {   counter++;
        if(arr[i]==k)
        { 
            index=i; 
            printf("Found at index: %d\n", index);
            break; 
        }
    }
    printf("Comparisons = %d",counter);
    return 0;
}
