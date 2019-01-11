#include <iostream>
using namespace std;
int main(){
float N=6,z,x,y=1/N;
while(N<20){
    x=x+(1/N);
    N=N+1;
}
cout << x;
return 0;
}