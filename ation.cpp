#include <iostream>
using namespace std;
// Joseph Cole

const int SIZE = 10;

void output(int input[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (input[i] > 0)
		{
			cout << input[i];
			if (input[i] != 1 || i == 0)
				cout << "\t";
		}
	}
	
	return;
}

int main()
{
	int triangle[SIZE] = { 1 , 0 , 0 };

	for (int i = 0; i < SIZE; i++)
	{
		output(triangle);
		cout << endl;
		for (int j = SIZE - 1; j > 0; j--)
		{
			triangle[j] += triangle[j - 1];
		}
		
		
	}
	
	cin.get();
	return 0;
}