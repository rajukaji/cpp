#include <iostream>
/*
4.	Design a class called Complex to represent complex numbers.
WAP to add two complex numbers. Use the concept of friend function.
The function should return an object of type Complex representing
the sum of two complex numbers.
*/

class Complex
{
    int real{}, imag{};

public:
    Complex(int r, int i)
        :real{r},
         imag{i}
    {
    }

    /*int getReal()
    {
        return real;
    }
    int getImag()
    {
        return imag;
    }
    */

    void display()
    {

        std::cout << real << '+' << imag << 'i';
    }

    friend Complex sumImaginaryNumber(Complex& firstComplex, Complex& secondComplex);
};

Complex sumImaginaryNumber(Complex& firstComplex, Complex& secondComplex)
{
    Complex sumComplex{0, 0};
    sumComplex.real = firstComplex.real + secondComplex.real;
    sumComplex.imag = firstComplex.imag + secondComplex.imag;
    return sumComplex;
}

int main()
{
    Complex complexOne{1, 2};
    Complex complexTwo{2, 3};
    Complex sum{sumImaginaryNumber(complexOne, complexTwo)};

    //sum.display();
    //std::cout << "The sum of " << complexOne.getReal() << "+" << complexOne.getImag() << "i and " << complexTwo.getReal() << "+" << complexTwo.getImag() << "i is :: " << sum.getReal() << "+" << sum.getImag() << 'i';

    std::cout << "The sum of ";
    complexOne.display();
    std::cout << " and ";
    complexTwo.display();
    std::cout << " is " ;
    sum.display();
    return 0;
}
