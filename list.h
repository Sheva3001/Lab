#include <string>
#include <iostream>
using namespace std;

struct file {
	string catalogueName;
	string fileName;
	string specification;
	int date[3];
	int size;
};

file* addList(int size);
void findSpec (file* List, int size);
