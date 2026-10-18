00405da0  PUSH ECX
00405da1  PUSH ESI
00405da2  LEA EAX,[ESP + 0x4]
00405da6  PUSH EAX
00405da7  MOV ESI,ECX
00405da9  CALL 0x00405d20
00405dae  MOV ECX,dword ptr [ESP + 0x8]
00405db2  MOV DL,byte ptr [ESP + 0x10]
00405db6  ADD ESP,0x4
00405db9  XOR EAX,EAX
00405dbb  MOV dword ptr [ESI],ECX
00405dbd  MOV ECX,dword ptr [ESP + 0x14]
00405dc1  MOV dword ptr [ESI + 0x4],EAX
00405dc4  MOV dword ptr [ESI + 0xc],EAX
00405dc7  MOV EAX,dword ptr [ESP + 0x10]
00405dcb  MOV byte ptr [ESI + 0x10],DL
00405dce  MOV EDX,dword ptr [ESP + 0x18]
00405dd2  MOV dword ptr [ESI + 0x14],EAX
00405dd5  MOV dword ptr [ESI + 0x8],0x20
00405ddc  MOV dword ptr [ESI + 0x18],ECX
00405ddf  MOV dword ptr [ESI + 0x1c],EDX
00405de2  MOV EAX,ESI
00405de4  POP ESI
00405de5  POP ECX
00405de6  RET 0x10
