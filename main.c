#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"


int main(void)
{
	int fd1;
	int fd2;
	/*int fd3;
	char buffer[512];
	ssize_t ret;
	ssize_t read_size=0;
	char *a; */

	fd1 = open("test/sample", O_RDONLY);
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd1));
	//printf("%s", get_next_line(fd1));
	//printf("%s", get_next_line(fd1));
	//printf("%s", get_next_line(fd1));

	fd2 = open("test/sample2", O_RDONLY);
	printf("%s", get_next_line(fd2));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd2));
	//printf("%s",get_next_line(fd1));
/* 	get_next_line(fd1);

	fd2 = open("test.txt", O_RDONLY);
	get_next_line(fd2); */

	/*fd3 = open("test3.txt", O_RDONLY);
	get_next_line(fd3);*/

	/* if (fd1 < 0) {
		fprintf(stderr, "open() errror:%d\n", fd1);
		return 1;
	}

	while (1) {
		ret = read(fd1, buffer, sizeof(buffer));
		if (ret < 0) {
			fprintf(stderr, "read() errror:%d\n", fd1);
			close(fd1);
			return 1;
		}
		if (ret == 0) {
			break;
		}
		read_size += ret;
	} */

	close(fd1);	
	return 0;
}