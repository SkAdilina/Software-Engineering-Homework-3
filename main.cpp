#include <iostream>
#include "header.h"
   
int main()
{
	ZooAnimal bozo;
	char arr[]={'B','o','z','o','\0'};
	bozo.Create (arr, 408, 1027, 400);
	std::cout << "This animal's name is " << bozo.reptName() << std::endl;
	//bozo.Destroy();
	
	
	return 0;
}
