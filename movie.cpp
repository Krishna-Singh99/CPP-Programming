#include <iostream>
using namespace std;
class actor
{
   public:
    string production,movie,actornm,costar;
    actor(string production1,string movie1,string actornme,string costar1)                // parameterized constructor.
    {
      production=production1;
      movie=movie1;
      actornm=actornme;
      costar = costar1;


    }
    actor(string production2,string movie2,string costar2)                // parameterized constructor.
    {
      production=production2;
      costar = costar2;
      movie = movie2;

    }
    actor(actor &i)               // copy constructor
    {
        production = i.production;
        movie = i.movie;
        actornm = i.actornm;
        costar = i.costar;

    }
};
int main()
{
  actor b1("Yashraj","Humsafar","Rajesh Khanna","Heema");
  actor b2("Dharma","Kati Patang","Rajesh Khanna","Rekha,Jaya");           // Calling the parameterized constructor.
 actor b3(b1);
 actor b4(b2);
   cout<<"The production name:";             //  Calling the copy constructor.
 cout<<b3.production<<endl;
   cout<<"The movie name:";
 cout<<b3.movie<<endl;
 cout<<"The actor  name:";
 cout<<b3.actornm<<endl;
 cout<<"The costar  name:";
 cout<<b3.costar<<endl;
 cout<<"The production name:";
 cout<<b4.production<<endl;
 cout<<"The movie name:";

 cout<<b4.movie<<endl;
  cout<<"The actor  name:";
 cout<<b3.actornm<<endl;

 cout<<"The costar name:";
  cout<<b4.costar<<endl;
  return 0;
}
