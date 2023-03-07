#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    int var1, var2;
    std::cin >> var1 >> var2;
    int sum = var1+var2;
    std::cout << "The sum of " << var1 << " and " << var2 <<" is " <<sum;
    
    
    std::string name;
    std::cin >> name;
    std::cout<<"My name is " <<name <<std::endl;
    std::cout << sizeof(name) << " is the size of the string. "<<std::endl;
    
    char character;
    std::cin >> character;

    int numChar=character;
    std::cout <<numChar;
    return 0;
}