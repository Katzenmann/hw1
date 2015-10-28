#include <iostream>

using namespace std;

int main(){

  int a=0;
  int b=1;
  int c;
  for(int i=1; i<9; i++){
  c=a+b;
  a=b;
  b=c;
    }
  cout << c << endl;
  return 0;
}
