#include <stdio.h>
#include <dirent.h>

int main(int argc, const char *argv[])
{
	DIR *dirp = NULL;

	if (argc < 2) {
		printf("Usage: %s <directory>\n", argv[0]);
		return -1;
	}

	if ((dirp = opendir(argv[1])) == NULL) {
		printf("opendir failed\n");
		return -1;
	}

	struct dirent *dp = NULL;
	while ((dp = readdir(dirp)) != NULL) {
		if (dp->d_d_type == DT_DIR) {
			printf("dirent file: %s\n", dp->d_name);
		} else if (dp->d_type == DT_REG) {
			printf("regular file: %s\n", dp->d_name);
		} else {
			printf("other file: %s\n", dp->d_name);
		}
	}
	closedir(dirp);
	return 0;
}
