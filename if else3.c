#include <stdio.h>
void main(){
    int X,Y,Z,o;//total subject marks=100
    printf("Marks of subject X: ");
    scanf("%d",&X);

    printf("Marks of subject Y: ");
    scanf("%d",&Y);

    printf("Marks of subject Z: ");
    scanf("%d",&Z);

    o=(X+Y+Z)/3;

    if (o >= 0 && o <= 100)
{

    if(o>90){
        printf("A Grade");
    }

    else if(o>70 && o<=90){
        printf("B Grade");
    }

     else if(50<o<=70){
        printf("C Grade");
    }


    else{
        printf("failed");
    }
   }
    else {
        printf("Wrong Data");
    }


}
