#include <stdio.h>
#define ARRAY_SIZE 3
typedef struct StudentRecord{
    char id[12];
    int midterm;
    int final;
    char grade;
} StudentRecord;
void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {
    int min = 0, max = 0;
    *topMid = &pRec[0];
    *topFin = &pRec[0];
    for (int i = 0; i < size; i++){
      if (pRec[i].midterm > min){
        min = pRec[i].midterm;
        *topMid = &pRec[i];
      }
      if (pRec[i].final > max){
        max = pRec[i].final;
        *topFin = &pRec[i];
      }
      //  *topMid -= 1; //increment only this one, both of them points the same address
    }
}

int main() {

  StudentRecord students[ARRAY_SIZE], *pTopMid, *pTopFin;
  int gradeCount[5] = {0};
  int i;

  for (i=0; i <  ARRAY_SIZE; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);

  }

  findTop(students, ARRAY_SIZE, &pTopMid, &pTopFin);
  printf("Top Score for Midterm:\n");
  printf("Student ID %s with score %d\n", pTopMid -> id, pTopMid -> midterm);
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n", pTopFin -> id, pTopFin -> final);


  return 0;
}