#include<stdio.h>
#include<conio.h>
int main(){
    int a,count=0,num=0;

    printf("Plz enter a num:- ");
    scanf("%d",&num);

        for(a=1;a<=num;a++){
            if(num%a==0)
                {count++;}
            }

    if(count==2){printf("Is Prime");}
    else {printf("Not Prime");}

return 0;
}
