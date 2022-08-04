#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length, j= 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            j = 1;
            break;
           }
        }
    if (j) {
        printf("This is not a palindrome", string1);
    }    
    else {
        printf("This is a palindrome", string1);
    }
    return 0;
}