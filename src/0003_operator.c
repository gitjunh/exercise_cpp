/* 산술 연산 */
// #include <stdio.h>
// int main() {
//     int a, b;
//     a = 10;
//     b = 3;
//     printf("a + b는 : %d \n", a + b);
//     printf("a - b는 : %d \n", a - b);
//     printf("a * b는 : %d \n", a * b);
//     printf("a / b는 : %d \n", a / b);
//     printf("a %% b는 : %d \n", a % b);
// }

// int main() {
//     int a, b;
//     a = 10;
//     b = 3;
//     printf("a / b는 : %f \n", a / b);
//     return 0;
// }

// /* 산술 변환 */
// int main() {
//     int a;
//     double b;

//     a = 10;
//     b = 3;
//     printf("a / b는 : %f \n", a / b);
//     printf("b / a는 : %f \n", b / a);
//     return 0;
// }

/* 대입 연산자 */
// int main() {
//     int a = 3;
//     a = a + 3;
//     printf("a의 값은 : %d \n", a);
//     return 0;
// }

// /* 비트 연산 */
// #include <stdio.h>
// int main() {
//     int a = 0xAF; // 10101111;
//     int b = 0xB5; // 10110101;

//     printf("%x \n", a & b); // 10100101  
//     printf("%x \n", a | b); // 10111111
//     printf("%x \n", a ^ b); // 00011010
//     printf("%x \n", ~a); // 1....1 01010000 
//     printf("%x \n", a << 2); // 10111100
//     printf("%x \n", a >> 3); // 00010110

//     return 0;
// }

#include <stdio.h>
int main() {
    int a = 2147483647;
    printf("a : %d \n", a);
    a++;
    printf("a : %d \n", a);
    return 0;
}