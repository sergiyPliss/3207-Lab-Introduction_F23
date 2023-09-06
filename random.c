
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "randhead.h"


char randchar() {
	return (char)(rand() % 25) + 65;
}
