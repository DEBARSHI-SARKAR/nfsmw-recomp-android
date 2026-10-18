007e2a30  PUSH EBP
007e2a31  MOV EBP,ESP
007e2a33  SUB ESP,0xc
007e2a36  MOV dword ptr [EBP + -0xc],0x1
007e2a3d  MOV dword ptr [EBP + -0x8],0x0
007e2a44  MOV EAX,dword ptr [EBP + -0x8]
007e2a47  CMP EAX,dword ptr [EBP + 0xc]
007e2a4a  JG 0x007e2aae
007e2a4c  CMP dword ptr [EBP + -0xc],0x0
007e2a50  JZ 0x007e2aae
007e2a52  MOV EAX,dword ptr [EBP + -0x8]
007e2a55  ADD EAX,dword ptr [EBP + 0xc]
007e2a58  CDQ
007e2a59  SUB EAX,EDX
007e2a5b  SAR EAX,0x1
007e2a5d  MOV dword ptr [EBP + -0x4],EAX
007e2a60  MOV ECX,dword ptr [EBP + -0x4]
007e2a63  MOV EDX,dword ptr [EBP + 0x8]
007e2a66  MOV EAX,dword ptr [EDX + ECX*0x8]
007e2a69  PUSH EAX
007e2a6a  MOV ECX,dword ptr [EBP + 0x10]
007e2a6d  MOV EDX,dword ptr [ECX]
007e2a6f  PUSH EDX
007e2a70  CALL 0x007e6630
007e2a75  ADD ESP,0x8
007e2a78  MOV dword ptr [EBP + -0xc],EAX
007e2a7b  CMP dword ptr [EBP + -0xc],0x0
007e2a7f  JNZ 0x007e2a92
007e2a81  MOV EAX,dword ptr [EBP + -0x4]
007e2a84  MOV ECX,dword ptr [EBP + 0x8]
007e2a87  LEA EDX,[ECX + EAX*0x8 + 0x4]
007e2a8b  MOV EAX,dword ptr [EBP + 0x10]
007e2a8e  MOV dword ptr [EAX],EDX
007e2a90  JMP 0x007e2aac
007e2a92  CMP dword ptr [EBP + -0xc],0x0
007e2a96  JGE 0x007e2aa3
007e2a98  MOV ECX,dword ptr [EBP + -0x4]
007e2a9b  SUB ECX,0x1
007e2a9e  MOV dword ptr [EBP + 0xc],ECX
007e2aa1  JMP 0x007e2aac
007e2aa3  MOV EDX,dword ptr [EBP + -0x4]
007e2aa6  ADD EDX,0x1
007e2aa9  MOV dword ptr [EBP + -0x8],EDX
007e2aac  JMP 0x007e2a44
007e2aae  XOR EAX,EAX
007e2ab0  CMP dword ptr [EBP + -0xc],0x0
007e2ab4  SETZ AL
007e2ab7  MOV ESP,EBP
007e2ab9  POP EBP
007e2aba  RET
