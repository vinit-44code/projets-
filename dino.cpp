                                     

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

void delay(int seconds) {
    clock_t start = clock();
    while (clock() < start + seconds * CLOCKS_PER_SEC);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class timer {      
        public:
        timer(){
                int sec = 5 ;
                while(sec >= 0){
                    system("cls");
                    cout<<"["<<sec<<"]";
                        delay(1);
                        sec--;                  
                }
        }
};

double power(double x ,int n ){
 long bin = n ;
double ans = 1 ;
  if(n == 0 )return 1.0 ;
  if(x== 1)return 1.0;
  if(x == -1&& n%2 == 0 ) return 1.0;
  if(x == -1&& n%2 != 0 ) return -1.0;
    

  if(n < 0){
    x = 1/x ;
    bin = -bin;
  }

    while(bin > 0 ){
      if(bin%2 == 1){
        ans *= x ;
      }
      x *= x ;
      bin /= 2;
    }
    return ans;


}

int profit(vector<int>prince){
  int n = prince.size();
  int maxp = 0 ;
  int bs = prince[0];



  for(int i = 0 ; i <n ; i++){
    if(prince[i]>bs){
      maxp = max(maxp,prince[i] - bs); 
    }

bs = min(bs,prince[i]);

  }

return maxp;
}
int main(){
    int a = 5 ; 
    int b = a++ + ++a  ;
    cout<<b;
    
}
