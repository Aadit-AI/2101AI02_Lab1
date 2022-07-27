#include <stdio.h>

int main(){
    double n,m;
    char operator;
    printf("Enter your 2 numbers on which operations are to be performed in order\n");  
    scanf("%lf %lf",&n,&m);
    
    printf("Enter the operation to be performed which are  '+' ; '-' ; '*' ; '/' \n");
    scanf(" %c", &operator);
    switch (operator){
    case '+' :
            printf("%lf",n+m);
            break;
    
    case '-' :
            printf("%lf",n-m);
            break;
            
    case '*' :
            printf("%lf" ,n*m);
            break;
    
    case '/' :
            printf("%lf", n/m);
            break;
    default : 
            printf("Enter suitable operator");
    }
    return 0;
}
