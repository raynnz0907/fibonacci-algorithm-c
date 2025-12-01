# fibonacci-algorithm-c
Implementation of Fibonacci series generation in C, featuring iterative computation, structured code, and user input handling. Ideal for students and developers exploring basic algorithms and control structures in C.

# Fibonacci Series in C

A simple and beginner-friendly C program that prints the Fibonacci series for a user-defined number of terms. This project demonstrates the use of loops, variables, and iterative logic to generate the famous sequence.

---

## 🚀 Features
- Takes user input for number of terms  
- Generates Fibonacci series using an iterative approach  
- Beginner-friendly and well-commented  
- No external libraries required  

---

## 📌 What is the Fibonacci Series?
The Fibonacci sequence is a series of numbers where:

```
F(n) = F(n-1) + F(n-2)
```

Starting with:

```
0, 1, 1, 2, 3, 5, 8, ...
```

Each number is the sum of the previous two.

---

## 🧩 Code Snippet

```c
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the total terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
```

---

## ▶️ How to Run
1. Clone the repository:
   ```
   git clone <your-repo-link>
   ```

2. Compile the code:
   ```
   gcc fibonacci.c -o fibonacci
   ```

3. Run the program:
   ```
   ./fibonacci
   ```

---

## 📤 Sample Output

```
Enter the total terms: 7
Fibonacci Series:
0 1 1 2 3 5 8
```

---

## 📚 Learning Concepts Covered
- Loops (`for`)
- Variables
- Conditionals
- Iterative algorithms
- Basic input/output in C

---

## 🤝 Contributing
Feel free to fork this repository and improve the code or add new features.

---

## ⭐ Show your support
If you like this project, give it a star ⭐ on GitHub!

