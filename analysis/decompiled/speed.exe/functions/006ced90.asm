006ced90  SUB ESP,0x8
006ced93  PUSH EBX
006ced94  MOV EBX,dword ptr [ESP + 0x18]
006ced98  PUSH EBP
006ced99  MOV EBP,dword ptr [ESP + 0x14]
006ced9d  PUSH ESI
006ced9e  PUSH EDI
006ced9f  MOV EDI,dword ptr [ESP + 0x20]
006ceda3  SUB EDI,EBP
006ceda5  MOV ECX,EBX
006ceda7  SUB ECX,EBP
006ceda9  SAR EDI,0x3
006cedac  SAR ECX,0x3
006cedaf  TEST EDI,EDI
006cedb1  MOV EAX,ECX
006cedb3  MOV ESI,EDI
006cedb5  JZ 0x006cedc2
006cedb7  CDQ
006cedb8  IDIV ESI
006cedba  MOV EAX,ESI
006cedbc  TEST EDX,EDX
006cedbe  MOV ESI,EDX
006cedc0  JNZ 0x006cedb7
006cedc2  CMP EAX,ECX
006cedc4  JGE 0x006cee39
006cedc6  TEST EAX,EAX
006cedc8  JLE 0x006cee39
006cedca  LEA ESI,[EBP + EAX*0x8]
006cedce  MOV dword ptr [ESP + 0x20],EAX
006cedd2  MOV EAX,dword ptr [ESI]
006cedd4  MOV ECX,dword ptr [ESI + 0x4]
006cedd7  MOV dword ptr [ESP + 0x10],EAX
006ceddb  LEA EAX,[ESI + EDI*0x8]
006cedde  CMP EAX,EBX
006cede0  MOV EDX,ESI
006cede2  MOV dword ptr [ESP + 0x14],ECX
006cede6  JNZ 0x006cedea
006cede8  MOV EAX,EBP
006cedea  CMP EAX,ESI
006cedec  JZ 0x006cee1e
006cedee  MOV EDI,EDI
006cedf0  MOV ECX,dword ptr [EAX]
006cedf2  MOV dword ptr [EDX],ECX
006cedf4  MOV ECX,dword ptr [EAX + 0x4]
006cedf7  MOV dword ptr [EDX + 0x4],ECX
006cedfa  MOV ECX,EBX
006cedfc  SUB ECX,EAX
006cedfe  SAR ECX,0x3
006cee01  CMP EDI,ECX
006cee03  MOV EDX,EAX
006cee05  JGE 0x006cee12
006cee07  LEA ECX,[EDI*0x8 + 0x0]
006cee0e  ADD EAX,ECX
006cee10  JMP 0x006cee1a
006cee12  MOV EAX,EDI
006cee14  SUB EAX,ECX
006cee16  LEA EAX,[EBP + EAX*0x8]
006cee1a  CMP EAX,ESI
006cee1c  JNZ 0x006cedf0
006cee1e  MOV EAX,dword ptr [ESP + 0x14]
006cee22  MOV ECX,dword ptr [ESP + 0x10]
006cee26  MOV dword ptr [EDX + 0x4],EAX
006cee29  MOV EAX,dword ptr [ESP + 0x20]
006cee2d  SUB ESI,0x8
006cee30  DEC EAX
006cee31  MOV dword ptr [EDX],ECX
006cee33  MOV dword ptr [ESP + 0x20],EAX
006cee37  JNZ 0x006cedd2
006cee39  POP EDI
006cee3a  POP ESI
006cee3b  POP EBP
006cee3c  POP EBX
006cee3d  ADD ESP,0x8
006cee40  RET
