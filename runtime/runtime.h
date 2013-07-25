/* Copyright (c) 2013 Dong Fang, MIT; see COPYRIGHT */


// spinlock
#include <pthread.h>

struct spinlock {
	pthread_spinlock_t rawLock;
};

extern void spinlock_init(void *lock);
extern void spinlock_destroy(void *lock);
extern void spin_lock(void *lock);
extern void spin_unlock(void *lock);
