#include <stdio.h>

void DecimalToBinary(int num){
    if (num > 1 || num == 1){
        num = num / 2;
        DecimalToBinary(num);
        printf("%i ", num % 2);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%i\n", &num);
    DecimalToBinary(num);
    return 0;
}


