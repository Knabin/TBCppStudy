#pragma once
#include "Worker.h"
#include "Timer.h"

// Worker�� ������ ���� Timer.h�� �ʿ� ����,
// cpp ���Ͽ��� ������ ���� include �� �ָ� ��

void Worker::doSomething()
{
	Timer timer;	// start timer

	// do some work here

	timer.elapsed();	// end timer and report elapsed time
}
