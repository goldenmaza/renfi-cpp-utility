/**
 * @author (Mats Richard Hellstrand)
 * @version (17th of September, 2023)
 */

#ifndef UTIL_HELP_GUIDE_UTIL_HPP_
#define UTIL_HELP_GUIDE_UTIL_HPP_

#include <string>
#include <vector>
#include <string_view>

using namespace std;

class HelpGuideUtil {
	public:
		static string displayHelpGuide();
		static string prepareValues(vector<string_view> values);
		static string prepareValuesWithIndex(vector<string_view> values);
};

#endif /* UTIL_HELP_GUIDE_UTIL_HPP_ */
