#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int main(){

/*تحديد صنف الطفل انطلاقا من عمره*/

debut :
int age ; 
printf("Give me your Age : ");
scanf("%d",&age);
if (age==6 || age==7)
    printf("Le Categorie est: Poussin !\n");
else {
    printf("$$!!\n");
    goto debut ;}



getch();


    return 0;
}