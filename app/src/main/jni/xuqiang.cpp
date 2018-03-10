//
// Created by Administrator on 2018/3/10.
//
#include "com_example_administrator_mybuildndk_JniUtil.h"

extern "C"
JNIEXPORT jstring JNICALL Java_com_example_administrator_mybuildndk_JniUtil_getString
        (JNIEnv *env, jobject ojb){
    return env->NewStringUTF("Hello, I'm from c++");
}
