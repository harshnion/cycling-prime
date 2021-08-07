#include<iostream>
#include<math.h>


using namespace std;

class Primecycle
{
 
 
 
 public:
   bool isPrime(int n) {
      if(n<=1) {
        return false;
      }
      if(n<=3) {
        return true;
      }
      
      if(n%2 == 0 || n % 3 == 0) {
        return false;
      }
      
      for (int i = 5;i * i<=n;i = i + 6) {
        if(n % i == 0 || n % (i + 2) == 0) {
          return false;
        }
        
        
      }
      return true;
    } 
  
 bool prime_check(int N) {
      int count = 0; 
      int temp = N;
      
      while(temp) {
        count++;
        temp/= 10;
      }
      
      int num = N;
      while(isPrime(num)) {
        int rem = num % 10;
        int div = num/10;
        
        num = (pow(10, count - 1)) * rem + div;
        
        if(num == N) {
          return true;
        }
      }
      return false;
    }
  
};
