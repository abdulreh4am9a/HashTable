#include"HashTable.h"
int main() {
	HT<int> t(5);
	t.insert(30);
	t.insert(200);
	t.insert(45);
	t.insert(60);
	t.insert(85);
	t.insert(79);
	t.insert(42);
	if (t.find(60)) {
		cout << "Found 60" << endl;
	}
	else {
		cout << "Couldn't find 60" << endl;
	}
	t.erase(60);
	if (t.find(60)) {
		cout << "Found 60" << endl;
	}
	else {
		cout << "Couldn't find 60" << endl;
	}
	t.update(79, 70);
	if (t.find(70)) {
		cout << "Found 70" << endl;
	}
	else {
		cout << "Couldn't find 70" << endl;
	}
	if (t.find(79)) {
		cout << "Found 79" << endl;
	}
	else {
		cout << "Couldn't find 79" << endl;
	}
	if (t.empty()) {
		cout << "Hash Table is empty" << endl;
	}
	else {
		cout << "Hash Table is not empty" << endl;
	}
	t.make_empty();
	if (t.empty()) {
		cout << "Hash Table is empty" << endl;
	}
	else {
		cout << "Hash Table is not empty" << endl;
	}
	return 0;
}