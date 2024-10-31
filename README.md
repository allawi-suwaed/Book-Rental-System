# Book Rental System

## Project Overview
This C++ project simulates a book rental system where users can select a book from a library of five titles, specify a rental duration in weeks or days, and receive a calculated rental cost based on the selected time period. The program ensures valid inputs, provides cost details, and allows users to confirm or cancel the rental.

## Features
1. **Book Selection**: Users can choose one book from a list of five available titles.
2. **Duration Selection**: Users specify the rental period either in weeks (up to 8 weeks) or days (up to 15 days).
3. **Cost Calculation**: The program calculates rental costs based on weekly and daily rates, providing both individual and total costs.
4. **Confirmation**: The program asks users to confirm the rental, displaying a summary if accepted.

## Code Structure
- **Book Selection**: Enum-based structure for easy and clear book selection.
- **Input Validation**: Uses `do-while` loops to ensure correct inputs for book selection, rental duration, and confirmation.
- **Cost Calculation**: Structs are used to handle rental duration and cost data, making calculations modular and readable.
- **Confirmation Handling**: Provides an interactive confirmation process, summarizing the rental details upon completion.

## Example Usage
1. **Select a Book**: The user selects a book from the list.
2. **Enter Rental Duration**: The user inputs the desired duration for weeks and days.
3. **View Cost Breakdown**: The system shows the weekly and daily cost, along with the total.
4. **Confirm**: The user can confirm or cancel the rental.

## Installation
Clone the repository and compile the `Book_Rental_System.cpp` file using a C++ compiler. Example:
```bash
git clone https://github.com/allawi-suwaed/Book-Rental-System.git
cd Book-Rental-System
g++ -o BookRental Book_Rental_System.cpp
./BookRental
