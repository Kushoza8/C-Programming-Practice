#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("a is greatest");
    }
    else if (b>a && b>c)
    {
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }
    return 0;
}