// to find the value of a floating point number raised to an integer power.
#include <stdio.h>

float power(float a,float b);

int main() {
    float x,n,y;
    printf("Enter a number: ");
    scanf("%f",&x);
    printf("Enter the power to be raised to: ");
    scanf("%f",&n);
    y=power(x,n);
    printf("%f^%f=%f ",x,n,y);
    return 0;
}
float power(float a,float b){
    float c=1.0,i;
    if(b>0){
        for(i=0;i<b;i++){
            c=c*a;
        }
    }
    else{
        for(i=0;i>b;i--){
            c=c/a;
        }
    }
    return c;
}
