/**
 * @author (Mats Richard Hellstrand)
 * @version (17th of September, 2023)
 */

#include <iostream>
#include <string>
#include <sys/stat.h>

#include "headers/file_processing_util.hpp"

using namespace std;

bool FileProcessingUtil::validateTarget(struct stat sb, string target) {
	return stat(target.c_str(), &sb) == 0 && target.find("\\") == string::npos;
}
