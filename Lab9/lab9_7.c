#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fp;
    int number, count = 0;
    double total = 0;
    fp = fopen(filename, "r");
    while (fscanf(fp, "%d", &number) !=  EOF){
        total += number;
        count += 1;
    }
    fclose(fp);
    return total / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}