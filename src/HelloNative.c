#include "HelloNative.h"
#include <stdio.h>
JNIEXPORT void JNICALL Java_HelloNative greeting (JNIEnv * env, jclass cl){
	printf("Hello native World!\n")
}