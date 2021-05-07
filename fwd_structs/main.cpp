#include "A.h"
#include <iostream>

int main() {
	A *a = new A();
	a->b = new B();
	a->b->a = new A();
	a->b->a->x = 2;
	std::cout << a->x << " = a.x\n"; // 0
	std::cout << a->b->x << " = a.b.x\n"; // 1
	std::cout << a->b->a->x << " = a.b.a.x\n"; // 2
}
