// Kristin Lin
// Systems Level Programming pd10
// Work03 : Get to the point.
// 2017-09-21

/*
Create an array large enough to store 10 ints.
Populate the array with random values.
Set the last value in the array to 0.
Print out the values in this array
Create a separate array large enough to store 10 ints.
USING ONLY POINTERS do the following:
Populate the second array with the values in the first but in reverse order
Print out the values in the second array
*/

#include <stdlib.h>
#include <stdio.h>

int main() {

  // rand int arrays
  int rand1[10];
  int * rand2[10];

  int count;

  printf("RANDOM ARRAY #1 (non-pointers)\n");
  
  //populating first array with random numbers, except last
  srand( time(NULL) );
  for (count = 0; count < 10; count++) {
    if (count == 9) {rand1[count] = 0;}
    else {rand1[count] = rand();}
    printf("rand1[%d]: %d\n", count, rand1[count]);
  }

  printf("RANDOM ARRAY #2 (pointers, rand1 reversed)\n");
  
  //populating the second array with pointers in reverse
  for (count = 0; count < 10; count++) {
    rand2[count] = &rand1[9-count];
    printf("rand2[%d]: %d\n", count, *rand2[count]);
  }

}
