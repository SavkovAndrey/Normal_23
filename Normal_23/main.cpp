#include <iostream>
#include <time.h>
#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------
	const int ROW = 5;
	const int COL = 3;

void Enter(float arr[][COL], int i, string str)
{
	cout << "For the " << str << " athlete: ";
	for (int j = 0; j < COL; j++)
	{
		cin >> arr[i][j];
	}
}

void TOP(float arr[][COL])
{
	float MAX = 0;
	int i_max = 0, j_max = 0;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] > MAX)
			{
				MAX = arr[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}

	cout << "The best results from athletes:\n";
	cout << "№ athletes - " << i_max + 1 << endl;
	cout << "№ attempt - " << j_max + 1 << endl << endl;;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] == MAX && i != i_max && j != j_max)
			{
				cout << "№ athletes - " << i + 1 << endl;
				cout << "№ attempt - " << j + 1 << endl << endl;;
			}
		}
	}

}



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------


	float arr[ROW][COL]{};

	cout << "Enter the results of the competition:\n";

	Enter(arr, 0, "first");
	Enter(arr, 1, "second");
	Enter(arr, 2, "third");
	Enter(arr, 3, "fourth");
	Enter(arr, 4, "fifth");

	TOP(arr);


	system("pause");
	return 0;
}
