
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;

bool isPrime(int);

int LCF(long int y, int x){

  if (y % x == 0)
    {
      return x;
    }
      else
    {
      return LCF(y, ++x);
    }

}

int main()
{
    //long int bigNum = 600851475143; //six hundred billion...
    long int x = 600851475143;
/*
  bool answer = false;
  long int bigNum = 600851475143;
  long int temp;
  for(int i = 2 ; answer == false;i++) {

            if (isDivisible(bigNum) == true){
              cout << isDivisible(bigNum);
              temp = bigNum / i;
            }
            if (isPrime(temp) == true){answer = true;}


      }
      cout << temp << endl; */
     // Recursion ;

      
  
     long int n = LCF(x,2);
      while (n < 775145){
        cout << n << endl;
        n = LCF(x,(n+1));

      }
  


      /*
      if(isPrime(600851475143 / (LCF(x,2))) == true)
      { 
        cout << 600851475143 / LCF(x,2);
      }
      */
    //  printf(" %li modulo %i = %li\n",bigNum , LCF(bigNum,2), (bigNum%LCF(bigNum,2)));





    /*  for (int i = 2;i < 30; ++i){
        if (isPrime(i) == true){
          cout << i << endl;
        }
      }

    } */
}






bool isPrime(int x){
  bool prime;

  for(int i = (x-1); i > 1; i--){
    int primeCheck = x % i;
    if (primeCheck != 0) {
      prime = false;
    } else prime = true;
  }
  return prime;
}


//Function created to determine whether a number is prime
// scrolls down through numbers less than the number itself and greater than 1
// > if any of the numbers scrolled through produce a remainder of 0 when modulod than the number is not prime
// the answer is returned as a boolean value (true or false)
