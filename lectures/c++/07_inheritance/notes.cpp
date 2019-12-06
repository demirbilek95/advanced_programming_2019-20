/*Object Oriented

IS A  --> public
HAS A --> Obj Camp
USE A --> 


Animal(Base)
	Dog
	Snake


protected (children can access protected access inside of the main)

poor animal in c++ */


#include <iostream>

struct foo{
	virtual void bar() {std::cout << "in foo \n";}
};

struct derived: public foo{

};

int main(){
derived d;
std::cout << sizeof(foo) << std::endl;
std::cout << sizeof(d) << std::endl;

} 

/* result was 1 and 1 (without virtual) if we add virtual it becomes 8, function can not be inline. For hpc, virtual is essential */
