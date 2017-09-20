#ifndef REFERENCE_COUNT_H
#define REFERENCE_COUNT_H

#include <atomic>

class ReferenceCount {
    std::atomic_uint mCount;
public:
    void attach() { ++mCount; }
    void detach() { --mCount; }
}

#endif // REFERENCE_COUNT_H
