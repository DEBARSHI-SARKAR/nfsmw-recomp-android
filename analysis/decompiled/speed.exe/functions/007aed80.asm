007aed80  MOV EAX,dword ptr [ECX + 0x1b4]
007aed86  PUSH EBX
007aed87  PUSH EBP
007aed88  LEA EBP,[ECX + 0x1b4]
007aed8e  PUSH ESI
007aed8f  XOR EBX,EBX
007aed91  TEST EAX,EAX
007aed93  PUSH EDI
007aed94  JZ 0x007aed9b
007aed96  LEA ESI,[EAX + -0x4]
007aed99  JMP 0x007aed9d
007aed9b  XOR ESI,ESI
007aed9d  MOV EDI,dword ptr [ESP + 0x14]
007aeda1  TEST EBP,EBP
007aeda3  JZ 0x007aedaa
007aeda5  LEA EAX,[EBP + -0x4]
007aeda8  JMP 0x007aedac
007aedaa  XOR EAX,EAX
007aedac  CMP ESI,EAX
007aedae  JZ 0x007aee5f
007aedb4  MOV AL,byte ptr [ESI + 0x14]
007aedb7  TEST AL,AL
007aedb9  JZ 0x007aee49
007aedbf  TEST EDI,EDI
007aedc1  JZ 0x007aedc8
007aedc3  CMP EDI,0x2
007aedc6  JNZ 0x007aee1b
007aedc8  MOV EAX,dword ptr [ESI + 0xc]
007aedcb  MOV CL,byte ptr [EAX + 0x1c]
007aedce  TEST CL,CL
007aedd0  JZ 0x007aedea
007aedd2  CALL 0x00575b00
007aedd7  TEST AL,AL
007aedd9  JZ 0x007aede2
007aeddb  MOV EAX,0x1
007aede0  JMP 0x007aee19
007aede2  MOV EAX,dword ptr [ESI + 0xc]
007aede5  MOV EAX,dword ptr [EAX + 0x24]
007aede8  JMP 0x007aee19
007aedea  MOV EAX,dword ptr [EAX + 0x10]
007aeded  ADD EAX,-0x4f
007aedf0  CMP EAX,0x38
007aedf3  JA 0x007aee03
007aedf5  MOVZX ECX,byte ptr [EAX + 0x7aee70]
007aedfc  JMP dword ptr [ECX*0x4 + 0x7aee68]
007aee03  CALL 0x00575b00
007aee08  TEST AL,AL
007aee0a  JZ 0x007aee13
007aee0c  MOV EAX,0x1
007aee11  JMP 0x007aee19
007aee13  MOV EDX,dword ptr [ESI + 0xc]
007aee16  MOV EAX,dword ptr [EDX + 0x24]
007aee19  ADD EBX,EAX
007aee1b  CMP EDI,0x1
007aee1e  JZ 0x007aee2e
007aee20  CMP EDI,0x2
007aee23  JNZ 0x007aee49
007aee25  CALL 0x00575b00
007aee2a  TEST AL,AL
007aee2c  JNZ 0x007aee49
007aee2e  MOV EAX,dword ptr [ESI + 0x10]
007aee31  TEST EAX,EAX
007aee33  JZ 0x007aee45
007aee35  FILD dword ptr [EAX + 0x24]
007aee38  FMUL float ptr [0x0089f71c]
007aee3e  CALL 0x007c4b80
007aee43  JMP 0x007aee47
007aee45  XOR EAX,EAX
007aee47  SUB EBX,EAX
007aee49  MOV EAX,dword ptr [ESI + 0x4]
007aee4c  TEST EAX,EAX
007aee4e  JZ 0x007aee58
007aee50  LEA ESI,[EAX + -0x4]
007aee53  JMP 0x007aeda1
007aee58  XOR ESI,ESI
007aee5a  JMP 0x007aeda1
007aee5f  POP EDI
007aee60  POP ESI
007aee61  POP EBP
007aee62  MOV EAX,EBX
007aee64  POP EBX
007aee65  RET 0x4
