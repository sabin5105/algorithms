#pragma warning(disable :4996)
#include<iostream>
#include<string>

using namespace std;

int check(char c) {
	int num;

	switch (c) {
	case 'A':
	case 'B':
	case 'C':
		num = 2;
		break;
	case 'D':
	case 'E':
	case 'F':
		num = 3;
		break;
	case 'G':
	case 'H':
	case 'I':
		num = 4;
		break;

	case 'J':
	case 'K':
	case 'L':
		num = 5;
		break;

	case 'M':
	case 'N':
	case 'O':
		num = 6;
		break;

	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		num = 7;
		break;

	case 'T':
	case 'U':
	case 'V':
		num = 8;
		break;

	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		num = 9;
		break;

	default:
		break;

	}
	return num;
}


int main(void) {

	string str;
	cin >> str;

	int sum = 0;
	for (int i = 0; i<str.length(); i++) {
		if (str[i] == 0) { 
			sum += 10;
		}
		else if (str[i] == 1) {  
			sum += 1;
		}
		else {
			sum += check(str[i]);  
		}
	}

	sum += (int)str.length(); 

							 
	cout << sum;

	return 0;

}
