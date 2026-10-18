0051ce90  PUSH ESI
0051ce91  MOV ESI,ECX
0051ce93  MOV ECX,dword ptr [ESP + 0xc]
0051ce97  CMP ECX,0x9120409e
0051ce9d  JZ 0x0051cea7
0051ce9f  CMP ECX,0xb5971bf1
0051cea5  JNZ 0x0051cec7
0051cea7  MOV EAX,[0x0091ca24]
0051ceac  MOV EDX,dword ptr [0x0091cf90]
0051ceb2  MOV EDX,dword ptr [EDX + 0x10]
0051ceb5  LEA EAX,[EAX + EAX*0x4]
0051ceb8  LEA EAX,[EDX + EAX*0x4 + 0x85]
0051cebf  CMP byte ptr [EAX],0x0
0051cec2  SETZ DL
0051cec5  MOV byte ptr [EAX],DL
0051cec7  MOV EAX,dword ptr [ESI]
0051cec9  PUSH ECX
0051ceca  MOV ECX,ESI
0051cecc  MOV byte ptr [ESI + 0x2a],0x1
0051ced0  CALL dword ptr [EAX + 0x38]
0051ced3  MOV EDX,dword ptr [ESI]
0051ced5  MOV ECX,ESI
0051ced7  CALL dword ptr [EDX + 0xc]
0051ceda  POP ESI
0051cedb  RET 0x8
