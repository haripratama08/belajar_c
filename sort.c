#include <stdio.h>

int main()
{

    int n[5] = {5, 1, 2, 4, 3};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");
    printf("Setelah diurutkan");
    printf("\n");
    // buble sort

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (n[j] < n[j + 1])
            {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}