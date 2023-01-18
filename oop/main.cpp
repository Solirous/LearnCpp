#include <iostream>
class Employ
{
public:
int m_year{};
int m_month{};
int m_day{};

void print(){
    std::cout<<"Year:  "<<m_year<<"  "<<"Month:  "<<m_month<<'\n';
}
private:

};
int main();
    Employ joe {2023,4,14};
    joe.print();
    return 0;
}


