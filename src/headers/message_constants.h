/**
 * @author (Mats Richard Hellstrand)
 * @version (11th of September, 2023)
 */

#ifndef HEADERS_MESSAGE_CONSTANTS_H_
#define HEADERS_MESSAGE_CONSTANTS_H_

#include <string_view>

using namespace std;

// Filenames and supported extensions for manipulation...
constexpr string_view OUTPUT_SOURCE = "output.txt";
constexpr string_view INPUT_SOURCE = "input.txt";
constexpr string_view EXTENSION_JPG = ".jpg";
constexpr string_view EXTENSION_JPEG = ".jpeg";
constexpr string_view EXTENSION_PNG = ".png";
constexpr string_view EXTENSION_BMP = ".bmp";
constexpr string_view EXTENSION_AVI = ".avi";
constexpr string_view EXTENSION_MP4 = ".mp4";
constexpr string_view EXTENSION_MOV = ".mov";
constexpr string_view EXTENSION_MPG = ".mpg";
constexpr string_view EXTENSION_WMV = ".wmv";
constexpr string_view EXTENSION_MKV = ".mkv";

// Date, Timezone, Timestamp format etc...
constexpr string_view DATE_TIMESTAMP_FORMAT = "yyyyMMdd_HHmmss";
constexpr string_view DATE_TIMEZONE = "GMT";
constexpr string_view DATE_COUNTRY = "SE";
constexpr string_view DATE_LANGUAGE = "se";

// Labels used by the application...
constexpr string_view LABEL_FILE_PROCESSING = "File handling";
constexpr string_view LABEL_COMPARE = "Compare resources";
constexpr string_view LABEL_CROP = "Crop resources";
constexpr string_view LABEL_CONVERT = "Convert resources";
constexpr string_view LABEL_DETECT = "Detect black borders";
constexpr string_view LABEL_DATA_PROCESSING = "Data handling";
constexpr string_view LABEL_VIDEOS = "Videos";
constexpr string_view LABEL_IMAGES = "Images";
constexpr string_view LABEL_CREATED = "Created Date";
constexpr string_view LABEL_FILE = "From File";
constexpr string_view LABEL_FILENAMES = "Save Filenames";
constexpr string_view LABEL_UNKNOWN_EXECUTION = "UNKNOWN";
constexpr string_view LABEL_PROCESSED_DIRECTORY = "processed\\";
constexpr string_view LABEL_DUPLICATES_DIRECTORY = "duplicates\\";
constexpr string_view LABEL_MATCHING_DIRECTORY = "matching\\";

// Message variables used for displaying states, or actions, in the application...
constexpr string_view MESSAGE_INVALID_USE = "Invalid use of application";
constexpr string_view MESSAGE_DESIRED_EXECUTION = "Are you happy with the current task? (y/n)";
constexpr string_view MESSAGE_DIRECTORY_UNAVAILABLE = "No directory found with the stated path: %s%n";
constexpr string_view MESSAGE_DIRECTORY_CREATION_FAILURE = "No directory was created with the stated path: %s%n";
constexpr string_view MESSAGE_RESOURCES_UNAVAILABLE = "No resources found with the desired command and predefined extensions";
constexpr string_view MESSAGE_SOURCE_UNAVAILABLE = "No source file found under the current path";
constexpr string_view MESSAGE_SOURCE_AVAILABLE = "A source file was found under the current path";
constexpr string_view MESSAGE_SOURCE_CONTAINS = "Source file contains";
constexpr string_view MESSAGE_PROCESSING_TASK = "The task you have selected is: '%s' by '%s' of '%s' under the following path: '%s'.%n";
constexpr string_view MESSAGE_PROCESSING_ATTRIBUTES = "The following attributes are also selected: '%s' to '%s', '%s' flag, X='%s' & Y='%s' axis values.%n";
constexpr string_view MESSAGE_LOADING_DIRECTORY = "Loading directory";
constexpr string_view MESSAGE_LOADING_FILES = "Available files";
constexpr string_view MESSAGE_SORTING_FILES = "Sorting files";
constexpr string_view MESSAGE_CONVERSION_HISTORY = "Conversion history";
constexpr string_view MESSAGE_CONVERSION_HISTORY_EMPTY = "Conversion history is empty, aborting the remaining process...";
constexpr string_view MESSAGE_LOADED_PREPARED = "New names being loaded/prepared";
constexpr string_view MESSAGE_RESOURCE_MISSING_FIELD = "The resource file was missing the datetime original field: ";
constexpr string_view MESSAGE_CONTINUE_RENAMING = "Do you want to continue with the renaming process? (y/n)";
constexpr string_view MESSAGE_RENAMING_PROCESS = "The process of renaming has begun";
constexpr string_view MESSAGE_CREATING_PROCESSED_DIRECTORY = "Creating the 'processed' directory";
constexpr string_view MESSAGE_RENAMING_ALERT = "%s was renamed to %s%n";
constexpr string_view MESSAGE_RENAMING_FAILURE = "The renaming process failed with a specific file";
constexpr string_view MESSAGE_FAILURE_SOURCES = "Specific file: %s, Failed because: %s%n";
constexpr string_view MESSAGE_FAILURE_NEWNAME = "newName.equals(NULL)";
constexpr string_view MESSAGE_UNDO_CONTINUE = "Do you want to undo the renaming process? (y/n)";
constexpr string_view MESSAGE_UNDO_RELOADING = "Reloading undo files";
constexpr string_view MESSAGE_UNDO_RESTORING = "The process of renaming back has begun";
constexpr string_view MESSAGE_UNDO_ALERT = "%s was renamed back to %s%n";
constexpr string_view MESSAGE_FAILED_UNDO_LOADING = "The amount of reloaded undo files and original files do not match";
constexpr string_view MESSAGE_UNDO_ABORT = "You chose not to undo the last renaming process, ignoring the undo process";
constexpr string_view MESSAGE_FAILED_MISMATCH = "The amount of generated names and amount of files do not match";
constexpr string_view MESSAGE_RENAMING_ABORT = "You chose not to rename files, aborting the renaming process";
constexpr string_view MESSAGE_EXECUTION_ABORT = "You chose not to continue with the execution, aborting the process";

#endif /* HEADERS_MESSAGE_CONSTANTS_H_ */
