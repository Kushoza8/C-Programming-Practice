#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first side: \n");
    printf("enter second side: \n");
    printf("enter third side: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b && a==c){
        printf("equilateral");
    }
    else if (a==b || c==a || b==c)
    {
        printf("Isosceles");
    }
    
    else{
        printf("scalene");
    }
    return 0;
}