#include "need.h"
int main(void) {
	struct rusage r_usage;
	struct rlimit r_limit;
	int priority;

	//cpu-load-line test
	work();

	getrusage(RUSAGE_SELF, &r_usage);
	printf("CPU:User = %ld.%06ld, System = %ld.%06ld\n",
			r_usage.ru_utime.tv_sec, r_usage.ru_utime.tv_usec,
			r_usage.ru_stime.tv_sec, r_usage.ru_stime.tv_usec);

		

}

void work() {
	FILE *f;
	int i,j;
	double x=3;
	for(i=0; i<10000; i++) {
		fprintf(f,"some content\n");
		if(ferror(f)) {
			fprintf(stderr, "Error occur in writing in file");
			exit(1);
		}
	}
	for(j=0;j<100000;j++) {
		x = log(x*x + 4);
	}
}




