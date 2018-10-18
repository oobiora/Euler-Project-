#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;


int main()
{

//Fibonacci Sequence
int stable = 2;
cout << stable << endl;
for(int i = 1;stable < 4000000;){
  int temp = stable;
  stable += i;
  i = temp;
  cout << stable << endl;
}

}
