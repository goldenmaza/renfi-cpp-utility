/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */

#ifndef COLLECTION_UTIL_HPP_
#define COLLECTION_UTIL_HPP_

#include <vector>
#include <string_view>
#include <map>

using namespace std;

class CollectionUtil {
	public:
		static bool vectorContainsItem(vector<string_view> vector, string_view item);
		static bool mapContainsItem(map<string_view, vector<string_view>> mapped, string_view item);
		static vector<string_view> mapGetItem(map<string_view, vector<string_view>> mapped, string_view item);
};

#endif /* COLLECTION_UTIL_HPP_ */
