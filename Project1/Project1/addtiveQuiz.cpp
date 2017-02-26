// Some thing is wrong.



#include <iostream>
#include <ctime>	//for time function
#include <cstdlib>	//for rand and srand function
using namespace std;

int main()
{
	//select difficulty
	cout << "What difficulty would you want,simple(1),normal(2),or hard(3)? Type 0 to exit." << endl;
	int difficulty = 0;
	cin >> difficulty;

	//random seed
	srand(time(0));
	
	//some basic numbers
	int correct(0), wrong(0), answer(0);
	long startTime = time(0);


	//simple
	if ( difficulty == 1 )
	{		
		int x,y;
		//25 exercises
		for (int i = 0; i < 10; i = i++)
		{
			x = rand() % 10;
			y = rand() % 10;
			cout << "What is " << x << "+ " << y << "?\n";
			cin >> answer;
			if (answer == x + y)
				correct = correct + 1;
			else
				wrong = wrong + 1;
		}
		
	}

	//normal
	else if ( difficulty == 2 )
	{
		cout << "Not finished yet." << endl;

	}
	//hard
	else if (difficulty == 3)
	{
		cout << "Not finished yet." << endl;

	}
	else if (difficulty == 0)
		goto exitpoint;

	//print score
	cout << "It's all.You have " << correct << " correct answer(s) and " << wrong << " wrong answer(s) in all 25 exerises. \n";
	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Total time is " << testTime << " seconds." << endl;
exitpoint:
	cout << "Bye bye !Have a nice day!" << endl;

	return 0;

}