#ifndef _mythread_h_
#define _mythread_h_


#include <pthread.h>


class MyThread {
  public:
    pthread_t tid;

  private:
    static pthread_mutex_t mutex;

  public:
    MyThread();
    int Create(void *Callback, void *args);
    int Join();

    static int InitMutex();
    static int LockMutex(const char *identifier);
    static int UnlockMutex(const char *identifier);
};

#endif
