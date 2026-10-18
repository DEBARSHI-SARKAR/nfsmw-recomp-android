004bbb60  PUSH EBX
004bbb61  MOV EBX,dword ptr [ESP + 0x8]
004bbb65  PUSH ESI
004bbb66  MOV ESI,ECX
004bbb68  MOV AL,byte ptr [ESI + 0x164]
004bbb6e  TEST AL,AL
004bbb70  JNZ 0x004bbba0
004bbb72  MOV EAX,dword ptr [ESI + 0x28]
004bbb75  MOV ECX,dword ptr [EAX + 0x30]
004bbb78  FLD float ptr [ECX + 0x2c]
004bbb7b  PUSH EDI
004bbb7c  LEA EDI,[ESI + 0x14c]
004bbb82  FST float ptr [ESP + 0x10]
004bbb86  PUSH EBX
004bbb87  FSTP float ptr [EDI + 0xc]
004bbb8a  MOV ECX,EDI
004bbb8c  CALL 0x004b0320
004bbb91  MOV AL,byte ptr [EDI + 0x18]
004bbb94  TEST AL,AL
004bbb96  JZ 0x004bbb9f
004bbb98  MOV EDX,dword ptr [ESP + 0x10]
004bbb9c  MOV dword ptr [EDI + 0x14],EDX
004bbb9f  POP EDI
004bbba0  MOV EAX,dword ptr [ESI + 0x38]
004bbba3  DEC EAX
004bbba4  CMP EAX,0x6
004bbba7  JA 0x004bbbf4
004bbba9  MOVZX EAX,byte ptr [EAX + 0x4bbc04]
004bbbb0  JMP dword ptr [EAX*0x4 + 0x4bbbfc]
004bbbb7  PUSH EBX
004bbbb8  LEA ECX,[ESI + 0x88]
004bbbbe  CALL 0x004b0320
004bbbc3  POP ESI
004bbbc4  POP EBX
004bbbc5  RET 0x4
004bbbc8  MOV ECX,dword ptr [ESI + 0x28]
004bbbcb  MOV EDX,dword ptr [ECX + 0x30]
004bbbce  FLD float ptr [EDX + 0x2c]
004bbbd1  ADD ESI,0x88
004bbbd7  FST float ptr [ESP + 0xc]
004bbbdb  PUSH EBX
004bbbdc  MOV ECX,ESI
004bbbde  FSTP float ptr [ESI + 0xc]
004bbbe1  CALL 0x004b0320
004bbbe6  MOV AL,byte ptr [ESI + 0x18]
004bbbe9  TEST AL,AL
004bbbeb  JZ 0x004bbbf4
004bbbed  MOV EAX,dword ptr [ESP + 0xc]
004bbbf1  MOV dword ptr [ESI + 0x14],EAX
004bbbf4  POP ESI
004bbbf5  POP EBX
004bbbf6  RET 0x4
