#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>

// Feel free to change
// Use at your own risk
// 10 seconds to run, time slow down 1 seconds

int main(int argc, char **argv) 
{
    struct timeval tv;
    const struct timespec ts = {0,100000000};//0.1s
    int ret = 0;
    int i = 0;

    for (i=0; i< 100; i++) { //running 0.1s*100=10s
        gettimeofday(&tv, NULL);
	nanosleep(&ts, NULL);
	if (tv.tv_usec < 990000) {
		tv.tv_usec += 10000;//0.01s
	} else if (tv.tv_usec >= 990000) {
		tv.tv_usec -= 990000;
		tv.tv_sec += 1;
	}
        ret = settimeofday(&tv, NULL);
	if (ret != 0) {
		perror("something went wrong!");
	}
    }

    return 0;
}
