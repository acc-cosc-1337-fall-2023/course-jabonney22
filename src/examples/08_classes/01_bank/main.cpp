#include "bank_account.h"
#include "atm.h"
#include<time.h>//helps provide a true random number with the rand() function

using std :: cout;

int main()
{

	srand(time(NULL));

	BankAccount account; //create a variable/ an object ---- customer 1

	ATM atm(account);

	atm.display_balance();

	cout<<"Balance: "<<account.get_balance()<<"\n";


	return 0;
}

