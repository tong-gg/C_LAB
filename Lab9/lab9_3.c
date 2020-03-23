#include <stdio.h>
#include <math.h>
typedef struct Point {
    double X, Y;
} Point;

int main(){
    int n = 0;
    double dX = 0, dY = 0, result = 0;
    printf("Number of Points: ");
    scanf("%d", &n);
    Point points[n]; //assign value to n before initialize array
    for (int i = 1 ; i <= n; i++){ // first incorrect 'cuz you assign value to array[1]
        printf("P%d.X: ", i);
        scanf("\n%lf", &points[i - 1].X);
        printf("P%d.Y: ", i);
        scanf("\n%lf", &points[i - 1].Y);
    }
    printf("Length:\n");
    for (int i = 1; i < n; i++){
        dX = (points[i].X - points[i - 1].X) * (points[i].X - points[i - 1].X);
        dY = (points[i].Y - points[i - 1].Y) * (points[i].Y - points[i - 1].Y);
        result = sqrt((dX + dY));
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i, points[i - 1].X, points[i - 1].Y, i + 1, 
        points[i].X, points[i].Y, result);
    }
}