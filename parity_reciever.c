#include <stdio.h>
#include <string.h>

int main(){
    char string[15], ch;
    int c = 0, count = 0;
    printf("Enter the codeword provided by the sender : ");
    gets(string);
    printf("The codeword sent by sender is ");
    puts(string);

    while (string[c] != '\0'){
        if ((string[c] == '1')){
            count++;
        }
        c++;
    }
    printf("Total no of 1s: %d", count);
    printf("\nEnter the mode of parity: 'e' for Even and 'o' for Odd : ");
    scanf("%c", &ch);
    switch (ch){
        case 'e':
            if (count % 2 == 0){
                printf("No error");
            }else{
                printf("Error");
            }
            break;
        case 'o':
            if (count % 2 == 0){
                printf("Error");
            }else{
                printf("No Error");
            }
            break;
    }
    return 0;
}
