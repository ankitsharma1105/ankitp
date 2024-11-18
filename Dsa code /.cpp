// ONE TO FIVE 
// Theory - 5
//Write a program to implement bubble sort.

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) 
    { 
        for (int j = 0; j < n - i - 1; j++) 
        
        {  
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];       // Temporary variable to hold the current element
                arr[j] = arr[j + 1];     // Swap the current element with the next element
                arr[j + 1] = temp;       // Assign the stored element to the next position
            }
        }
    }
}
void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Call bubbleSort function to sort the array
    bubbleSort(arr, n);
    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);
    return 0;
}

............................................................................................................


 // Write a program to implement selection sort.

#include <iostream>
using namespace std;
// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    // Outer loop to go through the entire array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current index is the minimum
        
        // Inner loop to find the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the minimum index if a smaller element is found
            }
        }
        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
// Function to display the array
void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Call selectionSort function to sort the array
    selectionSort(arr, n);
    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);
    return 0;
}


.......................................................................................................................

 // Write a program to implement insertion sort.


#include <iostream>
using namespace std;
// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // The element to be inserted into the sorted part
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Call insertionSort function to sort the array
    insertionSort(arr, n);
    // Display the sorted array
    cout << "Sorted array: ";
    displayArray(arr, n);
    return 0;
}





// Theory - 4   


//  Write a program to implement the concept of Queue with Insert, Delete, Display and Exit operations.

#include <iostream>
using namespace std;
#define MAX 100  // Maximum size of the queue
class Queue {
private:
    int arr[MAX];  // Array to hold the queue elements
    int front, rear;  // Front and rear pointers
public:
    Queue() {
        front = -1;  // Initialize front to -1 (queue is empty)
        rear = -1;   // Initialize rear to -1 (queue is empty)
    }
    // Insert (Enqueue) operation to add an element to the queue
    void enqueue(int value) {
        if (rear >= MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << value << " into the queue.\n";
        } else {
            if (front == -1) {  // If the queue is empty, set front to 0
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << value << " inserted into the queue.\n";
        }
    }
    // Delete (Dequeue) operation to remove an element from the queue
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to dequeue.\n";
        } else {
            cout << "Removed element: " << arr[front] << endl;
            front++;
        }
    }
    // Display operation to show the elements of the queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
// Main function to handle menu-driven operations
int main() {
    Queue q;
    int choice, value;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}

....................................................................................

 //  Write a program to implement the concept of Circular Queue

#include <iostream>
using namespace std;
#define MAX 5  // Maximum size of the Circular Queue
class CircularQueue {
private:
    int arr[MAX];  // Array to hold the queue elements
    int front, rear;  // Front and rear pointers
public:
    CircularQueue() {
        front = -1;  // Initialize front to -1 (queue is empty)
        rear = -1;   // Initialize rear to -1 (queue is empty)
    }
    // Function to check if the queue is full
    bool isFull() {
        return (front == (rear + 1) % MAX);
    }
    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }
    // Function to insert (enqueue) an element into the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << " into the queue.\n";
        } else {
            if (front == -1) {  // If the queue is empty, set front to 0
                front = 0;
            }
            rear = (rear + 1) % MAX;  // Circular increment of the rear pointer
            arr[rear] = value;
            cout << value << " inserted into the queue.\n";
        }
    }
    // Function to delete (dequeue) an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to dequeue.\n";
        } else {
            cout << "Removed element: " << arr[front] << endl;
            if (front == rear) {  // If there is only one element
                front = rear = -1;  // Reset the queue to empty state
            } else {
                front = (front + 1) % MAX;  // Circular increment of the front pointer
            }
        }
    }
    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;  // Circular increment
            }
            cout << arr[rear] << endl;  // Display the last element
        }
    }
};
// Main function to handle menu-driven operations
int main() {
    CircularQueue q;
    int choice, value;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}


.........................................................................

//  Write a program to implement the concept of Deque.

