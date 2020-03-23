#include <stdio.h>
int main(){
    int hour, minutes;
    char unit;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&hour, &minutes, &unit);
    if ((unit == 'p' || unit == 'P') && hour != 12){
        hour += 12;
        printf("Equivalent 24-hour time: %02d:%02d",hour, minutes);
    }
    else if (hour == 12){
        if (unit == 'p' || unit == 'P'){
            printf("Equivalent 24-hour time: %02d:%02d",hour, minutes);
        }
        else{
            hour -= 12;
            printf("Equivalent 24-hour time: %02d:%02d",hour, minutes);
        }
    }
    else{
        printf("Equivalent 24-hour time: %02d:%02d",hour, minutes);
    }
}