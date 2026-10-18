006feef0  PUSH ECX
006feef1  PUSH ESI
006feef2  LEA EAX,[ESP + 0x4]
006feef6  PUSH EAX
006feef7  MOV ESI,ECX
006feef9  CALL 0x00625e60
006feefe  MOV ECX,dword ptr [ESP + 0x8]
006fef02  ADD ESP,0x4
006fef05  XOR EAX,EAX
006fef07  MOV dword ptr [ESI],ECX
006fef09  MOV dword ptr [ESI + 0x4],EAX
006fef0c  MOV dword ptr [ESI + 0xc],EAX
006fef0f  MOV dword ptr [ESI + 0x8],0x10
006fef16  MOV EAX,ESI
006fef18  POP ESI
006fef19  POP ECX
006fef1a  RET
