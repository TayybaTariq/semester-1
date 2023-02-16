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
	
	// Printing Menu
	cout << "=========================================="<<endl;
	cout << "Press 1 for Right Triangle " << endl;
	cout << "Press 2 for Reverse right triangle " << endl;
	cout << "Press 3 for Left Triangle " << endl;
	cout << "Press 4 for Reverse left triangle " << endl;
	cout << "Press 5 for Pyramid " << endl;
	cout << "Press 6 for Diamond " << endl;
	cout << "Press 7 for Sandglass " << endl;
	cout << "=========================================="<<endl;
    	
	// Taking Choice from user
	cout << "Enter your choice => ";
	cin >> choice;
	
	
	// Length was common in all so i added it once outside
	// Taking Length from user
	cout << "Enter the length : ";
	cin >> length;
	// Performing Action on User Choice
	switch (choice)
	{
	case 1:
		right(length);
		break;
	case 2:
		rightr(length);
		break;
	case 3:
		left(length);
		break;
	case 4:
		leftr(length);
		break;
	case 5:
		pyramid(length);
		break;
	case 6:
		diamond(length);
		break;
	case 7:
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
