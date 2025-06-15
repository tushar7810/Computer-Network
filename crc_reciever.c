#include<stdio.h>
#include<string.h>

void main (){
    // reciever

    int dl,divl,i,j;
    char data[20],data1[20],divisor[6];
    printf("\nEnter the codeword : ");
    gets(data);
    dl=strlen(data);
    printf("\nEnter the cofficient of divisor : ");
    gets(divisor);
    divl = strlen(divisor);
    strcpy(data1,data);
    for(int i = 0 ; i<dl - (divl-1);i++){
        if(data[i] == '1'){
            for(int j=0;j<divl;j++){
                if(data[i+j] == divisor[j]){
                    data[i+j] = '0';
                }else data[i+j] = '1';
            }
        }
    }

    j=0; 
    for(i=dl-(divl-1);i<dl;i++) 
        j=j+data[i]-48; 
        
    if(j==0){ 
        printf("\nOriginal data receive\n"); 
        printf("\n Actual data : "); 
        for(i=0;i<dl-(divl-1);i++) 
        printf("%c ",data1[i]); 
    } 
    else printf("\n data recv wrong \n");
}

/*
Enter the codeword : 100100001

Enter the cofficient of divisor : 1101

Original data receive

Actual data : 1 0 0 1 0 0
*/