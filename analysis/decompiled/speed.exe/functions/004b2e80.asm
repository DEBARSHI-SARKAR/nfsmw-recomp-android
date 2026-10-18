004b2e80  MOV EAX,dword ptr [ESP + 0x4]
004b2e84  TEST EAX,EAX
004b2e86  JZ 0x004b2eab
004b2e88  MOV ECX,dword ptr [EAX]
004b2e8a  CMP dword ptr [ECX],0x4d525453
004b2e90  JNZ 0x004b2eab
004b2e92  MOV EAX,dword ptr [ESP + 0x8]
004b2e96  CMP EAX,0x1
004b2e99  JL 0x004b2eab
004b2e9b  CMP EAX,dword ptr [ECX + 0x34]
004b2e9e  JG 0x004b2eab
004b2ea0  MOV ECX,dword ptr [ECX + 0x30]
004b2ea3  SHL EAX,0x4
004b2ea6  LEA EAX,[ECX + EAX*0x1 + -0x10]
004b2eaa  RET
004b2eab  XOR EAX,EAX
004b2ead  RET
