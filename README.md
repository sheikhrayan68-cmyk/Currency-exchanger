# Currency-exchanger
A console-based currency converter in C++ that converts between PKR, USD, EUR, and GBP — my first C++ project.
# Currency Exchange System (C++) 💱

My first C++ project! A simple console-based currency converter that lets users convert between PKR, USD, EUR, and GBP.

## Features
- Convert between 4 currencies: PKR, USD, EUR, GBP
- Uses PKR as a base/pivot currency for conversion logic
- Input validation for invalid amounts and currency choices
- Loop to allow multiple conversions in one session

## Tech Stack
- C++
- Core concepts used: functions, conditionals, do-while loops, basic I/O

## How It Works
1. User selects a base currency and a target currency from a menu.
2. User enters the amount to convert.
3. The program converts the amount to PKR first, then from PKR to the target currency.
4. Result is displayed, and the user can choose to convert again.

## How to Run

```bash
g++ currency_exchanger.cpp -o currency_exchanger
./currency_exchanger
```

## Future Improvements
- Add more currencies
- Fetch live exchange rates via an API instead of hardcoded values
- Add error handling for non-numeric input

## Author
Rayan Hussain
