#include<iostream>

int main(){
    int x{};
    int y{};

    std::cout << "Enter an Integer: \n";
    std::cin>>x;

    std::cout<<"Enter another integer: \n";
    std::cin>>y;

    std::cout<< "the addition of x and y " << x + y ;
    std::cout<< "the subtraction of x and y " << x - y ;
    
    
    
    return 0;

}