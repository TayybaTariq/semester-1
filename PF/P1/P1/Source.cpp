#include<iostream>
using namespace std;
void right(int a)
{
	for (int i = 1; i <= a; i++)


	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void rightr(int b)
{
	for (int i = b; i >= 1; i--)


	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void left(int c)
{
	for (int i = 1; i <= c; i++)
	{
		for (int spc = 1; spc <= (c - i); spc++)
		{

			cout << " ";
		}


		for (int j = 1; j <= i; j++)
		{
			cout <<"*";
		}
		cout << endl;
	}
}
void leftr(int d)
{
	for (int i = d; i >= 1; i--)
	{
		for (int spc = 1; spc <= (d - i); spc++)
		{

			cout << " ";
		}


		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void pyramid(int e)
{
	for (int i = 1; i <= e; i++)
	{
		for(int j=e;j>=i;j--)
		{
			cout << " ";
		}
		for(int k=1;k<=(2*i-1);k++)
		{
			cout << "*";
		}
		cout << endl;

	}
}
void diamond(int f)
{
	for (int i = 1; i <= f; i++)
	{
		for (int j = f; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;

	}
	for (int i = f; i>=1; i--)
	{
		for (int j = f; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;

	}
}
void sandglass(int g)
{ 
	for (int i = g; i >= 1; i--)
	{
		for (int j = g; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;

	}
	for (int i = 1; i <= g; i++)
	{
		for (int j = g; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;

	}
}

void menu()
{
	int length,choice;
	
	cout << "Press 1 for right triangle " << endl;
	cout << "Press 2 for  reverse right triangle " << endl;
	cout << "Press 3 for left triangle " << endl;
	cout << "Press 4 for reverse left triangle " << endl;
	cout << "Press 5 pyramid " << endl;
	cout << "Press 6 for diamond " << endl;
	cout << "Press 7 for sandglass " << endl;

    cout << "enter your choice " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "enter the length :";
		cin >> length;
		right(length);
		break;
	case 2:
		cout << "enter the length :";
		cin >> length;
		rightr(length);
		break;
	case 3:
		cout << "enter the length :";
		cin >> length;
		left(length);
		break;
	case 4:
		cout << "enter the length :";
		cin >> length;
		leftr(length);
		break;
	case 5:
		cout << "enter the length :";
		cin >> length;
		pyramid(length);
		break;
	case 6:
		cout << "enter the length :";
		cin >> length;
		diamond(length);
		break;
	case 7:
		cout << "enter the length :";
		cin >> length;
		sandglass(length);
		break;
	default:
		break;
	}

}

int main()
{
	menu();
	
	return 0;
}