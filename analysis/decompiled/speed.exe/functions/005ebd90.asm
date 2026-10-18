005ebd90  SUB ESP,0xc
005ebd93  PUSH ESI
005ebd94  MOV ESI,dword ptr [0x0091dff8]
005ebd9a  TEST ESI,ESI
005ebd9c  PUSH EDI
005ebd9d  MOV EDI,ECX
005ebd9f  MOV dword ptr [ESP + 0x8],EDI
005ebda3  MOV dword ptr [ESP + 0x10],0xffffffff
005ebdab  MOV dword ptr [ESP + 0xc],ESI
005ebdaf  JZ 0x005ebe39
005ebdb5  CMP word ptr [ESI + 0x18],0x0
005ebdba  JNZ 0x005ebdc9
005ebdbc  LEA ECX,[ESP + 0xc]
005ebdc0  CALL 0x005e1780
005ebdc5  MOV ESI,dword ptr [ESP + 0xc]
005ebdc9  TEST ESI,ESI
005ebdcb  JZ 0x005ebe39
005ebdcd  PUSH EBX
005ebdce  PUSH EBP
005ebdcf  NOP
005ebdd0  MOV ECX,ESI
005ebdd2  CALL 0x005db520
005ebdd7  MOV ECX,ESI
005ebdd9  CALL 0x005e2b10
005ebdde  MOV BL,byte ptr [ESI + 0xc4]
005ebde4  LEA EDI,[ESI + 0xb8]
005ebdea  MOV EBP,0x2
005ebdef  NOP
005ebdf0  MOV ECX,dword ptr [EDI]
005ebdf2  TEST ECX,ECX
005ebdf4  JZ 0x005ebe06
005ebdf6  TEST BL,BL
005ebdf8  JZ 0x005ebe01
005ebdfa  CALL 0x00503c30
005ebdff  JMP 0x005ebe06
005ebe01  CALL 0x00503c50
005ebe06  ADD EDI,0x4
005ebe09  DEC EBP
005ebe0a  JNZ 0x005ebdf0
005ebe0c  MOV ESI,dword ptr [ESI + 0x24]
005ebe0f  MOV EAX,[0x0091dff8]
005ebe14  CMP ESI,EAX
005ebe16  JZ 0x005ebe33
005ebe18  JMP 0x005ebe20
005ebe20  MOVZX ECX,word ptr [ESI + 0x18]
005ebe24  MOV EDX,dword ptr [ESP + 0x18]
005ebe28  TEST EDX,ECX
005ebe2a  JNZ 0x005ebdd0
005ebe2c  MOV ESI,dword ptr [ESI + 0x24]
005ebe2f  CMP ESI,EAX
005ebe31  JNZ 0x005ebe20
005ebe33  MOV EDI,dword ptr [ESP + 0x10]
005ebe37  POP EBP
005ebe38  POP EBX
005ebe39  MOV EAX,dword ptr [EDI + 0x2bc]
005ebe3f  XOR ESI,ESI
005ebe41  TEST EAX,EAX
005ebe43  JBE 0x005ebe69
005ebe45  JMP 0x005ebe50
005ebe50  MOV EAX,dword ptr [EDI + 0x2c4]
005ebe56  MOV ECX,dword ptr [EAX + ESI*0x4]
005ebe59  CALL 0x005ea190
005ebe5e  MOV EAX,dword ptr [EDI + 0x2bc]
005ebe64  INC ESI
005ebe65  CMP ESI,EAX
005ebe67  JC 0x005ebe50
005ebe69  POP EDI
005ebe6a  POP ESI
005ebe6b  ADD ESP,0xc
005ebe6e  RET
