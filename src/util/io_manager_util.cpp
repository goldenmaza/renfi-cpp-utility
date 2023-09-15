/**
 * @author (Mats Richard Hellstrand)
 * @version (15th of September, 2023)
 */

#include <string>
#include <string_view>
#include <list>
#include <dirent.h>

#include "../headers/util/io_manager_util.hpp"
#include "../headers/io/directory.hpp"
#include "../headers/io/file.hpp"

using namespace std;

IOManagerUtil::IOManagerUtil() {}

Directory IOManagerUtil::getDirectory(string path, string_view extension) {
	string name = path.substr(path.find_last_of("/"), path.size());
	list<File> files = getFiles(path, extension);
	return Directory(name, files);
}

list<File> IOManagerUtil::getFiles(string path, string_view extension) {
	list<File> files;

	DIR* dir_ptr;
	struct dirent* dir_read;
	if ((dir_ptr = opendir(path.c_str())) != nullptr) {
		while ((dir_read = readdir(dir_ptr)) != nullptr) {
			string fileName = dir_read->d_name;
			if (dir_read->d_type != DT_DIR && endsWith(fileName, extension)) {
				files.push_back(File(fileName));
			}
		}
		closedir(dir_ptr);
	}

	return files;
}

bool IOManagerUtil::endsWith(string fileName, string_view extension) {
    return fileName.compare(fileName.size() - extension.size(), extension.size(), extension) == 0;
}
