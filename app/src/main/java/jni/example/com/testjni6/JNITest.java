package jni.example.com.testjni6;

public class JNITest {

    static {
        System.loadLibrary("jnilib");
    }

    public native String getString();
}