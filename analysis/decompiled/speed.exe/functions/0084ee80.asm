0084ee80  PUSH ESI
0084ee81  MOV ESI,EAX
0084ee83  CALL 0x0084bcb0
0084ee88  SUB EAX,0x3e8
0084ee8d  MOV dword ptr [ESI + 0xcc],EAX
0084ee93  MOV EAX,dword ptr [ESP + 0x8]
0084ee97  MOVZX EAX,byte ptr [EAX + 0x8]
0084ee9b  ADD EAX,-0x10
0084ee9e  CMP EAX,0x4
0084eea1  JA 0x0084ef4c
0084eea7  JMP dword ptr [EAX*0x4 + 0x84ef50]
0084eeae  CMP dword ptr [ESI + 0x94],0x2
0084eeb5  JNZ 0x0084eee8
0084eeb7  MOV EDX,EDI
0084eeb9  MOV EAX,dword ptr [EDX]
0084eebb  LEA ECX,[ESI + 0x84]
0084eec1  MOV dword ptr [ECX],EAX
0084eec3  MOV EAX,dword ptr [EDX + 0x4]
0084eec6  MOV dword ptr [ECX + 0x4],EAX
0084eec9  MOV EAX,dword ptr [EDX + 0x8]
0084eecc  MOV dword ptr [ECX + 0x8],EAX
0084eecf  MOV EDX,dword ptr [EDX + 0xc]
0084eed2  PUSH EDI
0084eed3  MOV dword ptr [ECX + 0xc],EDX
0084eed6  CALL 0x0084ec30
0084eedb  ADD ESP,0x4
0084eede  MOV dword ptr [ESI + 0x94],0x3
0084eee8  PUSH 0x12
0084eeea  CALL 0x0084ed50
0084eeef  ADD ESP,0x4
0084eef2  POP ESI
0084eef3  RET
0084eef4  CMP dword ptr [ESI + 0x94],0x1
0084eefb  JNZ 0x0084ef4c
0084eefd  MOV EAX,dword ptr [EDI]
0084eeff  ADD ESI,0x84
0084ef05  MOV dword ptr [ESI],EAX
0084ef07  MOV ECX,dword ptr [EDI + 0x4]
0084ef0a  MOV dword ptr [ESI + 0x4],ECX
0084ef0d  MOV EDX,dword ptr [EDI + 0x8]
0084ef10  MOV dword ptr [ESI + 0x8],EDX
0084ef13  MOV EAX,dword ptr [EDI + 0xc]
0084ef16  MOV dword ptr [ESI + 0xc],EAX
0084ef19  POP ESI
0084ef1a  RET
0084ef1b  CMP dword ptr [ESI + 0x94],0x1
0084ef22  JNZ 0x0084ef4c
0084ef24  PUSH EDI
0084ef25  CALL 0x0084ec30
0084ef2a  ADD ESP,0x4
0084ef2d  MOV dword ptr [ESI + 0x94],0x3
0084ef37  POP ESI
0084ef38  RET
0084ef39  CMP dword ptr [ESI + 0x94],0x3
0084ef40  JNZ 0x0084ef4c
0084ef42  MOV dword ptr [ESI + 0x94],0x4
0084ef4c  POP ESI
0084ef4d  RET
