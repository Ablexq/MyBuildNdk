package com.example.administrator.mybuildndk;

/**
 * Created by Administrator on 2018/3/10.
 */

public class JniUtil {

    public native String getString();

    static {
        System.loadLibrary("hello");
        //加载实现了native函数的动态库，只需要写动态库的名字
    }
}
