
#include "../a2.h"
#include "../a2_libutil.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(argc!=2){
		printf("test_a2  file_name\n");
		exit(0);
	}

	struct a2_state* as = a2_open();
	a2_openutil(as);
	a2_loadfile(as, argv[1]);

	a2_close(as);
	mem_print();
	return 0;
}