#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size of Array\n");
    scanf("%i", &n);
    int arr[n];
    for (short i = 0; i < n; i++)
    {
        printf("Enter %i Element ", i + 1);
        scanf("%i", &arr[i]);
    }

    for (short i = 0; i < n - 1; i++)
    {
        int temp;
        for (short j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (short i = 0; i < n; i++)
        printf("%i\t", arr[i]);

    return 0;
}