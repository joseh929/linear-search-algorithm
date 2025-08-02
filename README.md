# Linear Search Algorithm

A simple C program that demonstrates the linear search algorithm to find a specific number in an array.

## Description

This program implements a basic linear search algorithm that searches for a user-specified number within a predefined array of integers. The linear search algorithm checks each element in the array sequentially until it finds the target value or reaches the end of the array.

## Features

- Displays all elements in the array with their corresponding indices
- Prompts user to enter a number to search for
- Performs linear search on the array
- Reports the index where the number is found
- Uses a simple and easy-to-understand implementation

## How It Works

1. **Array Initialization**: The program starts with a predefined array of 12 integers
2. **Display Array**: Shows all elements with their indices
3. **User Input**: Prompts the user to enter a number to search for
4. **Linear Search**: Iterates through each element in the array comparing it with the target number
5. **Result**: If found, displays the number and its index position

## Sample Array

The program uses the following predefined array:
```
[32, 43, 22, 1, 89, 55, 76, 69, 99, 12, 46, 25]
```

## Compilation and Execution

### Prerequisites
- GCC compiler or any C compiler
- Terminal/Command prompt

### Steps to Run

1. **Compile the program:**
   ```bash
   gcc linear_search_algorithm.c -o linear_search
   ```

2. **Run the executable:**
   ```bash
   ./linear_search
   ```

3. **Follow the prompts:**
   - The program will display all array elements
   - Enter the number you want to search for
   - View the search result

## Example Output

```
Index 0 is=32
Index 1 is=43
Index 2 is=22
Index 3 is=1
Index 4 is=89
Index 5 is=55
Index 6 is=76
Index 7 is=69
Index 8 is=99
Index 9 is=12
Index 10 is=46
Index 11 is=25
Please enter the number you're searching for:
55
The number you have entered is= 55
Searching for number 55...
Your Number 55 : Found at Index 5
```

## Algorithm Complexity

- **Time Complexity**: O(n) - where n is the number of elements in the array
- **Space Complexity**: O(1) - uses constant extra space
- **Best Case**: O(1) - when the target element is at the first position
- **Worst Case**: O(n) - when the target element is at the last position or not present

## Limitations

- The program only searches through a fixed array of 12 elements
- No handling for cases where the number is not found in the array
- Input validation is not implemented

## Possible Improvements

1. **Error Handling**: Add validation for user input
2. **Not Found Case**: Handle scenarios where the target number doesn't exist in the array
3. **Dynamic Array**: Allow users to input their own array
4. **Multiple Occurrences**: Find all indices where the target number appears
5. **Input Validation**: Check for invalid input types

## Educational Value

This program is excellent for:
- Understanding basic searching algorithms
- Learning array traversal techniques
- Practicing C programming fundamentals
- Comparing with other search algorithms (binary search, hash tables, etc.)

## License

This code is provided for educational purposes.
