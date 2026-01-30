#include <iostream>
using namespace std;

int i=0;
void toh(int,char,char,char);
int main() {
  toh(10,'A','B','C');
  cout<<endl;
  cout<<i<<endl;
  return 0;
}
void toh(int n, char x, char y,char z){
  i++;
  if(n==1) cout<<x<<"->"<<y<<"->";
  else{
    toh(n-1,'A','C','B');
    cout<<x<<"->"<<y<<"->";
    toh(n-1,'C','B','A');
  }
}