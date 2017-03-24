/*****************************************************************************
 * AUTHOR	  : 
 * STUDENT ID     : 
 * LAB #15	  : Pocket Money
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/13/17
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*****************************************************************************
 * OUTPUT - HOW MUCH MONEY IS LEFT (POCKET MONEY)
 *----------------------------------------------------------------------------
 * This program will obtain from the user the user's full name,
 *  amount left from the previous week and the amount spent in
 *  current week.
 *
 * It calculates, stores and outputs how much money is left
 *
 *----------------------------------------------------------------------------
 * INPUT:
 *	  The set of data will be input
 * 	  *************
 * 	  *** set 1 ***
 * 	  *************
 * 	  	name			: the full name of the user
 * 	 	amtLeftPrevWk		: the amount left from the previous week
 * 	  	amtSpent		: the amount spent in the current week
 *
 * OUTPUT:
 * 	This program will output the program heading, the name and pocket money
 * 	2 different displays
 * 		name			: the full name of the user
 * 		pocketMoney		: how much money is left
 *
 *****************************************************************************/

int main()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - THE CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 * -----------------------------------------------------------------------
	 * CONSTANTS USED FOR ALLOWANCE
	 * -----------------------------------------------------------------------
	 * ALLLOWANCE : 20.00
	 * -----------------------------------------------------------------------
	 * CONSTANTS USED FOR THE COLUMN SPACING
	 * -----------------------------------------------------------------------
	 * NAME_PROMPT_COL    : spacing for the user's full name
	 * AMT_PREV_WK_COL    : spacing for the amount previous week
	 * AMT_SPENT 	      : spacing for the amount spent
	 *************************************************************************/
	const char  PROGRAMMER[]    = " ";
	const char  CLASS[]	    = "CS1A";
	const char  SECTION[]	    = "MW: 8:00a";
	const int   LAB_NUM         = 15;
	const char  LAB_NAME[]      = "Pocket Money";
	const float ALLOWANCE	    = 20.00;
	const int   NAME_PROMPT_COL = 33;
	const int   AMT_PREV_WK_COL = 33;
	const int   AMT_SPENT 	    = 33;

	char name[25];      		// IN & OUT   - user's full name
	float amtLeftPrevWk;    	// IN & CAL   - amount left previous week
	float amtSpent;         	// CALC & OUT - amount spent current week
	float pocketMoney;		// CALC & OUT - pocket money left over

	// OUTPUT - Class Heading
	cout << left;
	cout << "**********************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "**********************************************************\n\n";
	cout << right;

	/*********************************************************************
	 * INPUT - The user will input their name, amount left previous week,
	 *         and the amount spent
	 *         name, amtLeftPrevWk, and amtSpent
	 *
	 *************************************************************************/
	// INPUT - name, amtLeftPrevWk, and amtSpent
	cout << left;
	cout << setw(NAME_PROMPT_COL) << "What is your name? ";
	cin.getline(name, 25);

	cout << setw(AMT_PREV_WK_COL) << "How much is left from last week? ";
	cin  >> amtLeftPrevWk;

	cout << setw(AMT_SPENT) << "How much have you spent? ";
	cin  >> amtSpent;
	cout << right << endl;

	/*************************************************************************
	 * PROCESSING - how much pocket money they have in their possession
	 *************************************************************************/
	pocketMoney = (ALLOWANCE + amtLeftPrevWk) - amtSpent;

	/*************************************************************************
	 * OUTPUT - 2 different outputs for greeting includes user's full name
	 * 			and amount of pocket money:
	 *			name
	 * 			pocketMoney
	 *
	 *************************************************************************/

	cout << left;
	cout << "Hello " << name  << "!\n";
	cout << setprecision(2)   << fixed;
	cout << "You now have $ " << pocketMoney << " left.";

	cout << right << endl << endl;
	return 0;
}
