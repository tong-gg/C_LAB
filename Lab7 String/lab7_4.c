#include <stdio.h>
#include <string.h>

int main(){
    int word = 0, ch = 0, count = 0, i;
    char word1[ch + 1], word2[ch + 1]; //เผื่อไว้ใส่ '\0'
    printf("Program Test Case Na\n");
    scanf("%d", &ch);
    scanf("%d", &word);
    scanf("%s", word1);
    for (i = 0; i < word; i++){
        scanf("%s", word2);
        for (int j = 0; j < ch; j++){
            if (word1[j] != word2[j]){
                count++;
            }
        }
        if (count <= 2){
            strcpy(word1, word2);
            count = 0;
        }
        else{
            break;
        }
    }
    for (;i < word - 2; ++i){
        scanf("\n%s", word2);
    }
    printf("%s", word1);
}