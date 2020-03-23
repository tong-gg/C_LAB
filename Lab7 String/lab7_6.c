#include <stdio.h>
int charcount (char *s){
    int count = 0;
    for (;*s != '\0'; s++){
        count++;
    }
    return count;
}
void charweave(char *s, char *result){
    int count = charcount(s), a = 0;
    char *word, *src; //นับดีๆ จุดพลาดของข้อนี้คือนับ pointer ผิดตัว
    src = &s[0];
    word = &result[0];
    for (;*src != '\0'; src++){ //จบลูปนี้ชี้ null ถ้าใช้สตริงเดิมอย่าลืมรีเซ็ต
        *word = *src;
        word += 2;
    }
    word = &result[1];
    src--;
    for (int i = 0; i < count; i++){
        *word = *src;
        src--;
        word += 2;
    }
    
    *(result + (count * 2)) = '\0';
    printf("%s", result);
}
int main(){
    char str[100], result[200];
    printf("String: ");
    gets(str);
    charweave(str, result);
    //printf("Output: %s\n", result);
    return 0;

}