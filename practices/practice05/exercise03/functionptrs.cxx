#include <iostream>

/* FUNCTION POINTERS
* Pointers to functions allow passing functions as arguments,
* to other functions or storing them in data structures. 
* This is useful in scenarios where different functions
* need to be executed based on runtime conditions.
*/

using namespace std;

int add(int num_1, int num_2);
int multiply(int num_1, int num_2);
void operation(int num_1, int num_2, int (*func)(int, int));

int main() {

    operation(5, 3, add);
    operation(10, 2, multiply);

    return 0;
}

int add(int num_1, int num_2) {
    int result = num_1 + num_2;
    return result; 
}

int multiply(int num_1, int num_2) {
    int result = num_1 * num_2;
    return result;
}

void operation(int num_1, int num_2, int (*func)(int, int)) {
    cout << func(num_1, num_2) << endl;
}