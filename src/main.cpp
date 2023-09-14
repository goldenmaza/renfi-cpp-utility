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

	vector<string_view> selectedExtensions = PROCESSING_SUPPORT[resourceType];
	unsigned long int extensionFromIndex = stoi(fromIndex), extensionToIndex = stoi(toIndex);
	if (extensionFromIndex < 0 && extensionToIndex >= selectedExtensions.size()) {
		return EXIT_FAILURE;
	}

	string_view flowTask = flow == FILE_PROCESSING ? LABEL_FILE_PROCESSING :
		flow == DATA_PROCESSING ? LABEL_DATA_PROCESSING :
			LABEL_UNKNOWN_EXECUTION;
	string_view branchTask = branch == COMPARE_PROCESSING ? LABEL_COMPARE :
		branch == CROP_PROCESSING ? LABEL_CROP :
			branch == CONVERT_PROCESSING ? LABEL_CONVERT :
				branch == DETECT_PROCESSING ? LABEL_DETECT :
					branch == ORIGIN_PROCESSING ? LABEL_CREATED :
						branch == LIST_PROCESSING ? LABEL_FILE :
							branch == SOURCE_PROCESSING ? LABEL_FILENAMES :
								LABEL_UNKNOWN_EXECUTION;
	string_view resourceTask = resourceType == IMAGE_PROCESSING ? LABEL_IMAGES : LABEL_VIDEOS;
	string_view fromExtension = selectedExtensions[extensionFromIndex];
	string_view toExtension = selectedExtensions[extensionToIndex];
	printf(
		string(MESSAGE_PROCESSING_TASK).c_str(),
		string(flowTask).c_str(), string(branchTask).c_str(), string(resourceTask).c_str(), string(path).c_str());
	printf(
		string(MESSAGE_PROCESSING_ATTRIBUTES).c_str(),
		string(fromExtension.substr(1)).c_str(), string(toExtension.substr(1)).c_str(),
		string(dateType).c_str(), string(leftXAxis).c_str(), string(leftYAxis).c_str());

    string key;
    cin >> key;
    if (key == "y") {//TODO: Implement task handling...
    }

	cout << "Done!" << endl;

	return EXIT_SUCCESS;
}
