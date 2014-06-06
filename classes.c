#include <stdio.h>
#include <string.h>
/*screwing around and trying to create Classes with C.

  	define class 
	using function pointers to point to methods
	data members are accessed normally
*/

void printer(int number);

typedef struct
{
//	char name[] = "this class";
	int numberVar;
	void (*fPoint)(int);
} MyClass;

/*constructor for the class declares an instance and assigns function pointers*/
MyClass constructor()
{
	MyClass thisClass;
//	thisClass.name->thisname;
	thisClass.fPoint = &printer;
	return thisClass;
}


/*listing of the "methods" to be used by the class*/
void printer(int number)
{
	printf("%d\n", number);
}







int main()
{
	MyClass newClass = constructor();
	newClass.fPoint(89);
}