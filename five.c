#include <stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if (age>18){
        printf("the person is allowed to vote");
    }
    else{
        printf("the person is not allowed to vote");
    }
    return 0;
}