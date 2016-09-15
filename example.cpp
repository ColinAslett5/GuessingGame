//Colin Aslett, Guessing Game, Period 07
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  bool play = true;
  while(play == true){
    play = false;
    cout << "Welcome" << endl;
    srand(time(NULL));
    int number = rand() % 100 + 1;//random number creation
    int guess;
    int tries = 0;
    char yesorno;
    //while statement so that you can guess more than once
    while(guess != number){
      cout << "Guess a number between 0 and 100" << endl;
      cin >> guess;
      tries++;
      //if your input equals the random number
      if(number == guess){
	cout << "Good Guess" << endl;
	cout << "Tries: " << tries << endl;
	cout << "Do you want to play again?" << endl;
	cin >> yesorno;
	if(yesorno == 'y'){
	  cout << "lets play again!" << endl;
	  play = true;
	}
	else{
	  cout << "See you later";
	}
      }
      else{
	if(guess < number){
	  cout << "guess too low" << endl; 
	}
	else{
	  cout << "guess too high" << endl;
	}
      }
    }
  }
  return 0;
}
