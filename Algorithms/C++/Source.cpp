#include<iostream>
using namespace std;
int main()
{
	int flag = 0;
	int count = 0;
	int s;
	int length = 0;
	int totalPoints = 0;
	char letters[15];
	char Word[15];
	int score[15];
	int n;
	while (flag != 1) {
		cout << "Enter no. of letters allowed to make word: ";
		cin >> n;
		if (n > 3 && n < 15)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "Enter Letter: ";
				cin >> letters[i];
				if (letters[i] >='0' && letters[i] <= '9')
				{
					cout << "INVALID LETTER!!!...";
					break;
				}
				cout << "Enter its score(any number from 1 to 9) : ";
				cin >> s;
				if (s < 10 && s != 0 && s>0)
					score[i] = s;
				else
				{
					cout << "INVALID INPUT!!!!...";
					break;
				}
			}
			cout << "Enter your word : ";
			cin >> Word;
			for (int g = 0;; g++)
			{
				if (Word[g] != '\0')
					++length;
				else
					break;
			}
			for (int j = 0; j <length;j++)
			{
				for (int k = 0; k < n; k++) {
					if (Word[j] == letters[k])
					{
						count++;
						totalPoints += score[k];
					}
				}
			}
			if (count == n)
				totalPoints += 50;
		}
		cout << "TOTAL POINTS ARE :"<<totalPoints<<endl;
		cout << "ENTER 0 IF YOU WANT TO PLAY AGAIN AND 1 TO END THE GAME: ";
		cin >> flag;
	}
	return 0;
}