/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */

#ifndef FILE_PROCESSING_UTIL_HPP_
#define FILE_PROCESSING_UTIL_HPP_

#include <string>

using namespace std;

class FileProcessingUtil {
	public:
		static bool validateTarget(struct stat sb, string target);
};

#endif /* FILE_PROCESSING_UTIL_HPP_ */
