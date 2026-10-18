0083fc90  PUSH ECX
0083fc91  MOV ECX,dword ptr [ESP + 0xc]
0083fc95  PUSH ESI
0083fc96  MOV ESI,dword ptr [ESP + 0xc]
0083fc9a  XOR EAX,EAX
0083fc9c  PUSH ECX
0083fc9d  PUSH EAX
0083fc9e  LEA EDX,[ESP + 0xc]
0083fca2  MOV word ptr [ESI + 0x2],AX
0083fca6  MOV dword ptr [ESI + 0x4],EAX
0083fca9  MOV dword ptr [ESI + 0x8],EAX
0083fcac  MOV dword ptr [ESI + 0xc],EAX
0083fcaf  PUSH EDX
0083fcb0  LEA EAX,[ESP + 0x18]
0083fcb4  PUSH EAX
0083fcb5  MOV word ptr [ESI],0x2
0083fcba  CALL 0x0083fbb0
0083fcbf  MOV ECX,dword ptr [ESP + 0x1c]
0083fcc3  MOV byte ptr [ESI + 0x7],CL
0083fcc6  SHR ECX,0x8
0083fcc9  MOV byte ptr [ESI + 0x6],CL
0083fccc  SHR ECX,0x8
0083fccf  MOV byte ptr [ESI + 0x5],CL
0083fcd2  SHR ECX,0x8
0083fcd5  MOV byte ptr [ESI + 0x4],CL
0083fcd8  MOV ECX,dword ptr [ESP + 0x14]
0083fcdc  ADD ESP,0x10
0083fcdf  MOV EDX,ECX
0083fce1  SAR EDX,0x8
0083fce4  MOV byte ptr [ESI + 0x2],DL
0083fce7  MOV byte ptr [ESI + 0x3],CL
0083fcea  POP ESI
0083fceb  POP ECX
0083fcec  RET
