007ed55e  PUSH EBP
007ed55f  MOV EBP,ESP
007ed561  PUSH ESI
007ed562  MOV ESI,dword ptr [EBP + 0x8]
007ed565  PUSH dword ptr [ESI + 0x78]
007ed568  MOV dword ptr [ESI + 0x4],0x1
007ed56f  CALL dword ptr [0x00890198]
007ed575  CMP dword ptr [ESI + 0x8],0x0
007ed579  JNZ 0x007ed623
007ed57f  PUSH EBX
007ed580  PUSH EDI
007ed581  LEA EBX,[ESI + 0x28]
007ed584  MOV ECX,EBX
007ed586  CALL 0x007ec1bd
007ed58b  MOV EDI,dword ptr [ESI + 0x10]
007ed58e  AND dword ptr [ESI + 0xc],0x0
007ed592  TEST EDI,EDI
007ed594  JZ 0x007ed5aa
007ed596  MOVZX EAX,byte ptr [EDI + 0x12]
007ed59a  CMP EAX,dword ptr [ESI + 0x7c]
007ed59d  JG 0x007ed5aa
007ed59f  LEA ECX,[ESI + 0x10]
007ed5a2  CALL 0x007ee44b
007ed5a7  MOV dword ptr [ESI + 0xc],EAX
007ed5aa  MOV ECX,EBX
007ed5ac  CALL 0x007ec1c8
007ed5b1  CMP dword ptr [ESI + 0xc],0x0
007ed5b5  JNZ 0x007ed5c3
007ed5b7  LEA EAX,[ESI + 0x44]
007ed5ba  PUSH EAX
007ed5bb  CALL 0x007ecc96
007ed5c0  POP ECX
007ed5c1  JMP 0x007ed617
007ed5c3  CMP byte ptr [EDI + 0x10],0x1
007ed5c7  JZ 0x007ed5d1
007ed5c9  MOV EAX,dword ptr [EDI]
007ed5cb  PUSH ESI
007ed5cc  MOV ECX,EDI
007ed5ce  CALL dword ptr [EAX + 0x4]
007ed5d1  CMP byte ptr [EDI + 0x11],0x0
007ed5d5  JZ 0x007ed617
007ed5d7  MOV ECX,EBX
007ed5d9  CALL 0x007ec1bd
007ed5de  PUSH EDI
007ed5df  LEA ECX,[ESI + 0x1c]
007ed5e2  CALL 0x007ee3f3
007ed5e7  AND dword ptr [ESI + 0xc],0x0
007ed5eb  MOV ECX,EBX
007ed5ed  CALL 0x007ec1c8
007ed5f2  CMP byte ptr [EDI + 0x10],0x1
007ed5f6  JNZ 0x007ed5fd
007ed5f8  OR EAX,0xffffffff
007ed5fb  JMP 0x007ed601
007ed5fd  MOVSX EAX,byte ptr [EDI + 0x11]
007ed601  PUSH dword ptr [EDI + 0x18]
007ed604  PUSH EAX
007ed605  PUSH dword ptr [EDI + 0xc]
007ed608  CALL dword ptr [EDI + 0x1c]
007ed60b  ADD ESP,0xc
007ed60e  PUSH dword ptr [ESI + 0x78]
007ed611  CALL dword ptr [0x00890198]
007ed617  CMP dword ptr [ESI + 0x8],0x0
007ed61b  JZ 0x007ed584
007ed621  POP EDI
007ed622  POP EBX
007ed623  MOV dword ptr [ESI + 0x4],0x0
007ed62a  XOR EAX,EAX
007ed62c  POP ESI
007ed62d  POP EBP
007ed62e  RET
