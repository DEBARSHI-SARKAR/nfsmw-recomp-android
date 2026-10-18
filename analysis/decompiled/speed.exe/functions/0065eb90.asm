0065eb90  PUSH ECX
0065eb91  MOV EDX,dword ptr [ECX + 0x4]
0065eb94  MOV EAX,dword ptr [EDX + 0x4]
0065eb97  PUSH EBX
0065eb98  MOV BL,byte ptr [EAX + 0x29]
0065eb9b  TEST BL,BL
0065eb9d  PUSH ESI
0065eb9e  PUSH EDI
0065eb9f  MOV EDI,dword ptr [ESP + 0x18]
0065eba3  JNZ 0x0065ebbc
0065eba5  MOV ESI,dword ptr [EDI]
0065eba7  CMP dword ptr [EAX + 0x10],ESI
0065ebaa  JNC 0x0065ebb1
0065ebac  MOV EAX,dword ptr [EAX + 0x8]
0065ebaf  JMP 0x0065ebb5
0065ebb1  MOV EDX,EAX
0065ebb3  MOV EAX,dword ptr [EAX]
0065ebb5  MOV BL,byte ptr [EAX + 0x29]
0065ebb8  TEST BL,BL
0065ebba  JZ 0x0065eba7
0065ebbc  MOV EAX,dword ptr [ECX + 0x4]
0065ebbf  CMP EDX,EAX
0065ebc1  MOV dword ptr [ESP + 0x18],EDX
0065ebc5  JZ 0x0065ebe1
0065ebc7  MOV ECX,dword ptr [EDI]
0065ebc9  CMP ECX,dword ptr [EDX + 0x10]
0065ebcc  JC 0x0065ebe1
0065ebce  LEA EAX,[ESP + 0x18]
0065ebd2  MOV EDX,dword ptr [EAX]
0065ebd4  MOV EAX,dword ptr [ESP + 0x14]
0065ebd8  POP EDI
0065ebd9  POP ESI
0065ebda  MOV dword ptr [EAX],EDX
0065ebdc  POP EBX
0065ebdd  POP ECX
0065ebde  RET 0x8
0065ebe1  MOV dword ptr [ESP + 0xc],EAX
0065ebe5  LEA EAX,[ESP + 0xc]
0065ebe9  MOV EDX,dword ptr [EAX]
0065ebeb  MOV EAX,dword ptr [ESP + 0x14]
0065ebef  POP EDI
0065ebf0  POP ESI
0065ebf1  MOV dword ptr [EAX],EDX
0065ebf3  POP EBX
0065ebf4  POP ECX
0065ebf5  RET 0x8
