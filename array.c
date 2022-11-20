#include <stdio.h>

int main()
{

    // ARRAY 1 DIMENSI
    int c[3]; // artinya adalah variable x ada 10
    c[0] = 1;
    c[1] = 2;
    c[2] = 1;


    //  x[2] = 5; // artinya isi dari array no 2 adalah 5
    //  printf("%d\n", x[2]); // print nilai dari x[2]
    //  printf("%d\n", x[0]);
    // ARRAY 2 DIMENSI
    int x[2][2] = {
        {1, 2},
        {1, 2},
    };

    int z[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };
    // printf("%d", sqrt(sizeof(x)/sizeof(x[0][0])));

    printf("%s", "Masukan panjang array X");
    int lengthArrayX;
    scanf("%d", &lengthArrayX);
    getchar();
    printf("%s", "Masukan panjang array Y");
    int lengthArrayY;
    scanf("%d", &lengthArrayY);
    getchar();

    for (int i = 0; i < lengthArrayX; i++)
    {
        for (int y = 0; y < lengthArrayY; y++)
        {
            printf("%d ", z[i][y]);
        }
        printf("\n");
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int y = 0; y < 5; y++)
    //     {
    //         printf("%d", z[i][y]);
    //     }
    //     printf("%c\n");
    // }

    // ARRAY 2 DIMENSI
    //  int y[10][30]; // array ke basamping 10 ke bawah 30
    // 1 1 1 1 1 1 1 1 1 (sebanyak 10)
    //(ke bawah sebanyak 30)

    // TUGAS!!
    //  membuat formasi seperti dibawah :
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int y = 0; y < 2; y++)
    //     {
    //         // printf("%d", i);
    //         // printf("%s", ",");
    //         // printf("%d\n", y);
    //         // x[i][y] = 10;
    //         printf("%d", x[i][y]);
    //         printf("%c", y == 3 - 1);
    //         // printf("%s", y == 2 - 1);

    //         // printf("%c", " \n"[y == 2 - 1]);
    //     }
    //     printf("%c\n");
    //     // printf("%d\n", x);
    // }
}