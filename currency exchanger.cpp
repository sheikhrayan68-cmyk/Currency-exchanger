#include <iostream>
using namespace std;

void showCurrencies()
{
    cout << "1. PKR (Pakistani Rupee)" << endl;
    cout << "2. USD (US Dollar)" << endl;
    cout << "3. EUR (Euro)" << endl;
    cout << "4. GBP (British Pound)" << endl;
}

double toPKR(int currency, double amount)
{
    if (currency == 1)
        return amount;
    else if (currency == 2)
        return amount * 280;
    else if (currency == 3)
        return amount * 300;
    else if (currency == 4)
        return amount * 350;
    else
        return -1;
}

double fromPKR(int currency, double amount)
{
    if (currency == 1)
        return amount;
    else if (currency == 2)
        return amount / 280;
    else if (currency == 3)
        return amount / 300;
    else if (currency == 4)
        return amount / 350;
    else
        return -1;
}

int main()
{
    int from, to;
    double amount, converted;
    char again;

    do
    {
        cout << "====================================" << endl;
        cout << "     Currency Exchange System" << endl;
        cout << "====================================" << endl;

        cout << "\nSelect Base Currency:" << endl;
        showCurrencies();
        cout << "Enter choice: ";
        cin >> from;

        cout << "\nSelect Target Currency:" << endl;
        showCurrencies();
        cout << "Enter choice: ";
        cin >> to;

        cout << "\nEnter Amount: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount entered!" << endl;
        }
        else
        {
            double amountInPKR = toPKR(from, amount);

            if (amountInPKR == -1)
            {
                cout << "\nInvalid base currency!" << endl;
            }
            else
            {
                converted = fromPKR(to, amountInPKR);

                if (converted == -1)
                {
                    cout << "\nInvalid target currency!" << endl;
                }
                else
                {
                    cout << "\n------------------------------------" << endl;
                    cout << "Converted Amount: " << converted << endl;
                    cout << "------------------------------------" << endl;
                }
            }
        }

        cout << "\nDo you want another conversion? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using Currency Exchange System." << endl;

    return 0;
}
