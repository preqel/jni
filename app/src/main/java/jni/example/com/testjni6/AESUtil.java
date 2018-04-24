package jni.example.com.testjni6;

/**
 * Created by preqel on 2018/4/23.
 */

public class AESUtil {

    public native String encrypt(String plainText,String key);
    public native String decrypt(String     cipherText,String key);

    static {
        System.loadLibrary("native");
    }
}
