#include <string>
#include <iostream>
#include "list.h"
using namespace std;

struct file {
	string catalogueName;
	string fileName;
	string specification;
	int date[3];
	int size;
};

file* addList(int size) {
	file* List = new file[size];
	for(int i = 0; i < size; i++) {
		cout << "Введите имя каталога"<<i<<"-го файла"<<endl;
		cin >> List[i].catalogueName;
		cout << "Введите имя файла"<<i<<"-го файла"<<endl;
		cin >> List[i].fileName;
		cout << "Введите спецификацию"<<i<<"-го файла"<<endl;
		cin >> List[i].specification;
		cout << "Введите дату создания"<<i<<"-го файла"<<endl;
		for(int j = 0; j < 3; j++) {
			cin >> List[i].date[j];
		}
		cout << "Введите размер"<<i<<"-го файла"<<endl;
		cin >> List[i].size;
	}
	return List;
}

void findSpec (file* List, int size) {
	int j=1;
	for (int i=0; i<size; i++ ) {
		while ( List[i].catalogueName == List[j].catalogueName ) {
			if ((List[i].fileName == List[j].fileName) && (((List[i].specification == ".cpp") && (List[j].specification == ".h")) || ((List[i].specification == ".h") && (List[j].specification == ".cpp"))))
				cout << List[i].catalogueName << " -> " << List[i].fileName << endl;
			j++;
		}
	}
}

