004caa10  PUSH -0x1
004caa12  PUSH 0x86c14e
004caa17  MOV EAX,FS:[0x0]
004caa1d  PUSH EAX
004caa1e  MOV dword ptr FS:[0x0],ESP
004caa25  PUSH ECX
004caa26  PUSH ESI
004caa27  MOV ESI,ECX
004caa29  MOV dword ptr [ESP + 0x4],ESI
004caa2d  PUSH 0x4c78d0
004caa32  PUSH 0x4c78c0
004caa37  PUSH 0x3
004caa39  PUSH 0x8
004caa3b  LEA EAX,[ESI + 0x4]
004caa3e  PUSH EAX
004caa3f  MOV dword ptr [ESP + 0x24],0x0
004caa47  MOV dword ptr [ESI],0x89766c
004caa4d  CALL 0x007c90a0
004caa52  MOV ECX,dword ptr [0x008ee558]
004caa58  PUSH ECX
004caa59  PUSH 0x897718
004caa5e  PUSH 0x81
004caa63  PUSH 0x1c
004caa65  MOV byte ptr [ESP + 0x20],0x1
004caa6a  CALL 0x004662e0
004caa6f  MOV [0x009120c4],EAX
004caa74  OR dword ptr [EAX + 0x14],0x1
004caa78  MOV EAX,[0x009120c4]
004caa7d  OR dword ptr [EAX + 0x14],0x4
004caa81  MOV EDX,dword ptr [0x008ee558]
004caa87  PUSH EDX
004caa88  PUSH 0x897708
004caa8d  PUSH 0x2d
004caa8f  PUSH 0x6c
004caa91  CALL 0x004662e0
004caa96  MOV [0x009120c8],EAX
004caa9b  OR dword ptr [EAX + 0x14],0x1
004caa9f  MOV EAX,[0x009120c8]
004caaa4  MOV ECX,dword ptr [EAX + 0x14]
004caaa7  ADD ESP,0x20
004caaaa  OR ECX,0x4
004caaad  MOV dword ptr [EAX + 0x14],ECX
004caab0  MOV ECX,dword ptr [ESP + 0x8]
004caab4  MOV EAX,ESI
004caab6  POP ESI
004caab7  MOV dword ptr FS:[0x0],ECX
004caabe  ADD ESP,0x10
004caac1  RET
