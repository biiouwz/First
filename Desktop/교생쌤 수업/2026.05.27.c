// #include <stdio.h>

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(void){
//     int x = 10;
//     int y = 20;
//     swap(x,y);
//     printf("%d %d", x, y);   // 값이 바뀌지 않는 이유는? a와 b는 x와 y의 값을 복사한 변수일 뿐 x,y와 다른 변수이다.
// }

// # include <stdio.h>

// int main(void){
//     int number = 10;
//     int *p;
//     p = &number;
//     printf("%d", p);   // 10이 출력이 안되는 이유? number의 주소값을 출력하여 긴 자리의 숫자가 출력됨 = number의 주소값
// }

// #include <stdio.h>

// int main(void){
//     int number = 10;
//     int *p;
//     p = &number;
//     printf("%d", *p);
// }

// #include <stdio.h>

// int main(void){
//     int a = 10;
//     int *p;
//     p = &a;

//     *p = 30;

//     printf("%d %d", *p, a);
// }

// #include <stdio.h>

// int main(void){
//     char *pc;
//     int *pi;
//     double *pd;
//     pc = (char *)10000;
//     pi = (int *)10000;
//     pd = (double *)10000;
//     printf("증가전 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);
//     pc++;
//     pi++;
//     pd++;
//     printf("증가전 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);
// }

// #include <stdio.h>

// int main(void){
//     int a = 10;
//     int *p;
//     p = &a;
//     printf("%d ", (*p)++);   // p를 출력하고 더한거여서 10을 출력하고 현 상태는 11이다
//     printf("%d ", ++*p);    // 더하고 출력하는 거여서 1을더한 값 12를 출력
//     printf("%d ", *p++);    // p를 출력하고 p가 가리키는 주소값을 증가시키는 거여서 12를 출력하고 주소값은 14가 된다
//     printf("%d ", a);   // a를 가리키는 p를 건드리고 있기 때문에 12를 출력
//     printf("%d ", *++p);    // 아까 p의 주소값이 14가 되어 값을 몰라 쓰레기값이 출력됨
// }

// #include <stdio.h>

// void modify(int *ptr){
//     *ptr = 99;
// }
// int main(void){
//     int number = 1;
//     modify(&number);
//     printf("number = %d", number);
//     return 0;
// }

// #include <stdio.h>

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(void){
//     int x = 10;                     // 이렇게 코드를 작성하게 되면 a,b와 x,y는 서로 다른 변수이기 때문에 값이 바뀌지않는다
//     int y = 20;
//     swap(x,y);
//     printf("%d %d", x, y);
// }

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int x = 10;                     // 이렇게 코드를 변경하면 값이 바뀐다.
    int y = 20;
    swap(&x,&y);
    printf("%d %d", x, y);
}