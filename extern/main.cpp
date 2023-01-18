#include <iostream>
extern int x_y;
extern const int a;

int main(){
    std::cout<<x_y<<" "<<a;
    return 0;
}