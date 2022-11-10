#include <iostream>
using namespace std;
int main() {
  double n1,n2,n3;
  cout << "Please Enter 3 Numbers"<<endl;
  cin>>n1;
  cin>>n2;
  cin>>n3;
  if(n2<=n3 && n1<=n3) cout<<n3<<endl;
  if(n3<=n2 && n1<=n2) cout<<n2<<endl;
  if(n3<=n1 && n2<=n1) cout<<n1<<endl;
}
