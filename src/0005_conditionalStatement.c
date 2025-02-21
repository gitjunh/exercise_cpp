// /* if문 이란? */
// #include <stdio.h>
// int main() {
//     int i;
//     printf("입력하고 싶은 숫자를 입력하세요! : ");
//     scanf("%d", &i);

//     if(i == 7) {
//         printf("당신은 행운의 숫자 7을 입력했습니다.");
//     }

//     return 0;
// }


/* 나눗셈 예제 */
// #include <stdio.h>
// int main() {
//     double i, j;
//     printf("나누고 싶은 두 정수를 입력하세요. : ");
//     scanf("%lf %lf", &i, &j);
//     printf("%f를 %f로 나는 결과는 : %f \n", i, j, i/j);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     double i, j;
//     printf("나누고 싶은 두 정수를 입력하세요 : ");
//     scanf("%lf %lf", &i, &j);

//     if(j == 0){
//         printf("0으로 나눌 수 없습니다. \n");
//         return 0;
//     }

//     printf("%f를 %f로 나눈 결과는 : %f \n", i, j, i/j);
//     return 0;
// }


/* 합격 ? 불합격 ? */
// #include <stdio.h>
// int main() {
//     int score;

//     printf("당신의 수학점수를 입력하세요! : ");
//     scanf("%d", &score);

//     if(score >= 90) {
//         printf("당신은 합격입니다! \n");
//     }

//     if(score < 90) {
//         printf("당신은 불합격 입니다! \n");
//     }

//     return 0;
// }


/* 크기 비교하기 */
// #include <stdio.h>
// int main() {
//     int i, j;

//     printf("크기를 비교할 두 수를 입력해 주세요 : ");
//     scanf("%d %d", &i, &j);

//     if(i > j)
//     {
//         printf("%d는 %d 보다 큽니다. \n", i, j);
//     }

//     if(i < j)
//     {
//         printf("%d는 %d 보다 작습니다. \n", i, j);
//     }

//     if(i >=j)
//     {
//         printf("%d는 %d 보다 크거나 같습니다. \n", i, j);
//     }

//     if(i <= j)
//     {
//         printf("%d는 %d보다 작거나 같습니다. \n", i, j);
//     }

//     if(i == j)
//     {
//         printf("%d는 %d와(과) 같습니다. \n", i, j);
//     }

//     if(i != j)
//     {
//         printf("%d는 %d와(과) 다릅니다. \n", i, j);
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int num;

//     printf("아무 숫자나 입력해 보세요: ");
//     scanf("%d", &num);

//     if(num == 7) {
//         printf("행운의 숫자 7 이군요!\n");
//     } else {
//         printf("그냥 보통 숫자인 %d를 입력했군요\n", num);
//     }

//     return 0;
// }


/* if - else 죽음의 숫자? */
// #include <stdio.h>
// int main() {
//     int num; 

//     printf("아무 숫자나 입력해 보세요 : ");
//     scanf("%d", &num);

//     if(num == 7) {
//         printf("행운의 숫자 7 이군요\n");
//     } else {
//         if(num == 4)
//         {
//             printf("죽읨의 숫자 5인가요 ;;;\n");
//         } else {
//             printf("그냥 평범한 숫자 %d\n", num);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     float ave_score;
//     float math, english, science, programming;

//     printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해주세요.! : ");
//     scanf("%f %f %f %f", &math, &english, &science, &programming);

//     ave_score = (math + english + science + programming) / 4;
//     printf("당신의 평균 점수는 %f 입니다. \n", ave_score);
//     if(ave_score >= 90) {
//         printf("당신은 우등생 입니다.");
//     } else if(ave_score >= 40) {
//         printf("조금만 노력하세요!. \n");
//     } else {
//         printf("공부를 발로 합니까?\n");
//     }
//     return 0;
// }

/* 크기 비교 */
// #include <stdio.h>
// int main() {
//     int a;
//     printf("아무 숫자나 입력하세요 : ");
//     scanf("%d", &a);

//      if(a >=10) {
//         if( 1 < 20) {
//             printf(" %d는 10 이상, 20 미만인 수 입니다. \n", a);
//         }
//      }
//      return 0;
// }

/* 논리 연산자 */
#include <stdio.h>
int main() {
    int a;
    printf("아무 숫자나 입력하세요 : ");
    scanf("%d", &a);

    if(a >= 10 && a < 20) {
        printf("%d는 10 이상, 20 미만인 수 입니다. \n", a);
    }
    return 0;
}


















