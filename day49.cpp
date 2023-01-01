#include <iostream>
using namespace std;
class test{
    int a,b;
    public:
      test(int i, int j): b(j), a(i){
        cout<<"the value of numbers are: "<<endl<<a<<" "<<b<<endl;
      }

};
int main() {
    test t(1,5);
    return 0;
}