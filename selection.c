#include <stdio.h>

int main()
{
    // angka 1,  operator,  angka 2
    double nilaiA, nilaiB;
    char operator;
    
    // METHOD 1
    // scanf("%lf %c %lf", &nilaiA, &operator, & nilaiB);
    // if (operator== '+')
    // {
    //     printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA + nilaiB);
    // }
    // else if (operator== '-')
    // {
    //     printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA - nilaiB);
    // }
    // else if (operator== '*')
    // {
    //     printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA * nilaiB);
    // }
    // else if (operator== '/')
    // {
    //     printf("%.2lf %c %.2lf = %.2lf", nilaiA, operator, nilaiB, nilaiA / nilaiB);
    // }
    // else
    // {
    //     printf("%s", "Operator tidak terdefinisi");
    // }


    // METHOD 2
//     switch (operator)
//     {
//     case '+':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA+nilaiB);
//         break;
//     case '-':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA-nilaiB);
//         break;
//    case '*':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA*nilaiB);
//         break;
//     case '/':printf("%.2lf %c %.2lf = %.2lf",  nilaiA, operator, nilaiB, nilaiA/nilaiB);
//         break;
//     }
    
    
    return 0;
}