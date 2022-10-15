#include <stdio.h>
#include <math.h>
void main() {
 float x [50]; /* max. 50 elements in array x */
 int n; /*number of elements in array x */
 float sum, mean, sd; /* sum, mean and standard deviation.*/
 int i;
 /* read data */
 printf("How many numbers (max 50)? ");
 scanf("%d", &n);
 printf ("Enter numbers: ");
 for(i = 0; i<n; i++)
 scanf("%f", &x[i]);
 /* calculate mean */
 sum= 0.0;
 for(i = 0; i < n; i++)
   sum+= x[i];
   mean = sum / n;
   /* calculate standard deviation */
   sum= 0.0;
 for(i = 0; i < n; i++)
   sum+= (x[i] - mean) * (x[i] - mean);
   sd = sqrt(sum / n);
   printf("Mean = %6.3f\n", mean);
   printf("Standard Deviation: %6.3f\n", sd);
}

