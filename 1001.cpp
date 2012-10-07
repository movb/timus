#include <iostream>
#include <vector>
#include <math.h>
#include <conio.h>

int main()
{
    std::vector<double> arr;
    double x;
    while(std::cin>>x)
    {
        arr.push_back(x);
    }
    std::cout.setf(std::ios::fixed,std::ios::floatfield);
    std::cout.precision(4);
    for(std::vector<double>::reverse_iterator i=arr.rbegin();i<arr.rend();i++)
    {
        std::cout << sqrt((double)*i) << std::endl;
    }
    return 0;
}