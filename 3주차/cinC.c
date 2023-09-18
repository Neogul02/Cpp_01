#include <stdio.h>

int main(void){
    int width=0, height=0;

    scanf("너비를 입력하세요 >> %d", &width);
    scanf("높이를 입력하세요 >> %d", &height);
    printf("면적은 %d \n", width*height);
    return 0;
}