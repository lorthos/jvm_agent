#include <jvmti.h>
#include <iostream>

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *vm, char *options, void *reserved) {
  std::cout << "Agent_OnLoad called..." << std::endl;
  return JNI_OK;
}

JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm) {
  std::cout << "Agent_OnUnload called..." << std::endl;
}

JNIEXPORT jint JNICALL Agent_OnAttach(JavaVM *vm, char *options, void *reserved) {
  std::cout << "Agent_OnAttach called..." << std::endl;
  return JNI_OK;
}
