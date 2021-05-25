#pragma once
#include "Worker.h"
#include "Timer.h"

// Worker를 선언할 때는 Timer.h가 필요 없고,
// cpp 파일에서 구현할 때면 include 해 주면 됨

void Worker::doSomething()
{
	Timer timer;	// start timer

	// do some work here

	timer.elapsed();	// end timer and report elapsed time
}