007ffeb9  PUSH EBP
007ffeba  MOV EBP,ESP
007ffebc  SUB ESP,0xc
007ffebf  PUSH ESI
007ffec0  MOV ESI,dword ptr [EBP + 0x8]
007ffec3  MOV EAX,dword ptr [ESI + 0x22c]
007ffec9  MOV ECX,dword ptr [ESI + 0x230]
007ffecf  AND dword ptr [EBP + 0x8],0x0
007ffed3  TEST EAX,EAX
007ffed5  MOV dword ptr [EBP + -0xc],EAX
007ffed8  MOV dword ptr [EBP + -0x8],ECX
007ffedb  JBE 0x007fff3b
007ffedd  PUSH EBX
007ffede  MOV dword ptr [EBP + -0x4],0x5
007ffee5  PUSH EDI
007ffee6  XOR EBX,EBX
007ffee8  XOR EDI,EDI
007ffeea  CMP dword ptr [EBP + -0x8],EBX
007ffeed  JBE 0x007fff2a
007ffeef  MOV EAX,dword ptr [ESI + 0x230]
007ffef5  IMUL EAX,dword ptr [EBP + 0x8]
007ffef9  ADD EAX,dword ptr [ESI + 0x6f4]
007ffeff  MOVSX EAX,byte ptr [EAX + EDI*0x1]
007fff03  PUSH EAX
007fff04  MOV EAX,dword ptr [ESI + 0x1b8]
007fff0a  IMUL EAX,dword ptr [EBP + -0x4]
007fff0e  PUSH 0x89d764
007fff13  LEA EAX,[EAX + EBX*0x1 + 0x5]
007fff17  PUSH EAX
007fff18  PUSH ESI
007fff19  CALL 0x00806d1a
007fff1e  ADD ESP,0x10
007fff21  INC EDI
007fff22  ADD EBX,0x10
007fff25  CMP EDI,dword ptr [EBP + -0x8]
007fff28  JC 0x007ffeef
007fff2a  INC dword ptr [EBP + 0x8]
007fff2d  MOV EAX,dword ptr [EBP + 0x8]
007fff30  ADD dword ptr [EBP + -0x4],0x10
007fff34  CMP EAX,dword ptr [EBP + -0xc]
007fff37  JC 0x007ffee6
007fff39  POP EDI
007fff3a  POP EBX
007fff3b  POP ESI
007fff3c  LEAVE
007fff3d  RET
