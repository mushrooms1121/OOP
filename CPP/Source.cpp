#include "abc.h"

abc::abc(int){
	setName(name);
}
void abc::setName(int newName){
	name = newName;
}
int abc::getName() {
	return name;
}