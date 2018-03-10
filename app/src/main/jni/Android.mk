LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# 要生成的.so库名称，java代码System.loadLibrary("hello");加载的就是它
LOCAL_MODULE := hello
# c++文件
LOCAL_SRC_FILES := xuqiang.cpp

include $(BUILD_SHARED_LIBRARY)