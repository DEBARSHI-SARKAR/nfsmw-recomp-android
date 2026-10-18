0081eae9  MOV EAX,[0x009c21fc]
0081eaee  MOV EDX,dword ptr [ESP + 0x4]
0081eaf2  SUB EDX,dword ptr [EAX]
0081eaf4  PUSH ESI
0081eaf5  MOV ESI,dword ptr [EAX + 0x14]
0081eaf8  XOR ECX,ECX
0081eafa  TEST ESI,ESI
0081eafc  JGE 0x0081eb3b
0081eafe  PUSH EDI
0081eaff  MOV EDI,dword ptr [EAX + 0x4]
0081eb02  CMP dword ptr [EDI],EDX
0081eb04  JZ 0x0081eb10
0081eb06  DEC ECX
0081eb07  SUB EDI,0x8
0081eb0a  CMP ECX,ESI
0081eb0c  JG 0x0081eb02
0081eb0e  JMP 0x0081eb3a
0081eb10  INC dword ptr [EAX + 0x14]
0081eb13  MOV EAX,[0x009c21fc]
0081eb18  ADD dword ptr [EAX + 0xc],0x8
0081eb1c  JMP 0x0081eb30
0081eb1e  MOV EAX,dword ptr [EAX + 0x4]
0081eb21  LEA EAX,[EAX + ECX*0x8]
0081eb24  MOV EDX,dword ptr [EAX + -0x8]
0081eb27  MOV dword ptr [EAX],EDX
0081eb29  MOV EDX,dword ptr [EAX + -0x4]
0081eb2c  MOV dword ptr [EAX + 0x4],EDX
0081eb2f  DEC ECX
0081eb30  MOV EAX,[0x009c21fc]
0081eb35  CMP ECX,dword ptr [EAX + 0x14]
0081eb38  JG 0x0081eb1e
0081eb3a  POP EDI
0081eb3b  POP ESI
0081eb3c  RET
