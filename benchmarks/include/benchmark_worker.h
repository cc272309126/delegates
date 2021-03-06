#ifndef BENCHMARK_WORKER_H_
#define BENCHMARK_WORKER_H_

namespace bench
{
class Worker
{
public:
    Worker(int s);
    int inc();
    int dec();
    virtual int incVirtual() { return 0; };
    virtual int decVirtual() { return 0; };
    static int incStatic();
    static int decStatic();
};

} // namespace bench

#endif /* end of include guard */
