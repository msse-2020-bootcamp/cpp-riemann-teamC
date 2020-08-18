#include <iostream> // for std::cout, std::endl

double calculate_y(double x)
{
    return 1.0 / (x * x + 1.0);
}

double calculate_integral(double a, double b)
{
    int n_points = 1000;
    double dx = (b - a) / n_points;
    double integral = 0.0;
    double x, y;
    for(x = a + dx/2.0; x < b ; x += dx)
    {
        y = calculate_y(x);
        integral += y * dx;
    }
    return integral;
}

int main(void)
{
    double a = 0.0, b = 1.0;
    double observed_integral;
    observed_integral = calculate_integral(a, b);
    std::cout << "The integral of 1/(x^2 + 1) from " << a << " to " << b
            << " is " << observed_integral << "." << std::endl;
    return 0;
}