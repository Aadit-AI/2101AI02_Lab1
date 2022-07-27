#include <stdio.h>

int main(){
    int n,m;
    char operator;
    printf("Enter your 2 numbers on which operations are to be performed");  
    scanf("%d %d",&n,&m);
    
    printf("Enter the operation to be performed which are  + ; - ; * ; / ");
    scanf(" %c", &operator);
    switch (operator){
    case '+' :
            printf("%d",n+m);
            break;
    default : 
            printf("Enter suitable operator");
    }
    return 0;
}
