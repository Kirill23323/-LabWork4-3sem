#include "TQueue.h"

#ifndef __TJobStream_H__
#define __TJobStream_H__

#include <cstdlib>

class TJobStream
{
private:
	double jobIntense;
	size_t lastJobId;
public:
	TJobStream(double JobIntens);
	double GetJobIntens(void) const noexcept;
	size_t GetNewJob(void);
	size_t GetLastJobId(void) const noexcept;
};

#endif