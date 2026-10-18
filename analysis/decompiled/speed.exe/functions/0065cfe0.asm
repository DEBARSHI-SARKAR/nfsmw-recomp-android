0065cfe0  PUSH 0x0
0065cfe2  PUSH 0x30
0065cfe4  MOV ECX,0x925b30
0065cfe9  CALL 0x005d29d0
0065cfee  TEST EAX,EAX
0065cff0  JZ 0x0065d03c
0065cff2  MOV ECX,dword ptr [ESP + 0x4]
0065cff6  MOV EDX,dword ptr [ESP + 0x8]
0065cffa  MOV dword ptr [EAX],ECX
0065cffc  MOV ECX,dword ptr [ESP + 0xc]
0065d000  MOV dword ptr [EAX + 0x4],EDX
0065d003  MOV dword ptr [EAX + 0x8],ECX
0065d006  MOV ECX,dword ptr [ESP + 0x10]
0065d00a  PUSH ESI
0065d00b  MOV ESI,dword ptr [ECX]
0065d00d  LEA EDX,[EAX + 0x10]
0065d010  MOV dword ptr [EDX],ESI
0065d012  MOV ESI,dword ptr [ECX + 0x4]
0065d015  MOV dword ptr [EDX + 0x4],ESI
0065d018  MOV ESI,dword ptr [ECX + 0x8]
0065d01b  MOV dword ptr [EDX + 0x8],ESI
0065d01e  MOV ESI,dword ptr [ECX + 0xc]
0065d021  MOV dword ptr [EDX + 0xc],ESI
0065d024  MOV ESI,dword ptr [ECX + 0x10]
0065d027  MOV dword ptr [EDX + 0x10],ESI
0065d02a  MOV ECX,dword ptr [ECX + 0x14]
0065d02d  MOV dword ptr [EDX + 0x14],ECX
0065d030  MOV DL,byte ptr [ESP + 0x18]
0065d034  MOV byte ptr [EAX + 0x28],DL
0065d037  MOV byte ptr [EAX + 0x29],0x0
0065d03b  POP ESI
0065d03c  RET 0x14
