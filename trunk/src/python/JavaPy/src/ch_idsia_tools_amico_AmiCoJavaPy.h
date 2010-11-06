/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ch_idsia_tools_amico_AmiCoJavaPy */

#ifndef _Included_ch_idsia_tools_amico_AmiCoJavaPy
#define _Included_ch_idsia_tools_amico_AmiCoJavaPy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    initModule
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_initModule
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_getName
  (JNIEnv *, jobject);

/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    integrateObservation
 * Signature: ([I[I[F[F[I)V
 */
JNIEXPORT void JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_integrateObservation
  (JNIEnv *, jobject, jintArray, jintArray, jfloatArray, jfloatArray, jintArray);

/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    getAction
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_getAction
  (JNIEnv *, jobject);

/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    giveIntermediateReward
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_giveIntermediateReward
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     ch_idsia_tools_amico_AmiCoJavaPy
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ch_idsia_tools_amico_AmiCoJavaPy_reset
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
