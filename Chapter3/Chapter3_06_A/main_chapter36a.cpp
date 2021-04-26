#include <iostream>

int main()
{
	using namespace std;

/*
    (true && true) || false
1.            true || false
2.                true

	(false && true) || true
1.            false || true
2.                 true

	(false && true) || false || true
1.            false || false || true
2.                     false || true
3.                          true

	(14 > 13 || 2 > 1) && (9 > 1)
1.     (true ||  true) && true
2.                true && true
3.                    true

	!(2314123 > 2 || 123123 > 2387)
1.         !(true || 123123 > 2387)
2.         !(true || true)
3.         !(    true    )
4.              false

*/

	return 0;
}