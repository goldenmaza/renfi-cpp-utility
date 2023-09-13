/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */

#include <iostream>
#include <vector>
#include <string_view>
#include <map>
#include <algorithm>

#include "headers/collection_util.hpp"

using namespace std;

bool CollectionUtil::vectorContainsItem(vector<string_view> vector, string_view item) {
	cout << "items: " << endl;
	for (const auto& i : vector) {
		cout << "v: " << i << endl;
	}
	cout << "size: " << vector.size() << endl;
	cout << "item: " << item << endl;
	return count(vector.begin(), vector.end(), item) != 0;
}

bool CollectionUtil::mapContainsItem(map<string_view, vector<string_view>> mapped, string_view item) {
	cout << "items: " << endl;
//	for (const auto& pair : mapped) {
//		cout << "m: " << pair.first << ' : ' << pair.second << endl;
//	}
	cout << "size: " << mapped.size() << endl;
	cout << "item: " << item << endl;
	return mapped.count(item) > 0;
}

vector<string_view> CollectionUtil::mapGetItem(map<string_view, vector<string_view>> mapped, string_view item) {
	vector<string_view> items = mapped[item];
	cout << "items: " << endl;
	for (const auto& i : items) {
		cout << "v: " << i << endl;
	}
	cout << "size: " << items.size() << endl;
	cout << "item: " << item << endl;
	return items;
}
