#include<iostream>
#include"list.h"
using namespace std;
template<typename T>
int hash_div(const T& key, const int& s) {
	return key % s;
}
template<typename T>
class HT {
	int m;
	list<T>* table;
public:
	HT(int s = 97) {
		m = s;
		table = new list<T>[m];
	}
	~HT() {
		make_empty();
		delete[]table;
	}
	void insert(const T& val) {
		table[hash_div(val, m)].insert(val);
	}
	bool empty() const {
		for (int i = 0;i < m;i++) {
			if (!table[i].empty()) {
				return false;
			}
		}
		return true;
	}
	bool full() const {
		return false;
	}
	void make_empty() {
		for (int i = 0;i < m;i++) {
			table[i].make_empty();
		}
	}
	bool find(const T& val) const {
		return table[hash_div(val, m)].find(val);
	}
	bool erase(const T& val) {
		return table[hash_div(val, m)].erase(val);
	}
	bool update(const T& old_val, const T& new_val) {
		if (table[hash_div(old_val, m)].erase(old_val)) {
			table[hash_div(new_val, m)].insert(new_val);
			return true;
		}
		else {
			return false;
		}
	}
};