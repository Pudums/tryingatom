#include "A.h"
#include <iostream>

int main() {
	A *a = new A();
	a->b = new B();
	std::cout << a->x << "= a.x\n";
	std::cout << a->b->x << "= a.b.x\n";
}
