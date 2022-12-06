#include "../inc/minishell.h"

char* get_current_dir() {
	char *cwd;

	// Get the current working directory
	cwd = (char *)malloc(sizeof(char) * 1024);
	if (!cwd) {
		dprintf(1, "malloc failed\n");
		return NULL;
	}

	if (getcwd(cwd, sizeof(char) * 1024) == NULL) {
		dprintf(1, "%s\n", cwd);
		free(cwd);
		return NULL;
	}
	return cwd;
}