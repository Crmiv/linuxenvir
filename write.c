#include <unistd.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
	//write system-call simple usage 
	//size_t write(int fildes, const void *buf, size_t nbytes);
	if((write(1,"hellomlord",SIZE))!= 10)
		write(2,"\nerror occur",12);

}
