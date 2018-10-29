
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;

//print array letter by letter
void printArray(char usIn[], int size)
{
   for (int i = 0; i < size; i++)
   cout << usIn[i];


  }

//reverse a string of any length
void reverseStrings(char usIn[], int y, int x){

  while (y < x)
  {
    char temp = usIn[y];
    usIn[y] = usIn[x];
    usIn[x] = temp;
    y += 1;
    x -= 1;
  }
}



int getLength(char usIn[])
{
  int c = 0;
  while (usIn[c] != '-'){

      c++;
  }
  return c;
}

int main()
{

  char usIn[300];
  cin >> usIn;
  cout << getLength(usIn);
/*cout << "Original: ";
printArray(usIn, strlen(usIn));
cout << endl;
reverseStrings(usIn, 0, (strlen(usIn) - 1));

cout << "Reversed: ";
printArray(usIn, strlen(usIn));
cout << endl;
*/

}
