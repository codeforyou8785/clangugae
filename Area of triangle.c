//WAP TO FIND THE AREA OF TRIANGLE WHEN THREE DIFFERENT SIDES ARE GIVEN

#include <stdio.h>
#include<stdbool.h>
#include <math.h>
int main(){
        printf("Enter the first side of triangle = ");
        float a ;
        scanf("%f",&a);
        printf("Enter the second side of triangle = ");
        float b;
        scanf("%f",&b);
        printf("Enter the third side of triangle = ");
        float c,s, A;
        scanf("%f",&c);
        s = (a + b + c)/2;
        while (true){
                if ((s>a)&&(s>b)&&(s>c)){
                        A = sqrt(s*(s-a)*(s-b)*(s-c));
                        printf("\nArea of triangle = %f",A);
                        break;
                }
                if((s<=a)||(s<=b)||(s<=c)){
                        printf("Zero or negative result is not possible by Heron’s formula");
                        break;


                }
        }

        printf("\n");
        return
}
