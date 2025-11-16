#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int main(){

/*عمليات على الأعداد*/
/*من نفس الاشارة يتدلو القيم فيما بيناتهوم وأذا كان AوBاذا كان */
/*تدي قيمة الضربBتدي قيمة الجمع وAمختلفين في الاشارة A:B */



int A,B,C,D;
printf("Donner les Valeurs de A et B : ");
scanf("%d %d",&A,&B);
if (A*B>0){
    C=A;
    A=B;
    B=C;
    printf("Les valeurs Des A et De B est : \nA : %d \nB : %d \n",A,B);
}
else if (A*B<0){
    C= A+B;
    D= A*B;
    A=C;
    B=D;
    printf("Les valeurs Des A et De B est : \nA : %d \nB : %d \n",A,B);
}
printf("Thank you For Confidence!");

getch();

    return 0;
}