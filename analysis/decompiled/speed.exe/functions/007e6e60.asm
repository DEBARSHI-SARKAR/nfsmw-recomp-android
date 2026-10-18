007e6e60  PUSH EBP
007e6e61  MOV EBP,ESP
007e6e63  SUB ESP,0x1c
007e6e66  MOV EAX,[0x00906980]
007e6e6b  MOV dword ptr [EBP + -0x8],EAX
007e6e6e  MOV EAX,0x907400
007e6e73  SUB EAX,0x60
007e6e76  MOV dword ptr [EBP + -0x4],EAX
007e6e79  CMP dword ptr [EBP + 0xc],0x0
007e6e7d  JNZ 0x007e6e84
007e6e7f  JMP 0x007e6f22
007e6e84  CMP dword ptr [EBP + 0xc],0x0
007e6e88  JGE 0x007e6e9d
007e6e8a  MOV ECX,dword ptr [EBP + 0xc]
007e6e8d  NEG ECX
007e6e8f  MOV dword ptr [EBP + 0xc],ECX
007e6e92  MOV EDX,0x907560
007e6e97  SUB EDX,0x60
007e6e9a  MOV dword ptr [EBP + -0x4],EDX
007e6e9d  CMP dword ptr [EBP + 0x10],0x0
007e6ea1  JNZ 0x007e6eab
007e6ea3  MOV EAX,dword ptr [EBP + 0x8]
007e6ea6  MOV word ptr [EAX],0x0
007e6eab  CMP dword ptr [EBP + 0xc],0x0
007e6eaf  JZ 0x007e6f22
007e6eb1  MOV ECX,dword ptr [EBP + -0x4]
007e6eb4  ADD ECX,0x54
007e6eb7  MOV dword ptr [EBP + -0x4],ECX
007e6eba  MOV EDX,dword ptr [EBP + 0xc]
007e6ebd  AND EDX,0x7
007e6ec0  MOV dword ptr [EBP + -0x18],EDX
007e6ec3  MOV EAX,dword ptr [EBP + 0xc]
007e6ec6  SAR EAX,0x3
007e6ec9  MOV dword ptr [EBP + 0xc],EAX
007e6ecc  CMP dword ptr [EBP + -0x18],0x0
007e6ed0  JNZ 0x007e6ed4
007e6ed2  JMP 0x007e6eab
007e6ed4  MOV ECX,dword ptr [EBP + -0x18]
007e6ed7  IMUL ECX,ECX,0xc
007e6eda  ADD ECX,dword ptr [EBP + -0x4]
007e6edd  MOV dword ptr [EBP + -0x1c],ECX
007e6ee0  MOV EDX,dword ptr [EBP + -0x1c]
007e6ee3  MOVZX EAX,word ptr [EDX]
007e6ee6  CMP EAX,0x8000
007e6eeb  JL 0x007e6f10
007e6eed  MOV ECX,dword ptr [EBP + -0x1c]
007e6ef0  MOV EDX,dword ptr [ECX]
007e6ef2  MOV dword ptr [EBP + -0x14],EDX
007e6ef5  MOV EAX,dword ptr [ECX + 0x4]
007e6ef8  MOV dword ptr [EBP + -0x10],EAX
007e6efb  MOV ECX,dword ptr [ECX + 0x8]
007e6efe  MOV dword ptr [EBP + -0xc],ECX
007e6f01  MOV EDX,dword ptr [EBP + -0x12]
007e6f04  SUB EDX,0x1
007e6f07  MOV dword ptr [EBP + -0x12],EDX
007e6f0a  LEA EAX,[EBP + -0x14]
007e6f0d  MOV dword ptr [EBP + -0x1c],EAX
007e6f10  MOV ECX,dword ptr [EBP + -0x1c]
007e6f13  PUSH ECX
007e6f14  MOV EDX,dword ptr [EBP + 0x8]
007e6f17  PUSH EDX
007e6f18  CALL 0x007e6a70
007e6f1d  ADD ESP,0x8
007e6f20  JMP 0x007e6eab
007e6f22  MOV ECX,dword ptr [EBP + -0x8]
007e6f25  CALL 0x007d6cb0
007e6f2a  MOV ESP,EBP
007e6f2c  POP EBP
007e6f2d  RET
