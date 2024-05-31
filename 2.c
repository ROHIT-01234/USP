#include <stdio.h>
#include <unistd.h>
int main()
{
    // Check and display _POSIX_VERSION constant
    printf("_POSIX_VERSION constant: %ld\n", _POSIX_VERSION);
    // Print POSIX defined configuration options supported on the system
#ifdef _POSIX_ASYNCHRONOUS_IO
    printf("POSIX Asynchronous I/O supported\n");
#endif
#ifdef _POSIX_BARRIERS
    printf("POSIX Barriers supported\n");
#endif

#ifdef _POSIX_CPUTIME
    printf("POSIX CPU Time supported\n");
#endif
#ifdef _POSIX_FSYNC
    printf("POSIX Fsync supported\n");
#endif
#ifdef _POSIX_IPV6
    printf("POSIX IPv6 supported\n");
#endif
#ifdef _POSIX_JOB_CONTROL
    printf("POSIX Job Control supported\n");
#endif
#ifdef _POSIX_MAPPED_FILES
    printf("POSIX Mapped Files supported\n");
#endif

#ifdef _POSIX_SEMAPHORES
    printf("POSIX Semaphores supported\n");
#endif
  
#ifdef _POSIX_SHELL
    printf("POSIX Shell supported\n");
#endif
#ifdef _POSIX_SPAWN
    printf("POSIX Spawn supported\n");
#endif

#ifdef _POSIX_THREADS
    printf("POSIX Threads supported\n");
#endif
#ifdef _POSIX_TIMEOUTS
    printf("POSIX Timeouts supported\n");
#endif
#ifdef _POSIX_TIMERS
    printf("POSIX Timers supported\n");
#endif
#ifdef _POSIX_TRACE
    printf("POSIX Trace supported\n");
#endif

#ifdef _POSIX_V6_ILP32_OFF32
    printf("POSIX V6 ILP32 OFF32 supported\n");
#endif
#ifdef _POSIX_V6_ILP32_OFFBIG
    printf("POSIX V6 ILP32 OFFBIG supported\n");
#endif
#ifdef _POSIX_V6_LP64_OFF64
    printf("POSIX V6 LP64 OFF64 supported\n");
#endif
#ifdef _POSIX_V6_LPBIG_OFFBIG
    printf("POSIX V6 LPBIG OFFBIG supported\n");
#endif
#ifdef _POSIX_V7_ILP32_OFF32
    printf("POSIX V7 ILP32 OFF32 supported\n");
#endif
#ifdef _POSIX_V7_ILP32_OFFBIG
    printf("POSIX V7 ILP32 OFFBIG supported\n");
#endif
#ifdef _POSIX_V7_LP64_OFF64
    printf("POSIX V7 LP64 OFF64 supported\n");
#endif
#ifdef _POSIX_V7_LPBIG_OFFBIG
    printf("POSIX V7 LPBIG OFFBIG supported\n");
#endif
    return 0;
}