#include <iostream>
using namespace std;
#define MAX 5  // Maximum size of the Deque
class Deque {
private:
    int arr[MAX];  // Array to hold the deque elements
    int front, rear;  // Front and rear pointers
public:
    Deque() {
        front = -1;  // Initialize front to -1 (empty deque)
        rear = -1;   // Initialize rear to -1 (empty deque)
    }
    // Function to check if the deque is full
    bool isFull() {
        return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
    }
    // Function to check if the deque is empty
    bool isEmpty() {
        return (front == -1);
    }
    // Insert element at the front of the deque
    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << value << " at the front.\n";
        } else {
            if (front == -1) {  // If the deque is empty, both front and rear are set to 0
                front = rear = 0;
            } else if (front == 0) {
                front = MAX - 1;  // Wrap around if front is at the beginning of the array
            } else {
                front--;  // Decrement front to insert at the front
            }
            arr[front] = value;
            cout << value << " inserted at the front.\n";
        }
    }
    // Insert element at the rear of the deque
    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << value << " at the rear.\n";
        } else {
            if (front == -1) {  // If the deque is empty, both front and rear are set to 0
                front = rear = 0;
            } else if (rear == MAX - 1) {
                rear = 0;  // Wrap around if rear is at the end of the array
            } else {
                rear++;  // Increment rear to insert at the rear
            }
            arr[rear] = value;
            cout << value << " inserted at the rear.\n";
        }
    }
    // Delete element from the front of the deque
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow! No elements to delete from the front.\n";
        } else {
            cout << "Removed element from the front: " << arr[front] << endl;
            if (front == rear) {  // If there is only one element, reset the deque to empty
                front = rear = -1;
            } else if (front == MAX - 1) {
                front = 0;  // Wrap around if front is at the end of the array
            } else {
                front++;  // Increment front to remove the element
            }
        }
    }
    // Delete element from the rear of the deque
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow! No elements to delete from the rear.\n";
        } else {
            cout << "Removed element from the rear: " << arr[rear] << endl;
            if (front == rear) {  // If there is only one element, reset the deque to empty
                front = rear = -1;
            } else if (rear == 0) {
                rear = MAX - 1;  // Wrap around if rear is at the beginning of the array
            } else {
                rear--;  // Decrement rear to remove the element
            }
        }
    }
    // Display the elements of the deque
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty.\n";
        } else {
            cout << "Deque elements: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;  // Circular increment
            }
            cout << arr[rear] << endl;  // Display the last element
        }
    }
};
// Main function to handle menu-driven operations
int main() {
    Deque dq;
    int choice, value;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert at the front: ";
                cin >> value;
                dq.insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at the rear: ";
                cin >> value;
                dq.insertRear(value);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                dq.display();
                break;
            case 6:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}



// Theory - 3 

//  Write a program to implement the concept of Stack with Push, Pop, Display and Exit operations.

#include <iostream>
using namespace std;
#define MAX 100  // Maximum size of the stack
class Stack {
private:
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element
public:
    Stack() {
        top = -1;  // Initialize stack as empty
    }
    // Push operation to add an element to the stack
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << " into the stack.\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed into the stack.\n";
        }
    }
    // Pop operation to remove an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! No elements to pop.\n";
        } else {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }
    // Display operation to print all elements in the stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Stack stack;
    int choice, value;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}


...................................................................................


// Write a program to convert an infix expression to postfix and prefix conversion.

#include <iostream>
#include <stack>
#include <algorithm>  // For reverse()
using namespace std;
// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
// Function to check precedence of operators
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}
// Function to convert infix expression to postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    for (char c : infix) {
        // If the character is an operand, add it to the result
        if (isalnum(c)) {
            postfix += c;
        }
        // If the character is '(', push it to the stack
        else if (c == '(') {
            s.push(c);
        }
        // If the character is ')', pop and output until '(' is found
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove '(' from the stack
        }
        // If the character is an operator
        else if (isOperator(c)) {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    // Pop all remaining operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
// Function to convert infix expression to prefix
string infixToPrefix(string infix) {
    // Reverse the infix expression
    reverse(infix.begin(), infix.end());
    // Replace '(' with ')' and vice versa
    for (char &c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }
    // Convert the modified infix expression to postfix
    string postfix = infixToPostfix(infix);
    // Reverse the postfix expression to get prefix
    reverse(postfix.begin(), postfix.end());
    return postfix;
}
// Main function
int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    string prefix = infixToPrefix(infix);
    cout << "Postfix expression: " << postfix << endl;
    cout << "Prefix expression: " << prefix << endl;
    return 0;
}
.......................................................................

 // Write a program to implement Tower of Hanoi problem.

#include <iostream>
using namespace std;
// Function to perform the Tower of Hanoi operation
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there's only one disk, just move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary, so they are out of the way
    towerOfHanoi(n - 1, source, destination, auxiliary);
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
int main() {
    int n;  // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    // Call the Tower of Hanoi function with source as 'A', auxiliary as 'B', and destination as 'C'
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

.................................................................................
