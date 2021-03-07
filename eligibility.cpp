#include<iostream>
using namespace std;
allow_for_quiz(char scholar,int cgpa)
{


    try {



    if(scholar=='yes' || cgpa>=8.5)
    {
        cout<<"\nYou are eligible for QUIZ";
    }
    else{
        throw scholar,cgpa;

        cout<<"\nYou are not eligible for QUIZ";
    }
    }
    catch(char scholar)
    {
        cout<<"\nTry next time ,have a nice day";

    }

    catch(int cgpa)
    {
        cout<<"\n You are not eligible";
    }
}

int main()
   { char scholar;
   int cgpa;
   cout<<"\nWelcome to Quiz World\n____________________\n_____________________";
       cout<<"\nIf you are day scholar enter 'yes' if not then enter 'no' ";
       cin.ignore();
    cin>>scholar;
    cin.ignore();
    cout<<"\nEnter cgpa ";
    cin>>cgpa;
    allow_for_quiz(scholar,cgpa);

       return 0;
}
