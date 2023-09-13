/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */

#ifndef FILE_PROCESSING_UTIL_CPP_
#define FILE_PROCESSING_UTIL_CPP_

#include <iostream>
#include <string>
#include <sys/stat.h>

#include "headers/file_processing_util.hpp"

using namespace std;

bool FileProcessingUtil::validateTarget(struct stat sb, string target) {
	return stat(target.c_str(), &sb) == 0;
}

#endif /* FILE_PROCESSING_UTIL_CPP_ */
