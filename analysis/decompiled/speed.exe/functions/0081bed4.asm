0081bed4  PUSH EBP
0081bed5  MOV EBP,ESP
0081bed7  SUB ESP,0x10
0081beda  PUSH EBX
0081bedb  PUSH ESI
0081bedc  MOV ESI,dword ptr [EBP + 0x8]
0081bedf  PUSH EDI
0081bee0  LEA EAX,[ESI + 0xec]
0081bee6  PUSH EAX
0081bee7  LEA EAX,[ESI + 0x1c]
0081beea  PUSH EAX
0081beeb  LEA EAX,[ESI + 0x14]
0081beee  PUSH EAX
0081beef  PUSH dword ptr [ESI + 0x8]
0081bef2  CALL 0x0081dbad
0081bef7  MOV dword ptr [ESI + 0x4],EAX
0081befa  PUSH dword ptr [ESI + 0x4]
0081befd  CALL 0x0081f7cb
0081bf02  AND dword ptr [EBP + 0x8],0x0
0081bf06  ADD ESP,0x14
0081bf09  CMP byte ptr [ESI + 0x16],0x0
0081bf0d  MOV EDI,EAX
0081bf0f  MOV dword ptr [EBP + -0x8],EDI
0081bf12  JBE 0x0081bfb9
0081bf18  LEA EBX,[EDI + EDI*0x8]
0081bf1b  SHL EBX,0x4
0081bf1e  ADD EBX,0x4
0081bf21  MOV dword ptr [EBP + -0xc],EBX
0081bf24  MOV ECX,dword ptr [0x009c21f4]
0081bf2a  MOVSX EDX,word ptr [EBX + ECX*0x1]
0081bf2e  MOV EDI,dword ptr [EBP + 0x8]
0081bf31  AND dword ptr [EBP + -0x4],0x0
0081bf35  LEA EAX,[EDX + EDX*0x8]
0081bf38  SHL EAX,0x4
0081bf3b  ADD EAX,ECX
0081bf3d  CMP dword ptr [0x0090bd18],0x0
0081bf44  MOVZX ECX,byte ptr [ESI + 0x16]
0081bf48  LEA ECX,[ECX + ECX*0x2]
0081bf4b  MOVSX ECX,byte ptr [EDI + ECX*0x2 + 0x90bcea]
0081bf53  LEA ECX,[ECX + ECX*0x8]
0081bf56  LEA ECX,[ESI + ECX*0x4 + 0x13c]
0081bf5d  MOV dword ptr [EBP + -0x10],ECX
0081bf60  JLE 0x0081bf88
0081bf62  MOV ECX,dword ptr [EBP + -0x4]
0081bf65  MOV EDI,dword ptr [ESI + 0x104]
0081bf6b  MOV EBX,dword ptr [EAX + 0x64]
0081bf6e  SHL ECX,0x2
0081bf71  FLD float ptr [ECX + EDI*0x1]
0081bf74  INC dword ptr [EBP + -0x4]
0081bf77  FSTP float ptr [ECX + EBX*0x1]
0081bf7a  MOV ECX,dword ptr [EBP + -0x4]
0081bf7d  CMP ECX,dword ptr [0x0090bd18]
0081bf83  JL 0x0081bf62
0081bf85  MOV EBX,dword ptr [EBP + -0xc]
0081bf88  MOV ECX,dword ptr [EBP + -0x10]
0081bf8b  FLD float ptr [ECX + 0x8]
0081bf8e  MOV EDI,dword ptr [EBP + -0x8]
0081bf91  FST float ptr [EAX + 0x38]
0081bf94  PUSH EDX
0081bf95  FMUL float ptr [0x0090bd14]
0081bf9b  FSTP float ptr [EAX + 0x48]
0081bf9e  CALL 0x0081d7a4
0081bfa3  INC dword ptr [EBP + 0x8]
0081bfa6  MOVZX EAX,byte ptr [ESI + 0x16]
0081bfaa  INC EBX
0081bfab  INC EBX
0081bfac  CMP dword ptr [EBP + 0x8],EAX
0081bfaf  POP ECX
0081bfb0  MOV dword ptr [EBP + -0xc],EBX
0081bfb3  JC 0x0081bf24
0081bfb9  CMP byte ptr [ESI + 0x12],0x0
0081bfbd  JNZ 0x0081c0ac
0081bfc3  MOVZX EAX,byte ptr [ESI + 0x16]
0081bfc7  MOV ECX,dword ptr [0x009c1fdc]
0081bfcd  AND dword ptr [EBP + 0x8],0x0
0081bfd1  TEST EAX,EAX
0081bfd3  LEA ECX,[ECX + ECX*0x2]
0081bfd6  LEA ECX,[EAX + ECX*0x2]
0081bfd9  LEA EDX,[EAX + EAX*0x2]
0081bfdc  LEA ECX,[ECX + ECX*0x2]
0081bfdf  LEA EDX,[EDX*0x2 + 0x8c5d3a]
0081bfe6  LEA ECX,[ECX*0x2 + 0x8c5caa]
0081bfed  MOV dword ptr [EBP + -0xc],EDX
0081bff0  JBE 0x0081c0ac
0081bff6  LEA EDI,[EDI + EDI*0x8]
0081bff9  SHL EDI,0x4
0081bffc  MOV dword ptr [EBP + -0x4],ECX
0081bfff  ADD EDI,0x4
0081c002  SUB dword ptr [EBP + -0x4],EDX
0081c005  MOV EAX,[0x009c21f4]
0081c00a  FLD float ptr [0x008c5be8]
0081c010  MOVSX EDX,word ptr [EDI + EAX*0x1]
0081c014  MOV EBX,dword ptr [EBP + 0x8]
0081c017  LEA ECX,[EDX + EDX*0x8]
0081c01a  SHL ECX,0x4
0081c01d  ADD ECX,EAX
0081c01f  MOVZX EAX,byte ptr [ESI + 0x16]
0081c023  LEA EAX,[EAX + EAX*0x2]
0081c026  MOVSX EAX,byte ptr [EBX + EAX*0x2 + 0x90bcea]
0081c02e  LEA EAX,[EAX + EAX*0x8]
0081c031  LEA EBX,[ESI + EAX*0x4 + 0x13c]
0081c038  MOV dword ptr [EBP + -0x10],EDX
0081c03b  FLD float ptr [EBX]
0081c03d  FUCOMPP
0081c03f  FNSTSW AX
0081c041  TEST AH,0x44
0081c044  JP 0x0081c05f
0081c046  MOV EDX,dword ptr [EBP + -0xc]
0081c049  MOV EAX,dword ptr [EBP + -0x4]
0081c04c  MOV EBX,dword ptr [EBP + 0x8]
0081c04f  ADD EAX,EDX
0081c051  XOR EDX,EDX
0081c053  MOV DH,byte ptr [EAX + EBX*0x1]
0081c056  MOV word ptr [ECX + 0x1c],DX
0081c05a  MOV EDX,dword ptr [EBP + -0x10]
0081c05d  JMP 0x0081c093
0081c05f  FLD float ptr [EBX]
0081c061  FMUL float ptr [0x00899dd4]
0081c067  FSTP float ptr [EBP + -0x10]
0081c06a  FLD float ptr [EBP + -0x10]
0081c06d  FISTP dword ptr [EBP + -0x8]
0081c070  MOV AX,word ptr [EBP + -0x8]
0081c074  MOV word ptr [ECX + 0x1c],AX
0081c078  CMP byte ptr [EBX + 0x4],0x0
0081c07c  JNZ 0x0081c093
0081c07e  MOV EAX,dword ptr [EBP + -0xc]
0081c081  MOV EBX,dword ptr [EBP + 0x8]
0081c084  MOVZX AX,byte ptr [EAX + EBX*0x1]
0081c089  SHL EAX,0x8
0081c08c  ADD EAX,dword ptr [EBP + -0x8]
0081c08f  MOV word ptr [ECX + 0x1c],AX
0081c093  PUSH EDX
0081c094  CALL 0x0081f207
0081c099  INC dword ptr [EBP + 0x8]
0081c09c  MOVZX EAX,byte ptr [ESI + 0x16]
0081c0a0  INC EDI
0081c0a1  INC EDI
0081c0a2  CMP dword ptr [EBP + 0x8],EAX
0081c0a5  POP ECX
0081c0a6  JC 0x0081c005
0081c0ac  CMP dword ptr [ESI + 0x118],0x0
0081c0b3  JZ 0x0081c0c6
0081c0b5  LEA EAX,[ESI + 0x108]
0081c0bb  PUSH EAX
0081c0bc  PUSH dword ptr [ESI + 0x4]
0081c0bf  CALL 0x00821a97
0081c0c4  POP ECX
0081c0c5  POP ECX
0081c0c6  POP EDI
0081c0c7  MOV byte ptr [ESI + 0x10],0x1
0081c0cb  POP ESI
0081c0cc  POP EBX
0081c0cd  LEAVE
0081c0ce  RET
