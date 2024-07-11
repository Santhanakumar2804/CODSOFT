//NUMBER GUESSING GAME

#include <bits/stdc++.h>

using namespace std;

int main()

{
srand(time(0));

int NUMBER = rand() % 100 +1;

int GUESS;

cout<<"THE RANDOM NUMBERS ARE GENERATED BETWEEN 1 AND 100. GIVE A TRY TO GUESS IT!!" << endl;

cin >> GUESS;

while (GUESS != NUMBER)
{
    if(GUESS < NUMBER)
    {
        cout<<"YOUR GUESS IS TOO LOW!!" <<endl;

    }
    
    else{
        cout<<"YOUR GUESS IS TOO HIGH!!" <<endl;
    }

    cout << "TRY AGAIN TO GUESS THE CORRECT POSSIBILITIES" << endl;

    cin>>GUESS;
    
}

cout << "CONGRATULATIONS!! YOUR GUESSING IS CORRECT" << endl;

return 0;
}