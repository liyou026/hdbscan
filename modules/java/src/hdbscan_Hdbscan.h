/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class hdbscan_Hdbscan */

#ifndef _Included_hdbscan_Hdbscan
#define _Included_hdbscan_Hdbscan
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     hdbscan_Hdbscan
 * Method:    initHdbscan
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_hdbscan_Hdbscan_initHdbscan
  (JNIEnv *, jobject, jint);

/*
 * Class:     hdbscan_Hdbscan
 * Method:    runImpl
 * Signature: ([[D)[I
 */
JNIEXPORT jintArray JNICALL Java_hdbscan_Hdbscan_runImpl
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     hdbscan_Hdbscan
 * Method:    reRunImpl
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_hdbscan_Hdbscan_reRunImpl
  (JNIEnv *, jobject, jint);

/*
 * Class:     hdbscan_Hdbscan
 * Method:    cleanHdbscan
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_hdbscan_Hdbscan_cleanHdbscan
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif