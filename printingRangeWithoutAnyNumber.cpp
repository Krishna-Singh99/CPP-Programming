#include <iostream>

using namespace std;

int main()
{
    char ch='d';
    char c='c';
    int x=int(ch)-int(c);
    do{
    cout<<x <<" ";
    x++;
    }
    while(x!=ch+1);
    return 0;
}
