007fd8b8  PUSH EBP
007fd8b9  MOV EBP,ESP
007fd8bb  PUSH ECX
007fd8bc  MOV ECX,dword ptr [EBP + 0x18]
007fd8bf  TEST ECX,ECX
007fd8c1  JBE 0x007fd950
007fd8c7  MOV EAX,dword ptr [EBP + 0x10]
007fd8ca  SUB EAX,dword ptr [EBP + 0x1c]
007fd8cd  PUSH EBX
007fd8ce  PUSH ESI
007fd8cf  MOV ESI,dword ptr [EBP + 0x20]
007fd8d2  SHL EAX,0x2
007fd8d5  MOV dword ptr [EBP + 0x18],ECX
007fd8d8  MOV ECX,dword ptr [EBP + 0x8]
007fd8db  PUSH EDI
007fd8dc  MOV dword ptr [EBP + -0x4],EAX
007fd8df  XOR EDI,EDI
007fd8e1  CMP dword ptr [EBP + 0x1c],EDI
007fd8e4  JBE 0x007fd93e
007fd8e6  MOV EAX,dword ptr [EBP + 0x14]
007fd8e9  SHL EAX,0x2
007fd8ec  MOV EDX,ECX
007fd8ee  SUB EDX,EAX
007fd8f0  MOV EAX,dword ptr [EBP + 0x14]
007fd8f3  MOV EBX,dword ptr [ECX + EAX*0x4]
007fd8f6  MOV EAX,dword ptr [ECX + EAX*0x8]
007fd8f9  IMUL EBX,dword ptr [ESI + 0x8]
007fd8fd  IMUL EAX,dword ptr [ESI + 0xc]
007fd901  ADD EBX,EAX
007fd903  MOV EAX,dword ptr [ECX]
007fd905  IMUL EAX,dword ptr [ESI + 0x4]
007fd909  ADD EBX,EAX
007fd90b  MOV EAX,dword ptr [EDX]
007fd90d  IMUL EAX,dword ptr [ESI]
007fd910  LEA EAX,[EBX + EAX*0x1 + 0x40]
007fd914  SAR EAX,0x7
007fd917  JNS 0x007fd91d
007fd919  XOR EAX,EAX
007fd91b  JMP 0x007fd928
007fd91d  MOV EBX,0xff
007fd922  CMP EAX,EBX
007fd924  JLE 0x007fd928
007fd926  MOV EAX,EBX
007fd928  MOV EBX,dword ptr [EBP + 0xc]
007fd92b  ADD ECX,0x4
007fd92e  ADD EDX,0x4
007fd931  MOV word ptr [EBX + EDI*0x2],AX
007fd935  INC EDI
007fd936  CMP EDI,dword ptr [EBP + 0x1c]
007fd939  JC 0x007fd8f0
007fd93b  MOV EAX,dword ptr [EBP + -0x4]
007fd93e  MOV EDX,dword ptr [EBP + 0x1c]
007fd941  ADD EDX,EDX
007fd943  ADD dword ptr [EBP + 0xc],EDX
007fd946  ADD ECX,EAX
007fd948  DEC dword ptr [EBP + 0x18]
007fd94b  JNZ 0x007fd8df
007fd94d  POP EDI
007fd94e  POP ESI
007fd94f  POP EBX
007fd950  LEAVE
007fd951  RET
