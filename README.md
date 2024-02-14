# Area of Square and Circle calculator

This simple C program calculates the area of geometric shapes based on user input.

## Usage

1. **Calculate Circle Area**
    ```
    ./shape_calculator circle <radius>
    ```

2. **Calculate Square Area**
    ```
    ./shape_calculator square <side_length>
    ```

Replace `<radius>` and `<side_length>` with the numeric values corresponding to the circle's radius or square's side length.

## Examples

1. Calculate the area of a circle with radius 5:
    ```
    ./shape_calculator circle 5
    ```

    Output:
    ```
    78.500000
    ```

2. Calculate the area of a square with side length 8:
    ```
    ./shape_calculator square 8
    ```

    Output:
    ```
    64
    ```

## Build and Run

To compile the program, use a C compiler such as GCC:
```bash
gcc shape_calculator.c -o shape_calculator
```

Run the compiled program with appropriate command-line arguments.
