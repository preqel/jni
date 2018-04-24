#include "jni_example_com_testjni6_JNITest.h"
#include <string>
#include <aes.h>
extern "C"
JNIEXPORT jstring JNICALL
#define LEN 512
JNICALL Java_jni_example_com_testjni6_AESUtil_decrypt(
        JNIEnv* env,
        jobject obj,jstring password,jstring data) {

    AES_KEY aes_key;
//
//
//    if(AES_set_encrypt_key(const unsigned char*)password,password)
//    const char* str = env->GetStringUTFChars(s, 0);
//    char* key = (char *)env->GetStringUTFChars(k,0);
//    int i;
//    char source[LEN];
//    char dst[LEN];
//    memset((char*)source, 0 ,LEN);
//    memset((char*)dst, 0 ,LEN);
//    strcpy(dst,str);
//    char data[LEN];
//    int j = 0;
//    memset((char*)data, 0 ,LEN);
//    int len=strlen(dst);
//    for(i=0;dst[i];i++){
//        if((i+1)%2==0){//加密结果中字符串两两分隔组成十六进制转化为具体值存入数组以供解密
//            data[j] = ascii2hex(&((char)dst[i-1]),1)*16+ascii2hex(&((char)dst[i]),1);
//            j++;
//        }
//    }
//    if(!aes_decrypt(data,key,source))
//    {
//        printf("decrypt error\n");
//    }
    return env->NewStringUTF("dd");
}

