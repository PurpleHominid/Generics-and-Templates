#include <iostream>

// generics and templates allow logic to be revised regardless of the actual data types
//

void swapvalues(int& value1, int& value2 ) {
	//pass by reference
	int tmp = value1;
	value1 = value2;
	value2 = tmp;
}

void swapvalues(char& value1, char& value2 ) { //overloaded function
	//pass by reference
	char tmp = value1;
	value1 = value2;
	value2 = tmp;
}

//using generics and templates - use same code with different datatypes
//passing parameters to functions have to be known prior to calling
template <typename T> //use keyword 'template' followed by angle brakets typename and T for a generic datatype reference (t could be anything you like etc you can decide)
// templates can also be defined using 'class' instead of 'typename'; template <class C>
void swapvalues1(T& value1, T& value2 ) { //generic function
	//pass by reference
	T tmp = value1;
	value1 = value2;
	value2 = tmp;
}


int main() {
	std::cout << "Generics and Templates!\n";
	int a = 10, b = 20;
	char ca = 'a', cb = 'b';

	//basic function
	std::cout << "\nbasic function\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	swapvalues(a, b); //invoking the function
	std::cout << "a = " << a << ", b = " << b << "\n\n";

	//overloaded function
	std::cout << "\noverloaded function\n";
	std::cout << "ca = " << ca << ", cb = " << cb << "\n";
	swapvalues(ca, cb);
	std::cout << "ca = " << ca << ", cb = " << cb << "\n\n";

	//generic function (char)
	std::cout << "\ngeneric function using templates as char\n";
	std::cout << "ca = " << ca << ", cb = " << cb << "\n";
	swapvalues1(ca, cb);
	std::cout << "ca = " << ca << ", cb = " << cb << "\n\n";

	//generic function (int)
	std::cout << "\ngeneric function using templates as int\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	swapvalues1(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n\n";

	//generic function (char) specifing type
	std::cout << "\ngeneric function using templates as char\n";
	std::cout << "ca = " << ca << ", cb = " << cb << "\n";
	swapvalues1<char>(ca, cb); //invoking the function with a specified datatype
	std::cout << "ca = " << ca << ", cb = " << cb << "\n\n";

	//generic function (int) specifing type
	std::cout << "\ngeneric function using templates as int\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	swapvalues1<int>(a, b); //invoking the function with a specified datatype
	std::cout << "a = " << a << ", b = " << b << "\n\n";

}
