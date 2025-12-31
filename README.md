Currency Converter (C++ Project)
Project Description
This is a simple Currency Converter program written in C++. The program allows users to:
1.Authenticate using a password.
2.View available currencies.
3.Convert an amount from one currency to another.
4.Exit the program safely.
The conversion rates are predefined relative to USD.
Features
1.Password Authentication
Ensures secure access.
User has 3 attempts to enter the correct password.
Password used: python3.12.
2.Currency Display
Shows a list of available currencies:
USD, EUR, JPY, GBP
3.Currency Conversion
Converts amounts between currencies using predefined exchange rates.
Handles case-insensitive currency input.
Validates numeric input to prevent errors.
4.Input Validation
Handles invalid amount input.
Handles invalid currency codes
5.Formatted Output
Results displayed with 2 decimal precision for clarity.
Technologies Used
Language: C++
Libraries:
<iostream> → For input/output operations
<string> → To handle string data
<iomanip> → For formatting output
<limits> → For input validation and error handling
How to Use
1.Run the program.
2.Enter the password (python3.12) when prompted.
3.After authentication, choose an option from the menu:
1 → Show available currencies
2 → Convert currency
3 → Exit the program
4.For currency conversion:
Enter From currency code (e.g., USD)
Enter To currency code (e.g., EUR)
Enter Amount (must be a positive number)
5.The program will display the converted amount with 2 decimal places.
Code Structure
1.authenticate() → Handles password authentication.
2.toUpper() → Converts lowercase strings to uppercase for case-insensitive comparison.
3.main() → Contains menu, input handling, and conversion logic.
Possible Improvements
1.Fetch live currency rates using an API instead of hard-coded values.
2.Support more currencies and make arrays dynamic.
3.Implement a GUI interface using Qt (C++) or Tkinter (Python).
4.Enhance password security using hashed passwords.
5.Improve error messages and user guidance.
Author
Name: [Esha Iman]
Project: Currency Converter in C++

