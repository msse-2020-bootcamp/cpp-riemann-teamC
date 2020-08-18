# cpp-riemann-teamC

In this program, teamC members, Muhan Zhang and Xudong Zhuang, will use C++ language to calculate the following integral:
$$\int_a^b \frac{1}{x^2 + 1} dx$$
where we can change the value of a and b, i.e. the integral interval, to calculate the value of the integral. In our main function, we try to use a = 0, and b = 1 to test the function. In our integration function (calculate_integral), we use the Riemann sum method with number of points fixated at 1000.

Questions and Answers:
1. What type should be used for x and the return type?
x : double;
return type : double;

2. What should the types of a,b and npoints be? What type should the function return?
a : double;
b : double;
npoints : int;
return type : double;

3. Given the bounds of integration a,b and the number of points, what is the width of the rectangles you will be using? 
dx = (b - a) / npoints

4. At what points will you need to evaluate the integrand? 
x = a + dx/2.0

5. None

6. About how many points does it take to start converging to the proper result (4 decimal places)?
When npoints is 95, the corresponding result is 0.7854.
