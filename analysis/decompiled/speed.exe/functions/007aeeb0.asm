007aeeb0  MOV EAX,dword ptr [ECX + 0x1b4]
007aeeb6  TEST EAX,EAX
007aeeb8  LEA EDX,[ECX + 0x1b4]
007aeebe  JZ 0x007aeec5
007aeec0  LEA ECX,[EAX + -0x4]
007aeec3  JMP 0x007aeec7
007aeec5  XOR ECX,ECX
007aeec7  PUSH EBX
007aeec8  TEST EDX,EDX
007aeeca  JZ 0x007aeed1
007aeecc  LEA EAX,[EDX + -0x4]
007aeecf  JMP 0x007aeed3
007aeed1  XOR EAX,EAX
007aeed3  CMP ECX,EAX
007aeed5  JZ 0x007aef19
007aeed7  MOV EAX,dword ptr [ECX + 0xc]
007aeeda  TEST EAX,EAX
007aeedc  JZ 0x007aeefe
007aeede  MOV BL,byte ptr [EAX + 0x1c]
007aeee1  TEST BL,BL
007aeee3  JNZ 0x007aeefe
007aeee5  MOV EAX,dword ptr [EAX + 0x10]
007aeee8  ADD EAX,-0x4f
007aeeeb  CMP EAX,0x38
007aeeee  JA 0x007aeefe
007aeef0  MOVZX EAX,byte ptr [EAX + 0x7aef28]
007aeef7  JMP dword ptr [EAX*0x4 + 0x7aef20]
007aeefe  MOV AL,byte ptr [ECX + 0x14]
007aef01  TEST AL,AL
007aef03  JNZ 0x007aef15
007aef05  MOV ECX,dword ptr [ECX + 0x4]
007aef08  TEST ECX,ECX
007aef0a  JZ 0x007aef11
007aef0c  ADD ECX,-0x4
007aef0f  JMP 0x007aeec8
007aef11  XOR ECX,ECX
007aef13  JMP 0x007aeec8
007aef15  MOV AL,0x1
007aef17  POP EBX
007aef18  RET
007aef19  XOR AL,AL
007aef1b  POP EBX
007aef1c  RET
