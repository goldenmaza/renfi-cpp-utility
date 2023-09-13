/**
 * @author (Mats Richard Hellstrand)
 * @version (13th of September, 2023)
 */

#ifndef HEADERS_COLLECTION_CONSTANTS_HPP_
#define HEADERS_COLLECTION_CONSTANTS_HPP_

#include <vector>
#include <map>
#include <string_view>

#include "args_constants.hpp"
#include "message_constants.hpp"

using namespace std;

// Application vectors for verifying processing...
vector<string_view> FLOW_FLAGS {
    FILE_PROCESSING,
    DATA_PROCESSING
};

vector<string_view> BRANCH_FLAGS {
	COMPARE_PROCESSING,
	CROP_PROCESSING,
	CONVERT_PROCESSING,
	DETECT_PROCESSING,
	JAVA_PROCESSING,
	SOURCE_PROCESSING,
	ORIGIN_PROCESSING,
	LIST_PROCESSING
};

vector<string_view> RESOURCE_FLAGS {
	IMAGE_PROCESSING,
	VIDEO_PROCESSING
};

vector<string_view> TYPE_FLAGS {
	CREATION_TIME_FLAG,
	LAST_MODIFIED_TIME_FLAG,
	LAST_ACCESS_TIME_FLAG
};

vector<string_view> HELP_FLAGS {
	FULL_HELP_FLAG,
	HYPHEN_HELP_FLAG,
	HYPHEN_FULL_HELP_FLAG
};

map<string_view, vector<string_view>> PROCESSING_SUPPORT = {
	{IMAGE_PROCESSING, {EXTENSION_JPG, EXTENSION_JPEG, EXTENSION_PNG, EXTENSION_BMP}},
	{VIDEO_PROCESSING, {EXTENSION_AVI, EXTENSION_MP4, EXTENSION_MOV, EXTENSION_MPG, EXTENSION_WMV, EXTENSION_MKV}}
};

#endif /* HEADERS_COLLECTION_CONSTANTS_HPP_ */
