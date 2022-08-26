// A program to convert miles to kilometers
// Inspired by Dr. Bourke's demo program, although I'm going to do my best to do this with what I already know
// Benjamin Wormsley, 08/26/2022

 #include <stdio.h>
 #include <stdlib.h>
 #define KILOMETERS_PER_MILE 1.609344

 int main(int argv, char **argc) {
float miles, kilometers;

//get miles
printf("Input miles:...\n");
scanf("%f", &miles);

kilometers = miles * KILOMETERS_PER_MILE;

printf("%f miles is %f kilometers.\n", miles, kilometers);

return 0;
 }
// I ended up not needing to refer back to the initial program at all! I'm very proud actually, although I continue to have issue with some
// lines needing semicolons and others not, it toook a few compile attempts.