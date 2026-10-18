00633dc0  CMP dword ptr [ECX],0x0
00633dc3  JLE 0x00633dd8
00633dc5  MOV EAX,dword ptr [ECX + 0x8]
00633dc8  LEA EAX,[EAX + EAX*0x2]
00633dcb  LEA ECX,[ECX + EAX*0x4 + 0x10]
00633dcf  MOV EAX,dword ptr [ESP + 0x4]
00633dd3  MOV dword ptr [EAX],ECX
00633dd5  RET 0x4
00633dd8  MOV EAX,dword ptr [ESP + 0x4]
00633ddc  MOV dword ptr [EAX],0x0
00633de2  RET 0x4
