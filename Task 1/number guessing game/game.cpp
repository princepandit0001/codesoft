#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<< "\n\t\t---------welcome to the number Guessing Game---------\n"<<endl;
    cout<< "\n\t\t--->>you will have to guess a number between 1 to 100.";
    cout<< "\n\t\t---->>lets start playing game and best of luck"<<endl;

    srand(time(0));
    int randNumber = ( rand() %53)+1;

    cout<<"\n**You will have total 5 chance to guess the correct number.**^^\n";
    int chanceLeft = 5;
    int playerInput;

    for (int i = 1; i<=5; i++)
    {
        cout<< "\n ---> Enter the number: ";
        cin>>playerInput;

        if(playerInput == randNumber)
        {
            cout<< "\nCongrats You have successfully guessed the right nuber\n";
            cout<< "\nThanks for playing Have a nice day";
            break;
        }    
         else{
            if(playerInput> randNumber)
            {
                cout<< "\n""Insert a smaller number. TRY AGAIN """ <<endl;
                
            }
            else
            {
                cout<<"\n""[ Insert a Larger Number. TRY AGAIN ]"""<<endl;
                                  
            }
            
        }
        chanceLeft--;
        cout<< "\n( Chance left to guess The random Number: " << chanceLeft << ")"<<endl;
        if(chanceLeft == 0)
        {
            cout<< "\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<< " the random Number was :  " << randNumber <<endl;
            cout<< " THANKS for playing  have a nice day.";
        }
    }
    cout<< "\n";
    return 0;
}