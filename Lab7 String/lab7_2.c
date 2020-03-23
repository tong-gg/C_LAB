#include <stdio.h>
int remove_vowel(char string[])
{
    char new_string[80], vowel[] = "aeiouAEIOU";
    char *string_ptr, *vowel_ptr;
    string_ptr = &string[0];
    vowel_ptr = &vowel[0];
    while (*string_ptr != '\0'){
        while (*vowel_ptr != '\0'){
            if (*vowel_ptr == *string_ptr){
                *string_ptr = ' ';
                for (;*string_ptr != '\0'; string_ptr++){
                    *string_ptr = *(string_ptr + 1);
                }
                vowel_ptr = &vowel[0];
                string_ptr = &string[0];
            }
            vowel_ptr++;
        }
        vowel_ptr = &vowel[0];
        string_ptr++;
    } //reset pointer and move character every time it's removed
}
int main(){
    //char str[80];
   char str[80] = "hello, world";
    //printf("Input: ");
    //gets(str);
    remove_vowel(str);
    printf("Output: %s\n", str);
    return 0;
}