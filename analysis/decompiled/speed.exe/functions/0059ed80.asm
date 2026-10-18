0059ed80  PUSH -0x1
0059ed82  PUSH 0x873248
0059ed87  MOV EAX,FS:[0x0]
0059ed8d  PUSH EAX
0059ed8e  MOV dword ptr FS:[0x0],ESP
0059ed95  PUSH ECX
0059ed96  PUSH ESI
0059ed97  MOV ESI,ECX
0059ed99  LEA EAX,[ESI + 0x30]
0059ed9c  MOV dword ptr [ESP + 0x4],ESI
0059eda0  MOV dword ptr [ESI],0x8a2280
0059eda6  MOV dword ptr [EAX],0x8a2278
0059edac  MOV ECX,dword ptr [EAX + 0x4]
0059edaf  PUSH EAX
0059edb0  MOV dword ptr [ESP + 0x14],0x0
0059edb8  MOV dword ptr [EAX],0x890970
0059edbe  CALL 0x005d5a50
0059edc3  MOV dword ptr [ESI],0x8a1e80
0059edc9  MOV EAX,dword ptr [ESI + 0x8]
0059edcc  ADD ESI,0x8
0059edcf  CMP EAX,ESI
0059edd1  MOV dword ptr [ESP + 0x10],0xffffffff
0059edd9  JZ 0x0059edf9
0059eddb  JMP 0x0059ede0
0059ede0  MOV ECX,dword ptr [EAX]
0059ede2  MOV EDX,dword ptr [EAX + 0x4]
0059ede5  MOV dword ptr [EDX],ECX
0059ede7  PUSH EAX
0059ede8  MOV dword ptr [ECX + 0x4],EDX
0059edeb  CALL 0x00466440
0059edf0  MOV EAX,dword ptr [ESI]
0059edf2  ADD ESP,0x4
0059edf5  CMP EAX,ESI
0059edf7  JNZ 0x0059ede0
0059edf9  MOV ECX,dword ptr [ESP + 0x8]
0059edfd  POP ESI
0059edfe  MOV dword ptr FS:[0x0],ECX
0059ee05  ADD ESP,0x10
0059ee08  RET
