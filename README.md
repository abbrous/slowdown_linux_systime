# slowdown_linux_systime
Slow down (Backward) Linux system time

# why
ntpd or chronyd is too slow to adjust linux system time

# How to Compile
## compile with C compiler(e.g GCC)
## e.g gcc -o slow_down slow_down.c
## ./slow_down
## Above command will consume 10seconds, actually the system time consuming = 9s, run everytime system will slow down 1s

# Example
## If your system is 20min ahead of ntp standard  time, since 20min = 1200s, run this executable file 1200 times to adjust time
## Use bash
## for i in {1..1200}
## do
## ./slow_down
## done
## It's time consuming, running in background 
## setsid for i in {1..1200};do ./slow_down;done

# WARNING
## Use at your own risk!!!

### FEEL FREE TO CHANGE 
