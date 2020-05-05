#include "jni_example_com_testjni6_JNITest.h"
#include <string>
extern "C" {
#include "include/libavcodec/avcodec.h"
}
JNIEXPORT jstring JNICALL
JNICALL Java_jni_example_com_testjni6_JNITest_getString(
        JNIEnv* env,
        jobject /* this */) {

   // std::string hello = "Hello from C++ a";
    std::string hello = avcodec_configuration();
    return env->NewStringUTF(hello.c_str());
}
