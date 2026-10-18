006fee80  PUSH ECX
006fee81  PUSH ESI
006fee82  LEA EAX,[ESP + 0x4]
006fee86  PUSH EAX
006fee87  MOV ESI,ECX
006fee89  CALL 0x00626350
006fee8e  MOV ECX,dword ptr [ESP + 0x8]
006fee92  MOV EDX,dword ptr [ESP + 0x10]
006fee96  ADD ESP,0x4
006fee99  XOR EAX,EAX
006fee9b  MOV dword ptr [ESI],ECX
006fee9d  MOV dword ptr [ESI + 0x4],EAX
006feea0  MOV dword ptr [ESI + 0xc],EAX
006feea3  MOV dword ptr [ESI + 0x8],0x14
006feeaa  MOV dword ptr [ESI + 0x10],EDX
006feead  MOV EAX,ESI
006feeaf  POP ESI
006feeb0  POP ECX
006feeb1  RET 0x4
