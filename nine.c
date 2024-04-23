#include <stdio.h>
int main(){
    int sp;
    int cp;
    printf("enter cp:");
    scanf("%d",&cp);
    printf("enter sp: ");
    scanf("%d",&sp);
    if (sp>cp){
        printf("profit\n");
        printf("the profit is %d",(sp-cp));
    }
    else{
        printf("loss\n");
        printf("the loss is %d",(cp-sp));
    }
    return 0;
}