#include<stdio.h>

int main(){

    char ch;

    while(1){

        scanf("%c", &ch);

        if(ch == '\n') break;
        if('a' <= ch && ch <= 'z'){
            printf("%c", ch - 32);
        }else if('A' <= ch && ch <= 'Z'){
            printf("%c", ch + 32);
        }else{
            printf("%c", ch);
        }
    }

    printf("\n");

    return 0;

}