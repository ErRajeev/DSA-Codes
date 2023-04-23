#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter Size of Array\n");
    scanf("%i", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element ", i + 1);
        scanf("%i", &arr[i]);
    }

    for ( i = 0; i < n -1; i++)
    {
        int min_index = i;
        for ( j = i + 1; j < n; j++)
            if (arr[j]<arr[min_index])
                min_index = j;
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
    }
    

    for (i = 0; i < n; i++)
        printf("%i\t", arr[i]);

    return 0;
}