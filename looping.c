#include <stdio.h>

int main()
{

    // LOOPING
    //  terdiri dari 3 komponen utama yaitu for (deklarasi;  operasi/limitasi/batasan ;komputasi){
    //  }

    // METHOD 1 FOR

    // for (int i = 0;  // #1
    //      i < 5;  // #3
    //      i++)  // #2
    // {
    //     printf("%d", i);
    // }

    // for (int i = 7; i > 0; i = i - 2)
    // {
    //     printf("%d\n", i);
    // }

   

    // METHOD 2 DO-WHILE

    // int i = 0;
    // do
    // {
    //     printf("%d", i);
    //     // i++;
    //     i = i + 1;
    // } while (i < 5);

    // LOOPING 2 DIMENSI

    for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("%d", i*i);
        }
    }
    return 0;
    
    
    // 7
    // 5
    // 3
    // 1
    
    
    // 0000111144449999
    
    
    //11111
    //22222
    //33333
    //44444
    //55555
    
    
    //12345
    //12345
    //12345
    //12345
    //12345

    
}