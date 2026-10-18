004ba9b0  MOV EAX,dword ptr [ECX + 0x4]
004ba9b3  MOV ECX,dword ptr [ECX + 0xc]
004ba9b6  LEA ECX,[EAX + ECX*0x8]
004ba9b9  CMP EAX,ECX
004ba9bb  JZ 0x004ba9cc
004ba9bd  MOV EDX,dword ptr [ESP + 0x4]
004ba9c1  CMP dword ptr [EAX],EDX
004ba9c3  JZ 0x004ba9d4
004ba9c5  ADD EAX,0x8
004ba9c8  CMP EAX,ECX
004ba9ca  JNZ 0x004ba9c1
004ba9cc  MOV EAX,0x108
004ba9d1  RET 0x4
004ba9d4  MOV EAX,dword ptr [EAX + 0x4]
004ba9d7  RET 0x4
