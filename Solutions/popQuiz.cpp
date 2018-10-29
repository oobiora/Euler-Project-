//Prompt for an Integer
//print out the integer
//call to a function that takes the last digit and stores it in an additive variable and modulos the original number by ten to step down the last digit
//print the additive variable as the sum


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;

void sum(int);

int main(){
  int usIn;
  cout << "please enter a number below 999,999,999: ";
  cin >> usIn;
  cout << "original number: "<< usIn << endl;

  sum(usIn);

}

void sum(int x){

  int temp = 0;
  while((x % 10) != 0){
    temp += (x % 10);
    x /= 10;
  }
  cout << "sum of the numbers: "<< temp << endl;
}
