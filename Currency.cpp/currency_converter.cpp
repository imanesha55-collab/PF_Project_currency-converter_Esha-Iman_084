#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;
bool authenticate()
{
    string password;
    int attempts = 3;

    while (attempts > 0)
    {
        cout << "Enter password (" << attempts << " attempts left): ";
        cin >> password;

        if (password == "python3.12")
        {
            return true;
        }
        else
        {
            cout << "Wrong password!\n";
            attempts--;
        }
    }
    return false;
}
string toUpper(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
    }
    return text;
}

int main()
{
    if (!authenticate())
    {
        cout << "Access denied. Program exit.\n";
        return 0;
    }

    cout << "\nAccess Granted!\n";
    string currency[4] = {"USD", "EUR", "JPY", "GBP"};
    double rate[4] = {1.0, 0.85, 110.0, 0.75};

    int choice;

    do
    {
        cout << "\n--- Currency Converter ---\n";
        cout << "1. Show currencies\n";
        cout << "2. Convert currency\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nAvailable Currencies:\n";
            for (int i = 0; i < 4; i++)
            {
                cout << currency[i] << endl;
            }
        }
        else if (choice == 2)
        {
            string from, to;
            double amount;

            cout << "From currency: ";
            cin >> from;
            from = toUpper(from);

            cout << "To currency: ";
            cin >> to;
            to = toUpper(to);

            cout << "Amount: ";
            cin >> amount;

            if (cin.fail() || amount <= 0)
            {
                cout << "Invalid amount!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            int fromIndex = -1, toIndex = -1;

            for (int i = 0; i < 4; i++)
            {
                if (currency[i] == from)
                    fromIndex = i;
                if (currency[i] == to)
                    toIndex = i;
            }

            if (fromIndex == -1 || toIndex == -1)
            {
                cout << "Currency not found!\n";
            }
            else
            {
                double result = (amount / rate[fromIndex]) * rate[toIndex];
                cout << fixed << setprecision(2);
                cout << amount << " " << from << " = " << result << " " << to << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Program Exit.\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}

