007fef19  PUSH EBP
007fef1a  MOV EBP,ESP
007fef1c  MOV EDX,dword ptr [EBP + 0xc]
007fef1f  DEC EDX
007fef20  MOV EAX,dword ptr [EBP + 0x10]
007fef23  MOV ECX,dword ptr [EBP + 0x8]
007fef26  JZ 0x007fef45
007fef28  PUSH ESI
007fef29  PUSH EDI
007fef2a  MOV EDI,EDX
007fef2c  MOVZX EDX,byte ptr [ECX]
007fef2f  INC ECX
007fef30  MOVZX ESI,byte ptr [ECX]
007fef33  MOV byte ptr [EAX],DL
007fef35  LEA EDX,[ESI + EDX*0x1 + 0x1]
007fef39  SHR EDX,0x1
007fef3b  MOV byte ptr [EAX + 0x1],DL
007fef3e  INC EAX
007fef3f  INC EAX
007fef40  DEC EDI
007fef41  JNZ 0x007fef2c
007fef43  POP EDI
007fef44  POP ESI
007fef45  MOVZX ECX,byte ptr [ECX]
007fef48  MOV byte ptr [EAX],CL
007fef4a  MOV byte ptr [EAX + 0x1],CL
007fef4d  POP EBP
007fef4e  RET
