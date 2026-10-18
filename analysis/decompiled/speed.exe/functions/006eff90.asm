006eff90  MOV EAX,[0x00988ec4]
006eff95  TEST EAX,EAX
006eff97  JZ 0x006effab
006eff99  MOV ECX,dword ptr [ESP + 0x4]
006eff9d  LEA ECX,[ECX]
006effa0  CMP dword ptr [EAX],ECX
006effa2  JZ 0x006effae
006effa4  MOV EAX,dword ptr [EAX + 0x8]
006effa7  TEST EAX,EAX
006effa9  JNZ 0x006effa0
006effab  XOR EAX,EAX
006effad  RET
006effae  MOV EDX,dword ptr [ESP + 0x8]
006effb2  SUB ESP,0x10
006effb5  MOV ECX,ESP
006effb7  MOV dword ptr [ECX],EDX
006effb9  MOV EDX,dword ptr [ESP + 0x1c]
006effbd  MOV dword ptr [ECX + 0x4],EDX
006effc0  MOV EDX,dword ptr [ESP + 0x20]
006effc4  MOV dword ptr [ECX + 0x8],EDX
006effc7  CALL dword ptr [EAX + 0x4]
006effca  ADD ESP,0x10
006effcd  RET
