#include <jni.h>
#include <string>
#include <thread>

extern "C"
jstring
Java_com_example_nat_android_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
