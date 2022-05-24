#include<iostream>
using namespace std;

char arr[105][105];
int row, col;
pair<int, int> error;

int main()
{
	scanf("%d%d", &row, &col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			char temp;
			cin >> temp;
			arr[i][j] = arr[i][2 * col - 1 - j] = arr[2 * row - 1 - i][j] = arr[2 * row - 1 - i][2 * col - 1 - j] = temp;
		}
	scanf("%d%d", &error.first, &error.second);
	error.first--;
	error.second--;

	if (arr[error.first][error.second] == '.')
		arr[error.first][error.second] = '#';
	else if (arr[error.first][error.second] == '#')
		arr[error.first][error.second] = '.';

	for (int i = 0; i < 2 * row; i++)
	{
		for (int j = 0; j < 2 * col; j++)
			cout << arr[i][j];
		cout << "\n";
	}
}
