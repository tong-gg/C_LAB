#include <stdio.h>
int main(){
    char string[256], vowel[] = "aeiouAEIOU";
    char *string_ptr, *vowel_ptr;
    int count = 0;
    string_ptr = &string[0];
    vowel_ptr = &vowel[0];
    printf("String (without a space): ");
    scanf("%s", string);
    while(*string_ptr != '\0'){
        while(*vowel_ptr != '\0'){
            if (*string_ptr == *vowel_ptr){
                printf("%c ", *vowel_ptr);
                count+= 1;
            }
            vowel_ptr++;
        }
        vowel_ptr = &vowel[0];
        string_ptr++;
    }
    if (count == 1 || count == 0)
        printf("\nThis string contains %d vowel.", count);
    else{
        printf("\nThis string contains %d vowels.", count);
    }
    
}