#include <iostream>
using namespace std;

int totalamount = 500;

class Bank
{
public:
    int pin()
    {
        int pin;
    lables:

        cout << "\n\n  Enter your pin : ";
        cin >> pin;

        if (pin == 1111 || pin == 2222 || pin == 3333 || pin == 4444)
        {
            return pin;
        }
        else
        {
            cout << "\n Retry to enter pin";
            goto lables;
        }
    }

    int withdraw(int amount)
    {
        return totalamount -= amount;
    }

    int deposit(int amount)
    {
        return totalamount += amount;
    }
};

int main()
{
    int chosse, pin, withdraw, deposit;
    Bank with, depo, password;

    password.pin();

chosse:

    cout << "\n Withdraw - 1 \n Deposite - 2 \n exit - 3 \t\t  ::-- ";
    cin >> chosse;

    switch (chosse)
    {
    case 1:

        cout << "\nEnter amount : ";
        cin >> withdraw;

        if (totalamount >= withdraw)
        {
            cout << "\n amount :- " << totalamount;
            with.withdraw(withdraw);
            cout << "\n Withdraw : " << withdraw;
            cout << "\n Total amount :- " << totalamount;
            cout << "\n\n";
        }
        else
        {
            cout << "\n\n Insufficent amount in your bank account \n\n";
            goto chosse;
        }

        goto chosse;

        break;

    case 2:

        cout << "\n\nEnter amount : ";
        cin >> deposit;

        cout << "\n Deposite amount :- " << deposit;
        cout << "\n Amount :- " << totalamount;
        cout << "\n Total Amount : " << depo.deposit(deposit)<<endl;

        goto chosse;
        break;

    case 3:

        cout << "\n\n Good byy\n\n\n\n";
        break;

    default:

        cout << "\n\nError for chosse number : \n\n";
        goto chosse;

        break;
    }
}
