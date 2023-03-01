#include <iostream>

using namespace std;

// Define a structure for a complex number
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to divide two complex numbers
Complex divide(Complex c1, Complex c2) {
    Complex result;
    double denom = c2.real * c2.real + c2.imag * c2.imag;
    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denom;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denom;
    return result;
}

int main() {
    // Declare two complex numbers
    Complex c1, c2;

    // Read in values for the complex numbers
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> c1.real >> c1.imag;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> c2.real >> c2.imag;

    // Perform arithmetic operations on the complex numbers and print the results
    Complex sum = add(c1, c2);
    Complex diff = subtract(c1, c2);
    Complex prod = multiply(c1, c2);
    Complex quot = divide(c1, c2);

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "Difference: " << diff.real << " + " << diff.imag << "i" << endl;
    cout << "Product: " << prod.real << " + " << prod.imag << "i" << endl;
    cout << "Quotient: " << quot.real << " + " << quot.imag << "i" << endl;

    return 0;
}
