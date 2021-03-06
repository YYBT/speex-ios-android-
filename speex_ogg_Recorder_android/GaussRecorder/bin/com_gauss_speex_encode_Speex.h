/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_gauss_speex_encode_Speex */

#ifndef _Included_com_gauss_speex_encode_Speex
#define _Included_com_gauss_speex_encode_Speex
#ifdef __cplusplus
extern "C" {
#endif
#undef com_gauss_speex_encode_Speex_DEFAULT_COMPRESSION
#define com_gauss_speex_encode_Speex_DEFAULT_COMPRESSION 8L
/*
 * Class:     com_gauss_speex_encode_Speex
 * Method:    open
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gauss_speex_encode_Speex_open
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_gauss_speex_encode_Speex
 * Method:    getFrameSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_gauss_speex_encode_Speex_getFrameSize
  (JNIEnv *, jobject);

/*
 * Class:     com_gauss_speex_encode_Speex
 * Method:    decode
 * Signature: ([B[SI)I
 */
JNIEXPORT jint JNICALL Java_com_gauss_speex_encode_Speex_decode
  (JNIEnv *, jobject, jbyteArray, jshortArray, jint);

/*
 * Class:     com_gauss_speex_encode_Speex
 * Method:    encode
 * Signature: ([SI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_gauss_speex_encode_Speex_encode
  (JNIEnv *, jobject, jshortArray, jint, jbyteArray, jint);

/*
 * Class:     com_gauss_speex_encode_Speex
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_gauss_speex_encode_Speex_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
