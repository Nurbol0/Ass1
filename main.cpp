#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Problem 1
int findMin(int n, int arr[]) {
    int minNum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minNum)
            minNum = arr[i];
    }
    return minNum;
}

// Problem 2
double findAverage(int n, int arr[]) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum / n;
}

// Problem 3
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Problem 4
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Problem 5
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Problem 6
int power(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}

// Problem 7
void permute(string prefix, string str) {
    if (str.length() == 0) {
        cout << prefix << endl;
        return;
    }
    for (int i = 0; i < str.length(); ++i) {
        string rem = str.substr(0, i) + str.substr(i + 1);
        permute(prefix + str[i], rem);
    }
}

// Problem 8
bool isAllDigits(string s) {
    return all_of(s.begin(), s.end(), ::isdigit);
}

// Problem 9
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Problem 10
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int size1;
    cin >> size1;
    int arr1[size1]; 
  
    for (int i = 0; i < size1; i++) { 
        cout << "Enter a number: "; 
        cin >> arr1[i]; 
    } 
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Problem 1: " << findMin(n1, arr1) << endl;


    // Test Problem 2
    int size2;
    cin >> size2;
    int arr2[size2]; 
  
    for (int i = 0; i < size2; i++) { 
        cout << "Enter a number: "; 
        cin >> arr2[i]; 
    } 
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Problem 2: " << findAverage(n2, arr2) << endl;

    // Test Problem 3
    int primetest;
    cin >> primetest;
    cout << "Problem 3: " << (isPrime(primetest) ? "Prime" : "Composite") << endl;

    // Test Problem 4
    int testfact;
    cin >> testfact;
    cout << "Problem 4: " << factorial(testfact) << endl;

    // Test Problem 5
    int testfibonacci;
    cin >> testfibonacci;
    cout << "Problem 5: " << fibonacci(testfibonacci) << endl;

    // Test Problem 6
    int powertest1, powertest2;
    cin >> powertest1 >> powertest2;
    cout << "Problem 6: " << power(powertest1, powertest2) << endl;

    // Test Problem 7
    string str;
    cin >> str;
    cout << "Problem 7:" << endl;
    permute("", str);

    // Test Problem 8
    string s1;
    cin >> s1;
    cout << "Problem 8: " << (isAllDigits(s1) ? "Yes" : "No") << endl;

    // Test Problem 9
    int testbinom1, testbinom2;
    cin >> testbinom1 >> testbinom2;
    cout << "Problem 9: " << binomialCoefficient(testbinom1, testbinom2) << endl;

    // Test Problem 10
    int testgcd1, testgcd2;
    cin >> testgcd1 >> testgcd2;
    cout << "Problem 10: " << gcd(testgcd1, testgcd2) << endl;

    return 0;
}
