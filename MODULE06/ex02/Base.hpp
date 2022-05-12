#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <stdlib.h>

class Base {
	public:
		virtual ~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	indentify(Base* p);
void	indentify(Base& p);

#endif
