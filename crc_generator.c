#include<stdio.h>
#include<string.h>

void main(){

    // Generator

    char data[20] , divisor[10], data1[20];
    int dl,divl , i,j;
    printf("\n Enter the input data : ") ;
    gets(data);
    printf("Enter the coefficienet of geretor polynomial : ");
    gets(divisor);
    dl = strlen(data);
    divl = strlen(divisor);
    for(i=0;i<divl-1;i++)
        data[dl+i] = '0';

    data[dl+i] = '\0';

    printf("\n Updated devident : %s", data);
    strcpy(data1,data);
    for(i=0;i<dl;i++){
        if(data1[i] == '1'){
            for(j=0;j<divl;j++){
                if(data1[i+j] == divisor[j]){
                    data1[i+j] = '0';
                }else{
                    data1[i+j] = '1';
                }
            }
        }
    }

    
    for(i=dl;i<dl+ (divl -1); i++){
        data[i] = data1[i];
    }

    printf("\n The codeword is : %s" , data);
    // return 0;

    /*
    Enter the input data : 100100
    Enter the coefficienet of geretor polynomial : 1101

    Updated devident : 100100000
    The codeword is : 100100001
    */

}