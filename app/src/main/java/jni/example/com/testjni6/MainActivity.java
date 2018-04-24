package jni.example.com.testjni6;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = (TextView) findViewById(R.id.textview);
        AESUtil aesUtil = new AESUtil();
        try {
            tv.setText(aesUtil.decrypt("ddd","key"));
        }catch (Exception e){
            e.printStackTrace();
        }


    }
}
