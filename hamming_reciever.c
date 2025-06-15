#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char data[20];
    int data1[20],data2[6];
    int dl,i=0,j=0,r=0,k=0,z,c,l;

    printf("Enter the Codeword : ");
    scanf("%s",data);
    dl = strlen(data);
    printf("%d",dl);

    while(1){
        if(pow(2,i) >= dl  + 1) break;
        i++;
    }
    r = i; // number of parity bit
    j = dl -1; // last position of the char[data]

    for(i = 0 ; i < dl ; i++){
        data1[i] = data[i] - 48;
        j--;
    }

    l = 1; // it is used to store the parity values in data2[]
    int count= 0; // it is used to check whether all the parityvalues are 0 or not

    for(i =0;i<r;i++){
        z = pow(2,i);
        c = 0 ;
        for(j = z ; j < dl ; j = z + k){
            for(k = j; k < z+j ; k++ ){
                if(k <= dl) {
                    c = c + data1[k];
                }
            }
        }
        data2[i] = c % 2;
        count = count + data2[i];
        l++;
    }

    if(count == 0){
        printf("\n Actual data recieved. \n");
    }else{
        printf("\n Wrong data received \n"); 
        j=0; 
        for(i=r;i>=1;i--) //this loop will convert wrong binary bit position into decimal value { 
            if( data2[i] == 1 )    j = j + pow(2,(i-1)); 
        } 
        printf("\n Error at position %d",j); 
        if(data1[j]==0) //correct the error at that position 
            data1[j]=1; 
        else 
            data1[j]=0; 
        printf("\n Corrected codeword is: "); 
        for(i=dl;i>=1;i--) 
            printf("%d ",data1[i]); 
        printf("\n"); 

    printf("Corrected data is : ");
    for(i = dl ; i > 0; i--){
        printf("%d",data1[i]);
    }

}