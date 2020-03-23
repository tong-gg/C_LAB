#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char* stoupper (const char string[]){ //why return type must be pointer?
    char *result_func;
    int count = 0, k = 0;
    for (int i = 0; string[i] != '\0'; i++){
        count++;
    }
    result_func = (char*)malloc(sizeof(char) * count);
    for (int j = 0 ;string[j] != '\0'; j++){
        if (islower(string[j])){
            result_func[k] = toupper(string[j]);
        }
        else{
            result_func[k] = string[j];
        }
        k++;
    }
    return result_func;
}
int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}