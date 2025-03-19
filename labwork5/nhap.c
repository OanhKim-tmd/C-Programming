#include <stdio.h>
int main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (i = 0; i < length; i++) {
  if (lowestAge > ages[i]) {
    lowestAge = ages[i];
  }
}
}
// #include <stdio.h>
//  int main(void){
//  int numbers[10]; /* Array storing 10 values */
//  int count = 10; /* Number of values to be read */
//  long sum = 0L; /* Sum of the numbers */
//  float average = 0.0f; /* Average of the numbers */
//  printf("\nEnter the 10 numbers:\n"); /* Prompt for the input */
//  /* Read the ten numbers to be averaged */
//  for(int i = 0; i < count; i++)
//  {
//  printf("%2d> ",i+1);
//  scanf("%d", &numbers[i]); /* Read a number */
//  sum += numbers[i]; /* Add it to sum */
//  }
//  average = (float)sum/count; /* Calculate the average*/
//  printf("\nAverage of the ten numbers entered is: %f\n", average);
//  return 0;
//  }
