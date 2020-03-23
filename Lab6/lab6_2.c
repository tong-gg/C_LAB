#include <stdio.h>
int main(){
    int subject, credit, total_credit = 0;
    float total_gpa = 0;
    char grade;
    printf("Enter number of subject(s): ");
    scanf("%d", &subject);
    for (int i = 1; i <= subject; i++){
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &grade);
        if (grade == 'A' || grade =='a'){
            total_gpa += credit * 4;
        }
        else if (grade == 'B' || grade =='b'){
            total_gpa += credit * 3;
        }
        else if (grade == 'C' || grade =='c'){
            total_gpa += credit * 2;
        }
        else if (grade == 'D' || grade =='d'){
            total_gpa += credit * 1;
        }
        else if (grade == 'F' || grade =='f'){
            total_gpa += credit * 0;
        }
        total_credit += credit;
    }
    printf("GPA = %.2f", total_gpa / total_credit);
}