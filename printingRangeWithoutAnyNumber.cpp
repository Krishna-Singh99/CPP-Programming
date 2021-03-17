#include <iostream>

using namespace std;

int main()
{
    char ch='d'; //ascii value 100
    char c='c';  //ascii value 99
    int x=int(ch)-int(c);  //x value will be 1 at initial
    do{                    // loop until reaches 101
    cout<<x <<" ";
    x++;
    }
    while(x!=ch+1);    //end of loop
    return 0;
}
