004cbb90  PUSH EBX
004cbb91  MOV EBX,dword ptr [ESP + 0xc]
004cbb95  PUSH EDI
004cbb96  MOV EDI,dword ptr [ESP + 0xc]
004cbb9a  CMP EDI,EBX
004cbb9c  JZ 0x004cbbff
004cbb9e  PUSH ESI
004cbb9f  LEA ESI,[EDI + 0x8]
004cbba2  CMP ESI,EBX
004cbba4  JZ 0x004cbbfe
004cbba6  PUSH EBP
004cbba7  MOV ECX,dword ptr [ESI]
004cbba9  CMP ECX,dword ptr [EDI]
004cbbab  JNC 0x004cbbc1
004cbbad  CMP EDI,ESI
004cbbaf  LEA EAX,[ESI + 0x8]
004cbbb2  JZ 0x004cbbf6
004cbbb4  CMP ESI,EAX
004cbbb6  JZ 0x004cbbf6
004cbbb8  PUSH 0x0
004cbbba  PUSH 0x0
004cbbbc  PUSH EAX
004cbbbd  PUSH ESI
004cbbbe  PUSH EDI
004cbbbf  JMP 0x004cbbee
004cbbc1  MOV EDX,dword ptr [ESI + -0x8]
004cbbc4  CMP ECX,EDX
004cbbc6  LEA EAX,[ESI + -0x8]
004cbbc9  JNC 0x004cbbf6
004cbbcb  JMP 0x004cbbd0
004cbbd0  MOV EBP,dword ptr [EAX + -0x8]
004cbbd3  MOV EDX,EAX
004cbbd5  SUB EAX,0x8
004cbbd8  CMP ECX,EBP
004cbbda  JC 0x004cbbd0
004cbbdc  CMP EDX,ESI
004cbbde  JZ 0x004cbbf6
004cbbe0  LEA EAX,[ESI + 0x8]
004cbbe3  CMP ESI,EAX
004cbbe5  JZ 0x004cbbf6
004cbbe7  PUSH 0x0
004cbbe9  PUSH 0x0
004cbbeb  PUSH EAX
004cbbec  PUSH ESI
004cbbed  PUSH EDX
004cbbee  CALL 0x004c1b80
004cbbf3  ADD ESP,0x14
004cbbf6  ADD ESI,0x8
004cbbf9  CMP ESI,EBX
004cbbfb  JNZ 0x004cbba7
004cbbfd  POP EBP
004cbbfe  POP ESI
004cbbff  POP EDI
004cbc00  POP EBX
004cbc01  RET
