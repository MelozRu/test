#define SIZE 6
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Dikstra
{
private:
	int a[SIZE][SIZE];

public:


	

	Dikstra::Dikstra() {
		srand((unsigned int)time(NULL));
		for (int i = 0; i<SIZE; i++)
		{
			 a[i][i] = 0;
			for (int j = i + 1; j<SIZE; j++) {
				printf("¬ведите рассто€ние %d - %d: ", i + 1, j + 1);
				a[i][j] = abs(rand() % 101 - 50);
				a[j][i] = a[i][j];
				printf("%d\n",a[i][j]);

			}
		}
		for (int i = 0; i<SIZE; i++)
		{
			for (int j = 0; j<SIZE; j++)
				printf("%5d ", a[i][j]);
			printf("\n");
		}
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	Dikstra d;

	system("PAUSE");
	return 0;
}
