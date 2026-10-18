007caac0  PUSH EBP
007caac1  MOV EBP,ESP
007caac3  SUB ESP,0x8
007caac6  CALL 0x007cd100
007caacb  MOV EAX,dword ptr [EAX + 0x64]
007caace  MOV dword ptr [EBP + -0x4],EAX
007caad1  MOV ECX,dword ptr [EBP + -0x4]
007caad4  CMP ECX,dword ptr [0x00906b3c]
007caada  JZ 0x007caae4
007caadc  CALL 0x007d2f80
007caae1  MOV dword ptr [EBP + -0x4],EAX
007caae4  MOV EDX,dword ptr [EBP + -0x4]
007caae7  CMP dword ptr [EDX + 0x28],0x1
007caaeb  JLE 0x007cab04
007caaed  PUSH 0x20
007caaef  MOV EAX,dword ptr [EBP + 0x8]
007caaf2  PUSH EAX
007caaf3  MOV ECX,dword ptr [EBP + -0x4]
007caaf6  PUSH ECX
007caaf7  CALL 0x007d4710
007caafc  ADD ESP,0xc
007caaff  MOV dword ptr [EBP + -0x8],EAX
007cab02  JMP 0x007cab19
007cab04  PUSH 0x20
007cab06  MOV EDX,dword ptr [EBP + 0x8]
007cab09  PUSH EDX
007cab0a  MOV EAX,dword ptr [EBP + -0x4]
007cab0d  PUSH EAX
007cab0e  CALL 0x007d4690
007cab13  ADD ESP,0xc
007cab16  MOV dword ptr [EBP + -0x8],EAX
007cab19  MOV EAX,dword ptr [EBP + -0x8]
007cab1c  MOV ESP,EBP
007cab1e  POP EBP
007cab1f  RET
