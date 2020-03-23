#include <stdio.h>
void roman2arabic(char input[],char output[])
{
    int count = 0, res = 0;
    char *str, *out;
    str = &input[0];
    out = &output[0];
    for (;*str != '\0'; str++){
        count++;
    }
    str = &input[0];
    for (int i = 0; i < count; i++){
        if (*str == 'I' && *(str + 1) == 'I' && *(str + 2) == 'I'){
            *out = '3';
            str += 2;
        }
        else if(*str == 'I' && *(str + 1) == 'I'){
            *out = '2';
            str += 1;
        }
        else if (*str == 'I' && *(str + 1) == 'V'){
            *out = '4';
            str += 1;
        }
        else if(*str == 'I' && *(str + 1) == 'X'){
            *out = '9';
            str += 1;
        }
        else if(*str == 'I'){
            *out = '1';
        }
        else if (*str == 'V' && *(str + 1) == 'I' && *(str + 2) == 'I' && *(str + 3) == 'I'){
            *out = '8';
            str += 3;
        }
        else if (*str == 'V' && *(str + 1) == 'I' && *(str + 2) == 'I'){
            *out = '7';
            str += 2;
        }
        else if (*str == 'V' && *(str + 1) == 'I'){
            *out = '6';
            str += 1;
        }
        else if (*str == 'V'){
            *out = '5';
        }
        else{
            *out = *str;
        }
        out++;
        str++;
    }
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;

}