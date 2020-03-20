#include <stdio.h>
#include <stdlib.h>
int count_target(int n, int target)
{
    int checker,count = 0; // อย่าลืมกำหนดค่าเริ่มต้นให้ตัวแปรในฟังก์ชัน อย่างเช่น count = 0 จำไว้ด้วย
        while (1){
            if (n == 0){
                break;
        }
        checker = n % 10;
        if (checker == target){
            count += 1;
        }
        n = n / 10;
    }
    return count;
}
int main() {
   char input_n[12], input_x[2];
   fgets(input_n, 12, stdin);
   fgets(input_x, 2, stdin);

   int n;
   int x, count;

   n = atoi(input_n);
   x = atoi(input_x);

   count = count_target(n, x);

   // Display output in separate cases
   //
   if (count <= 0) {
      printf("There is no \"%d\" in %d.\n", x, n);
   } else if (count == 1) {
      printf("There is only 1 \"%d\" in %d.\n", x, n);
   } else {
      printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
   }
}