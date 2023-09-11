/**
 * @author (Mats Richard Hellstrand)
 * @version (11th of September, 2023)
 */

#ifndef HEADERS_ARGS_CONSTANTS_H_
#define HEADERS_ARGS_CONSTANTS_H_

#include <string_view>

using namespace std;

// Application indexes for determining flow and processing...
constexpr int FLOW_INDEX = 0;
constexpr int BRANCH_INDEX = 1;
constexpr int PATH_INDEX = 2;
constexpr int RESOURCE_TYPE_INDEX = 3;
constexpr int EXTENSION_FROM_INDEX = 4;
constexpr int EXTENSION_TO_INDEX = 5;
constexpr int UPPER_LEFT_X_INDEX = 6;
constexpr int UPPER_LEFT_Y_INDEX = 7;
constexpr int DATE_TYPE_INDEX = 8;

// Application flags for handling files...
constexpr string_view FILE_PROCESSING = "-f";
constexpr string_view COMPARE_PROCESSING = "-vs";
constexpr string_view CROP_PROCESSING = "-crop";
constexpr string_view CONVERT_PROCESSING = "-con";
constexpr string_view DETECT_PROCESSING = "-bor";
constexpr string_view SOURCE_PROCESSING = "-s";
constexpr string_view DATA_PROCESSING = "-d";
constexpr string_view JAVA_PROCESSING = "-j";
constexpr string_view ORIGIN_PROCESSING = "-o";
constexpr string_view LIST_PROCESSING = "-l";
constexpr string_view IMAGE_PROCESSING = "-i";
constexpr string_view VIDEO_PROCESSING = "-v";
constexpr string_view CREATION_TIME_FLAG = "-ct";
constexpr string_view LAST_MODIFIED_TIME_FLAG = "-lmt";
constexpr string_view LAST_ACCESS_TIME_FLAG = "-lat";
constexpr string_view FULL_HELP_FLAG = "help";
constexpr string_view HYPHEN_HELP_FLAG = "-h";
constexpr string_view HYPHEN_FULL_HELP_FLAG = "-help";

#endif /* HEADERS_ARGS_CONSTANTS_H_ */
