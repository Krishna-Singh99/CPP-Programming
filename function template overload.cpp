#include <iostream>
using namespace std;
template <class T>
    void func(T a)
{
    cout<<"Inside function(T a):- "<<a<<endl;

}
template <class T,typename T1>
void func(T a,T1 b)
{
    int num1=b;
    cout<<"inside function(T a, T1 b):-"<<a;
    cout<<"  and  "<<num1+a<<endl;
}
int main()
{
    func(15.5);
    func(10.5,20);
    return 0;
}
