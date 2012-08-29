/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tuenti_voice_core_VoiceClient */

#ifndef _Included_com_tuenti_voice_core_VoiceClient
#define _Included_com_tuenti_voice_core_VoiceClient
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tuenti_voice_core_VoiceClient_CALL_STATE_EVENT
#define com_tuenti_voice_core_VoiceClient_CALL_STATE_EVENT 0L
#undef com_tuenti_voice_core_VoiceClient_XMPP_STATE_EVENT
#define com_tuenti_voice_core_VoiceClient_XMPP_STATE_EVENT 1L
#undef com_tuenti_voice_core_VoiceClient_XMPP_ERROR_EVENT
#define com_tuenti_voice_core_VoiceClient_XMPP_ERROR_EVENT 2L
#undef com_tuenti_voice_core_VoiceClient_BUDDY_LIST_EVENT
#define com_tuenti_voice_core_VoiceClient_BUDDY_LIST_EVENT 3L
/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeAcceptCall
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeAcceptCall
  (JNIEnv *, jobject);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeCall
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeCall
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeMuteCall
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeMuteCall
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeDeclineCall
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeDeclineCall
  (JNIEnv *, jobject);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeDestroy
  (JNIEnv *, jobject);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeEndCall
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeEndCall
  (JNIEnv *, jobject);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeInit
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeLogin
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZ)V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeLogin
  (JNIEnv *, jobject, jstring, jstring, jstring, jint, jboolean);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeLogout
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeLogout
  (JNIEnv *, jobject);

/*
 * Class:     com_tuenti_voice_core_VoiceClient
 * Method:    nativeRelease
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tuenti_voice_core_VoiceClient_nativeRelease
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
