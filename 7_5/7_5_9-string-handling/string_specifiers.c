#include<stdio.h>

int main() {
   char num = 90;
   char str[] = "Example";
   int int_pos = 123;
   int int_neg = -123;
   float flt_pos = 123456.123456;
   float flt_neg = -123456.123456;
   double dbl_pos = 123456.123456;
   double dbl_neg = -123456.123456;

   printf("Integer positive - decimal - signed: %d\n", int_pos);
   printf("Integer positive - decimal - unsigned: %u\n", int_pos);
   printf("Integer negative - decimal - signed: %d\n", int_neg);
   printf("Integer negative - decimal - unsigned: %u\n\n", int_neg);

   printf("Float positive - float: %f\n", flt_pos);
   printf("Float negative - float: %f\n\n", flt_neg);

   printf("Double positive - double: %lf\n", dbl_pos);
   printf("Double negative - double: %lf\n\n", dbl_neg);

   printf("Integer - character: %c\n", num);
   printf("Character string - string: %s\n\n", str);

   printf("Integer - octal: %o\n", num);
   printf("Integer - hexadecimal: %x\n", num);
   printf("Integer - character: %c\n\n", num);

   // from here on we will set, get and review what is in our ram
   printf("Integer - memory address in hex: %p\n", &num); // subtle difference, we use the & in &num to set a pointer address for this item in memory

   return 0;
}
