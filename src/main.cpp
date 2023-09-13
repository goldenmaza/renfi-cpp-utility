#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <sys/stat.h>

#include "headers/args_constants.hpp"
#include "headers/collection_constants.hpp"
#include "headers/collection_util.hpp"
#include "headers/file_processing_util.hpp"

using namespace std;

/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */
int main(int argc, char* argv[]) {
	if (false) { //argc < 9) {
		// TODO: Implement HelpGuide...
		return EXIT_SUCCESS;
	}

	struct stat sb;
	string flow = argv[FLOW_INDEX];
	string branch = argv[BRANCH_INDEX];
	string path = argv[PATH_INDEX];
	string resourceType = argv[RESOURCE_TYPE_INDEX];
	string fromIndex = argv[EXTENSION_FROM_INDEX];
	string toIndex = argv[EXTENSION_TO_INDEX];
	string leftXAxis = argv[UPPER_LEFT_X_INDEX];
	string leftYAxis = argv[UPPER_LEFT_Y_INDEX];
	string dateType = argv[DATE_TYPE_INDEX];
	if (!CollectionUtil::vectorContainsItem(FLOW_FLAGS, flow)
		|| !CollectionUtil::vectorContainsItem(BRANCH_FLAGS, branch)
		|| !CollectionUtil::vectorContainsItem(RESOURCE_FLAGS, resourceType)
		|| !CollectionUtil::vectorContainsItem(TYPE_FLAGS, dateType)
		|| !CollectionUtil::mapContainsItem(PROCESSING_SUPPORT, resourceType)) {
		return EXIT_FAILURE;
	}

	if (!FileProcessingUtil::validateTarget(sb, path)) {
		return EXIT_FAILURE;
	}

	cout << "Done!" << endl;

	return EXIT_SUCCESS;
}
