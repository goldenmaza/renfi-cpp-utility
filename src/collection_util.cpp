/**
 * @author (Mats Richard Hellstrand)
 * @version (17th of September, 2023)
 */

#include <vector>
#include <string_view>
#include <map>
#include <algorithm>

#include "headers/collection_util.hpp"

using namespace std;

bool CollectionUtil::vectorContainsItem(vector<string_view> vector, string_view item) {
	return count(vector.begin(), vector.end(), item) != 0;
}

bool CollectionUtil::mapContainsItem(map<string_view, vector<string_view>> mapped, string_view item) {
	return mapped.count(item) > 0;
}

vector<string_view> CollectionUtil::mapGetItem(map<string_view, vector<string_view>> mapped, string_view item) {
	return mapped.at(item);
}
