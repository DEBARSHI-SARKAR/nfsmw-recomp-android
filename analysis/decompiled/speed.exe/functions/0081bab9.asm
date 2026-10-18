0081bab9  CMP byte ptr [0x009c2188],0x0
0081bac0  JZ 0x0081bae2
0081bac2  PUSH ESI
0081bac3  XOR ESI,ESI
0081bac5  CMP byte ptr [0x009c218b],0x0
0081bacc  JLE 0x0081bae1
0081bace  CALL dword ptr [ESI*0x4 + 0x9c21ac]
0081bad5  MOVSX EAX,byte ptr [0x009c218b]
0081badc  INC ESI
0081badd  CMP ESI,EAX
0081badf  JL 0x0081bace
0081bae1  POP ESI
0081bae2  RET
