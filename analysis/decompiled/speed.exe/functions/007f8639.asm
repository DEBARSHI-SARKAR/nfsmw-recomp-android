007f8639  PUSH EBP
007f863a  MOV EBP,ESP
007f863c  SUB ESP,0x34
007f863f  PUSH ESI
007f8640  XOR ECX,ECX
007f8642  XOR ESI,ESI
007f8644  CMP dword ptr [EBP + 0x8],ECX
007f8647  MOV byte ptr [EBP + -0x1],0x9
007f864b  JBE 0x007f8669
007f864d  MOV AL,byte ptr [ESI + EBX*0x1]
007f8650  CMP AL,0x9
007f8652  JZ 0x007f8660
007f8654  CMP AL,0xd
007f8656  JZ 0x007f8660
007f8658  INC ESI
007f8659  CMP ESI,dword ptr [EBP + 0x8]
007f865c  JC 0x007f864d
007f865e  JMP 0x007f8669
007f8660  MOV AL,byte ptr [ESI + EBX*0x1]
007f8663  MOV byte ptr [EBP + -0x1],AL
007f8666  MOV byte ptr [ESI + EBX*0x1],CL
007f8669  OR dword ptr [EBP + -0xc],0xffffffff
007f866d  MOV dword ptr [EBP + -0x20],0x8c2740
007f8674  MOV dword ptr [EBP + -0x1c],0x8c273c
007f867b  MOV dword ptr [EBP + -0x18],0x8c2734
007f8682  MOV dword ptr [EBP + -0x14],0x8c272c
007f8689  MOV dword ptr [EBP + -0x10],0x8c2724
007f8690  MOV dword ptr [EBP + -0x34],ECX
007f8693  MOV dword ptr [EBP + -0x30],0x1
007f869a  MOV dword ptr [EBP + -0x2c],0x2
007f86a1  MOV dword ptr [EBP + -0x28],0x3
007f86a8  MOV dword ptr [EBP + -0x24],0x4
007f86af  MOV dword ptr [EBP + -0x8],ECX
007f86b2  PUSH EDI
007f86b3  MOV EAX,dword ptr [EBP + -0x8]
007f86b6  MOV EDI,dword ptr [EBP + EAX*0x4 + -0x20]
007f86ba  PUSH EBX
007f86bb  CALL 0x007f85de
007f86c0  TEST EAX,EAX
007f86c2  POP ECX
007f86c3  JZ 0x007f86d3
007f86c5  INC dword ptr [EBP + -0x8]
007f86c8  CMP dword ptr [EBP + -0x8],0x5
007f86cc  JC 0x007f86b3
007f86ce  MOV EAX,dword ptr [EBP + -0xc]
007f86d1  JMP 0x007f86da
007f86d3  MOV EAX,dword ptr [EBP + -0x8]
007f86d6  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x34]
007f86da  CMP ESI,dword ptr [EBP + 0x8]
007f86dd  POP EDI
007f86de  JZ 0x007f86e6
007f86e0  MOV CL,byte ptr [EBP + -0x1]
007f86e3  MOV byte ptr [ESI + EBX*0x1],CL
007f86e6  POP ESI
007f86e7  LEAVE
007f86e8  RET
