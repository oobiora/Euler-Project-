
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;



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




bool isPrime(int x){
  
  bool prime = true;

  for(int i = (700000); prime == true; i--){
    int primeCheck = x % i;
    cout << primeCheck << endl;
    if (primeCheck == 0) {
      prime = false;
    } else if (primeCheck != 0 ) 
    {
      prime = true;
    }

  }
  return prime;
}



int main()
{
    //long int bigNum = 600851475143; //six hundred billion...
    //long int x = 600851475143;
    int x = 10000;

  /*    
  
     long int n = LCF(x,2);
      while (n < 1000){
        
        if( isPrime(n) == true){
        cout << "LCF is: " << n << endl;
        cout << "the other factor is " << (x/n) << endl;
        }

        n = LCF(x,(n+1));

      }
  

*/
int n = LCF(x,1);

while(n <= 10000){
  cout << LCF(x,n) << endl;
  n = LCF(x,(n+1));
}



}
//Function created to determine whether a number is prime
// scrolls down through numbers less than the number itself and greater than 1
// > if any of the numbers scrolled through produce a remainder of 0 when modulod than the number is not prime
// the answer is returned as a boolean value (true or false)






// Test Code

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



