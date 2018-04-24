#include <jni.h>
#include <string>
#include <android/log.h>
#include <iostream>
#include "MyAES.h"

extern "C" {

__attribute ((visibility ("default")))
JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) //这是JNI_OnLoad的声明，必须按照这样的方式声明
{

    return JNI_VERSION_1_4; //这里很重要，必须返回版本，否则加载会失败。
}
__attribute ((visibility ("default")))
JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
    //   __android_log_print(ANDROID_LOG_ERROR, "tag", "library was unload");
}

/**
* AES加密算法
*/
__attribute ((visibility ("default")))
JNIEXPORT jstring JNICALL
Java_jni_example_com_testjni6_AESUtil_decrypt(JNIEnv *env, jobject instance, jstring msg_) {
    const char *msg = env->GetStringUTFChars(msg_, 0);

    std::string msgC;
    msgC.assign(msg);


    std::string aes = MyAES::encodeAES("1234567812345678", msgC);//密码长度必须大于16 位

    //std::string base64 = MyBASE64::base64_encodestring(aes);

    env->ReleaseStringUTFChars(msg_, msg);

    return env->NewStringUTF(aes.c_str());
}
}