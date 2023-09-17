/**
 * @author (Mats Richard Hellstrand)
 * @version (17th of September, 2023)
 */

#include <string>
#include <vector>
#include <string_view>
#include <algorithm>

#include "../headers/util/help_guide_util.hpp"
#include "../headers/collection_constants.hpp"

using namespace std;

string HelpGuideUtil::displayHelpGuide() {
	string guide;

	vector<string_view> imageExtensions = PROCESSING_SUPPORT.at(IMAGE_PROCESSING);
	vector<string_view> videoExtensions = PROCESSING_SUPPORT.at(VIDEO_PROCESSING);

    guide.append("  === Help Guide ===")
		.append("\n")
		.append("\n  Operation legend:")
		.append("\n")
		.append("\n  g++ main.cpp -o renfi")
		.append("\n  ./renfi <FLOW> <BRANCH> <PATH> <RESOURCE_TYPE> <FROM_EXTENSION> <TO_EXTENSION> <X_AXIS> <Y_AXIS> <DATE_TYPE>")
		.append("\n")
		.append("\n  (FLOW)\t\tThe desired flow of the application: " + prepareValues(FLOW_FLAGS))
		.append("\n  (BRANCH)\t\tThe desired branch of the application: " + prepareValues(BRANCH_FLAGS))
		.append("\n  (PATH)\t\tThe directory path to where the files are located, e.g. \"c:/directory/\" OR \"c/directory/\"")
		.append("\n  (RESOURCE_TYPE)\tTo focus on either resource type: " + prepareValues(RESOURCE_FLAGS))
		.append("\n  (FROM_EXTENSION)\tThe desired file extension based on index (INTEGER). (view 'Extension legend' below)")
		.append("\n  (TO_EXTENSION)\tThe desired file extension based on index (INTEGER). (view 'Extension legend' below)")
		.append("\n  (X_AXIS)\t\tThe starting pixel on the X axis (INTEGER).")
		.append("\n  (Y_AXIS)\t\tThe starting pixel on the Y axis (INTEGER).")
		.append("\n  (DATE_TYPE)\t\tThe desired date type flag from file: " + prepareValues(TYPE_FLAGS))
		.append("\n")
		.append("\n  Extension legend:")
		.append("\n  (IMAGE)\t\tThe supported extensions and their indexes: " + prepareValuesWithIndex(imageExtensions))
		.append("\n  (VIDEO)\t\tThe supported extensions and their indexes *: " + prepareValuesWithIndex(videoExtensions))
		.append("\n  \t\t\t* Not ALL video formats are supported by Drew Noakes's extractor, some might need Java +7 to fetch date...")
		.append("\n")
		.append("\n  Flag legend:")
		.append("\n  (" + string(IMAGE_PROCESSING) + ")\t\t\tTo process IMAGE files based on extension stated.")
		.append("\n  (" + string(VIDEO_PROCESSING) + ")\t\t\tTo process VIDEO files based on extension stated.")
		.append("\n")
		.append("\n  (" + string(FILE_PROCESSING) + ")\t\t\tThe File processing flow lets us manipulate the file itself or to analyze it. You can choose one of the following branches:")
		.append("\n  (" + string(COMPARE_PROCESSING) + ")\t\t\tTo compare files, pixel by pixel, to determine if they are a duplicate or a close match.")
		.append("\n  (" + string(CROP_PROCESSING) + ")\t\tTo crop images, based on X & Y coordinates, this will remove the borders on both sides of the image.")
		.append("\n  (" + string(CONVERT_PROCESSING) + ")\t\tTo convert images from one extension to another.")
		.append("\n  (" + string(DETECT_PROCESSING) + ")\t\tTo detect black borders and to sort them into folders based on detected height. Note: Currently, only top-down is supported!")
		.append("\n  (" + string(SOURCE_PROCESSING) + ")\t\t\tTo prepare a SOURCE FILE based on directory files.")
		.append("\n")
		.append("\n  (" + string(DATA_PROCESSING) + ")\t\t\tThe Data processing flow lets us create a source file or determine date and time. You can choose one of the following branches:")
		.append("\n  (" + string(JAVA_PROCESSING) + ")\t\t\tTo use Java +7 to determine the date of creation.")
		.append("\n  (" + string(ORIGIN_PROCESSING) + ")\t\t\tTo prepare history conversion based on ORIGIN DATA by using Drew Noakes's extractor.")
		.append("\n  (" + string(LIST_PROCESSING) + ")\t\t\tTo prepare history conversion based on SOURCE FILE.")
		.append("\n")
		.append("\n  (" + string(CREATION_TIME_FLAG) + ")\t\t\tTo use the Creation Time field for setting the date and time.")
		.append("\n  (" + string(LAST_MODIFIED_TIME_FLAG) + ")\t\tTo use the Last Modified Time field for setting the date and time.")
		.append("\n  (" + string(LAST_ACCESS_TIME_FLAG) + ")\t\tTo use the Last Access Time field for setting the date and time.")
		.append("\n")
		.append("\n")
		.append("  " + prepareValues(HELP_FLAGS) + "\tTo display this help guide.");

	return guide;
}

string HelpGuideUtil::prepareValues(vector<string_view> values) {
	string preparedValues;

	for (string_view sv : values) {
		preparedValues.append(sv).append(", ");
	}

	return preparedValues;
}

string HelpGuideUtil::prepareValuesWithIndex(vector<string_view> values) {
	string preparedValues;

	for (string_view sv : values) {
		vector<string_view>::iterator itr = find(values.begin(), values.end(), sv);
		preparedValues.append(sv.substr(1))
			.append(" (")
			.append(to_string(distance(values.begin(), itr)))
			.append("), ");
	}

	return preparedValues;
}
