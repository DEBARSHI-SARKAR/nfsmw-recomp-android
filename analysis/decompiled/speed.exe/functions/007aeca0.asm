007aeca0  MOV EAX,dword ptr [ECX + 0x1b4]
007aeca6  TEST EAX,EAX
007aeca8  PUSH EBX
007aeca9  PUSH ESI
007aecaa  LEA ESI,[ECX + 0x1b4]
007aecb0  PUSH EDI
007aecb1  JZ 0x007aecb8
007aecb3  ADD EAX,-0x4
007aecb6  JMP 0x007aecba
007aecb8  XOR EAX,EAX
007aecba  MOV EDX,dword ptr [ESP + 0x10]
007aecbe  MOV EDI,EDI
007aecc0  TEST ESI,ESI
007aecc2  JZ 0x007aecc9
007aecc4  LEA ECX,[ESI + -0x4]
007aecc7  JMP 0x007aeccb
007aecc9  XOR ECX,ECX
007aeccb  CMP EAX,ECX
007aeccd  JZ 0x007aed0b
007aeccf  MOV BL,byte ptr [EDX + 0x1c]
007aecd2  TEST BL,BL
007aecd4  MOV ECX,dword ptr [EAX + 0xc]
007aecd7  JZ 0x007aece9
007aecd9  MOV EDI,dword ptr [ECX + 0x18]
007aecdc  CMP EDI,dword ptr [EDX + 0x18]
007aecdf  JNZ 0x007aecfb
007aece1  MOV ECX,dword ptr [ECX + 0x14]
007aece4  MOV EDI,dword ptr [EDX + 0x14]
007aece7  JMP 0x007aecf7
007aece9  MOV EDI,dword ptr [ECX + 0xc]
007aecec  CMP EDI,dword ptr [EDX + 0xc]
007aecef  JNZ 0x007aecfb
007aecf1  MOV ECX,dword ptr [ECX + 0x10]
007aecf4  MOV EDI,dword ptr [EDX + 0x10]
007aecf7  CMP ECX,EDI
007aecf9  JZ 0x007aed0d
007aecfb  MOV EAX,dword ptr [EAX + 0x4]
007aecfe  TEST EAX,EAX
007aed00  JZ 0x007aed07
007aed02  ADD EAX,-0x4
007aed05  JMP 0x007aecc0
007aed07  XOR EAX,EAX
007aed09  JMP 0x007aecc0
007aed0b  XOR EAX,EAX
007aed0d  POP EDI
007aed0e  POP ESI
007aed0f  POP EBX
007aed10  RET 0x4
