004bac70  SUB ESP,0x1c
004bac73  PUSH ESI
004bac74  MOV ESI,ECX
004bac76  CALL 0x0081bccb
004bac7b  MOV ECX,dword ptr [ESI + 0x14]
004bac7e  LEA EAX,[ESP + 0x4]
004bac82  PUSH EAX
004bac83  PUSH ECX
004bac84  CALL 0x0081ccaa
004bac89  ADD ESP,0x8
004bac8c  CALL 0x0081bcd9
004bac91  MOV EAX,dword ptr [ESP + 0x4]
004bac95  TEST EAX,EAX
004bac97  POP ESI
004bac98  JZ 0x004bacd4
004bac9a  CMP EAX,0x1
004bac9d  JNZ 0x004bacda
004bac9f  CALL 0x0081bccb
004baca4  MOV EAX,dword ptr [ESP + 0x4]
004baca8  LEA EDX,[ESP + 0xc]
004bacac  PUSH EDX
004bacad  PUSH EAX
004bacae  CALL 0x0081cb91
004bacb3  ADD ESP,0x8
004bacb6  CALL 0x0081bcd9
004bacbb  MOV EAX,dword ptr [ESP + 0xc]
004bacbf  CMP EAX,0x3
004bacc2  JZ 0x004bacd4
004bacc4  TEST EAX,EAX
004bacc6  JZ 0x004bacda
004bacc8  CMP EAX,0x1
004baccb  JZ 0x004bacda
004baccd  CMP dword ptr [ESP + 0x14],0x64
004bacd2  JGE 0x004bacda
004bacd4  MOV AL,0x1
004bacd6  ADD ESP,0x1c
004bacd9  RET
004bacda  XOR AL,AL
004bacdc  ADD ESP,0x1c
004bacdf  RET
