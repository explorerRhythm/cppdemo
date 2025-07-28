#include<iostream>

int main(){
    int x{};
    int y{};

    std::cout << "Enter an Integer: \n";
    std::cin>>x;

    std::cout<<"Enter another integer: \n";
    std::cin>>y;

    std::cout<< "\nthe addition of x and y " << x + y ;
    std::cout<< "\nthe subtraction of x and y " << y - x ;
    
    
    
    return 0;

}