#include "unsortedList.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int input;
	int item = 0;
	bool found = false;
	UnsortedList<int> test;
	char resume;
	char reset;
	do
	{
		do
		{
			test.PutItem ( item );
			++item;
		} while ( item < 25 );
		cout << "Length is " << test.GetLength();
		cout << "enter an item to delete." << endl;
		cin >> input;
		test.DeleteItem( input );
		cout << "Length is " << test.GetLength() << endl;
		cout << "enter an item to add to list";
		cin >> input;
		test.PutItem ( input );
		cout << "Enter an item to find: ";
		cin >> input;
		test.GetItem( input, found );
		if ( test.IsFull() )
			cout << "These list is full." << endl;
		else 
			cout << "The list is not full." << endl;
		cout << "Reset list? (Y/N)" << endl;
		//if the user wishes to reset the list ("Y") 
			//loop to below 'keyboard input and file output'
		//if the user loves to input random letters  
		cin >> reset;
			//prompt user again
		if(reset != 'Y' && reset != 'n' && reset != 'N' && reset != 'y')
		{
			while( reset != 'Y' && reset != 'n' && reset != 'N' && reset != 'y')
			{
				cout << "Reset list? (Y/N)" << endl;
				cin >> reset;
			}
			test.ResetList();
		}

		cout << "Continue to test list? (Y/N)" << endl;
		//if the user wishes to continue testing the list ("Y") 
			//loop to below 'keyboard input and file output'
		//if the user loves to input random letters  
		cin >> resume;
			//prompt user again
		if(resume != 'Y' && resume != 'n' && resume != 'N' && resume != 'y')
		{
			while( resume != 'Y' && resume != 'n' && resume != 'N' && resume != 'y')
			{
				cout << "Continue to test list? (Y/N)" << endl;
				cin >> resume;
			}
		}
	} while( resume == 'Y' || resume == 'y');

	return 0;
}