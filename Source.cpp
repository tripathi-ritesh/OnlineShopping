#include <iostream>

using namespace std;
float onlineShopping(void);
int main()
{
	char startValue;
	cout << "Please press 's' to start shopping" << endl;
start:
	cin >> startValue;

	if (startValue == 's' || startValue == 'S')
	{
		float totalAmount = onlineShopping();
		cout << "Total Bill Amount Is :" << totalAmount;
		cout << "Do You Want Shopping Again !!!"<< endl;
	} 
	else
	{
		cout << "You Have Entered Wrong Option, Please Type s \n";
		goto start; 
	}


	return 0;
}
//-------------------------------------------------------------------
float onlineShopping()
{
	char choice,item;
	float billAmount=0;
	float price=0;
	int quantity;

	cout << "************************Welcome To Online Shopping******************\n";
	cout << "-------------------Please follow the instructions--------------------\n";
	cout << "\n(1) Please enter m to order Mobile Phones";
	cout << "\n(2) Please enter l to order Laptop";
	cout << "\n(3) Please enter d to order Desktop";
	cout << "\n(4) Please enter s to order Speaker ";
	cout << "\n(5) Please enter h to order Head Phones" << endl;
	cin >> choice;
	//********************************Mobile********************
	if (choice == 'm' || choice == 'M')
	{
mobileLevel:
		cout << "Mobile Details" << endl;
		cout << "(1) Apple => Price : 40000" << endl;
		cout << "(2) Vivo => Price : 25000" << endl;
		cout << "(3) Oppo => Price : 20000" << endl;
		cout << "(4) Redmi => Price : 18000" << endl;
		cout << "(5) RealMe => Price : 17000" << endl;
		cout << "(6) Samsung => Price : 25000" << endl;
		cout << "Please Enter Your Choice " << endl;
		cin >> item;
		if (item == '1')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 40000;
		}
		else if (item == '2')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 25000;
		}
		else if (item == '3')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 20000;
		}
		else if (item == '4')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 18000;
		}
		else if (item == '5')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 17000;
		}
		else if (item == '6')
		{
			cout << "\nEnter Quantity" << endl;
			cin >> quantity;
			billAmount = billAmount + quantity * 25000;
		}
		else
		{
			cout << "You Have Entered Wrong Option, Please Type s \n";
			goto mobileLevel;
		}

	}
	
	return billAmount;
}