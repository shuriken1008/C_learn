#include <ctype.h>
#include <stdio.h>


int main(void){
    char input[50];
    char lower[50];
    char upper[50];
    
    printf("文字を入力してください。(英字)\n");

    scanf("%s", input);

    int i;
    for(i=0; i<50; i++){
        upper[i] = toupper(input[i]);
        lower[i] = tolower(input[i]);
    }
    
    printf("大文字にすると%sです\n", upper);
    printf("小文字にすると%sです\n", lower);


    return 0;
}

