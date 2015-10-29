#include <iostream>

using namespace std;

int main(){

  int a=0;
  int b=1;
  int N;
  int c;
cin>>N;
  for(int i=1; i<N; i++){
  c=a+b;
  a=b;
  b=c;
    }
  cout << c << endl;
  cout << "N" << endl;
  return 0;
}
