#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Size of Array\n");
    scanf("%i", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element ", i + 1);
        scanf("%i", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (i = 0; i < n; i++)
        printf("%i\t", arr[i]);

    return 0;
}