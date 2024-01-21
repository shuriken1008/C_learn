#include <ctype.h>
#include <stdio.h>


int main(void){
    char input[50];
        
    printf("文字列を入力してください。\n");

    scanf("%s", input);

    int i;
    int count;
    count = 0;
    for(i=0; i<50; i++){
        if(input[i] == '\0'){
            break;
        }else{
            count ++;
        }
    }
    
    printf("文字列の長さは%dです\n", count);
    


    return 0;
}

