#include<stdio.h>
int count(char str[]){
    int i = 0;
    while(str[i] != '\0'){
      i++;
    }
    return i;
}

void reverse(char input[], char result[]) {
    int length = count(input) - 1;
    int m = 0;
    while(length >= 0){
      result[m++] = input[length--];
    }
}

int main()
{
    char input[50];
    int i = 0;
    input[i] = getchar();
    while (input[i] !='\n'){
        i++;
        input[i] = getchar();
    }

    char result[50];
    reverse(input, result);
    printf("%s\n", result);
}