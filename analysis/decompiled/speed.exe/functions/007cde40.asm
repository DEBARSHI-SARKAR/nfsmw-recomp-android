007cde40  PUSH EBP
007cde41  MOV EBP,ESP
007cde43  SUB ESP,0x34
007cde46  MOV EAX,[0x00906980]
007cde4b  MOV dword ptr [EBP + -0x4],EAX
007cde4e  MOV EAX,dword ptr [EBP + 0x8]
007cde51  MOV dword ptr [EBP + -0x24],EAX
007cde54  LEA ECX,[EBP + -0x34]
007cde57  MOV dword ptr [EBP + -0x20],ECX
007cde5a  LEA EDX,[EBP + -0x1c]
007cde5d  PUSH EDX
007cde5e  LEA EAX,[EBP + -0x34]
007cde61  PUSH EAX
007cde62  MOV ECX,dword ptr [EBP + -0x24]
007cde65  MOV EDX,dword ptr [ECX + 0x4]
007cde68  PUSH EDX
007cde69  MOV EAX,dword ptr [ECX]
007cde6b  PUSH EAX
007cde6c  CALL 0x007deba0
007cde71  ADD ESP,0x10
007cde74  MOV ECX,dword ptr [EBP + -0x20]
007cde77  PUSH ECX
007cde78  MOV EDX,dword ptr [EBP + -0x20]
007cde7b  MOV EAX,dword ptr [EBP + 0x10]
007cde7e  ADD EAX,dword ptr [EDX + 0x4]
007cde81  PUSH EAX
007cde82  MOV ECX,dword ptr [EBP + -0x20]
007cde85  XOR EDX,EDX
007cde87  CMP dword ptr [ECX],0x2d
007cde8a  SETZ DL
007cde8d  ADD EDX,dword ptr [EBP + 0xc]
007cde90  PUSH EDX
007cde91  CALL 0x007deaa0
007cde96  ADD ESP,0xc
007cde99  PUSH 0x0
007cde9b  MOV EAX,dword ptr [EBP + -0x20]
007cde9e  PUSH EAX
007cde9f  MOV ECX,dword ptr [EBP + 0x10]
007cdea2  PUSH ECX
007cdea3  MOV EDX,dword ptr [EBP + 0xc]
007cdea6  PUSH EDX
007cdea7  CALL 0x007cdec0
007cdeac  ADD ESP,0x10
007cdeaf  MOV EAX,dword ptr [EBP + 0xc]
007cdeb2  MOV ECX,dword ptr [EBP + -0x4]
007cdeb5  CALL 0x007d6cb0
007cdeba  MOV ESP,EBP
007cdebc  POP EBP
007cdebd  RET
