0084fad0  PUSH EBP
0084fad1  PUSH ESI
0084fad2  PUSH 0x220
0084fad7  CALL 0x0078af30
0084fadc  MOV ESI,EAX
0084fade  XOR EBP,EBP
0084fae0  ADD ESP,0x4
0084fae3  XOR EAX,EAX
0084fae5  CMP ESI,EBP
0084fae7  JZ 0x0084fbe4
0084faed  PUSH EBX
0084faee  PUSH EDI
0084faef  MOV ECX,0x88
0084faf4  MOV EDI,ESI
0084faf6  STOSD.REP ES:EDI
0084faf8  LEA EAX,[ESI + 0x1f0]
0084fafe  PUSH EAX
0084faff  MOV dword ptr [ESI],0x84fad0
0084fb05  MOV dword ptr [ESI + 0x4],0x84f460
0084fb0c  MOV dword ptr [ESI + 0x8],0x84f500
0084fb13  MOV dword ptr [ESI + 0xc],0x84f510
0084fb1a  MOV dword ptr [ESI + 0x10],0x84f780
0084fb21  MOV dword ptr [ESI + 0x14],0x84f520
0084fb28  MOV dword ptr [ESI + 0x18],0x84f930
0084fb2f  MOV dword ptr [ESI + 0x1c],0x84f550
0084fb36  MOV dword ptr [ESI + 0x20],0x84f4e0
0084fb3d  MOV dword ptr [ESI + 0x24],0x84f580
0084fb44  MOV dword ptr [ESI + 0x28],0x84f5c0
0084fb4b  MOV dword ptr [ESI + 0x2c],0x84f5d0
0084fb52  MOV dword ptr [ESI + 0x30],0x84f6d0
0084fb59  MOV dword ptr [ESI + 0x34],0x84f730
0084fb60  MOV dword ptr [ESI + 0x4c],0x505253
0084fb67  CALL 0x0084bcc0
0084fb6c  MOV EDI,dword ptr [ESP + 0x18]
0084fb70  MOV EBX,dword ptr [ESP + 0x1c]
0084fb74  ADD EDI,0xe
0084fb77  AND EDI,0x7ffc
0084fb7d  MOV EAX,EDI
0084fb7f  IMUL EAX,EBX
0084fb82  PUSH EAX
0084fb83  MOV dword ptr [ESI + 0x9c],EDI
0084fb89  MOV dword ptr [ESI + 0xa4],EAX
0084fb8f  CALL 0x0078af30
0084fb94  MOV dword ptr [ESI + 0xb4],EDI
0084fb9a  IMUL EDI,dword ptr [ESP + 0x24]
0084fb9f  PUSH EDI
0084fba0  MOV dword ptr [ESI + 0xb0],EAX
0084fba6  MOV dword ptr [ESI + 0xb8],EDI
0084fbac  CALL 0x0078af30
0084fbb1  MOV dword ptr [ESI + 0xc4],EAX
0084fbb7  MOV EAX,EBX
0084fbb9  CDQ
0084fbba  AND EDX,0x7
0084fbbd  ADD ESP,0xc
0084fbc0  ADD EAX,EDX
0084fbc2  SAR EAX,0x3
0084fbc5  POP EDI
0084fbc6  MOV dword ptr [ESI + 0xa0],EAX
0084fbcc  MOV dword ptr [ESI + 0x80],EBP
0084fbd2  MOV dword ptr [ESI + 0x48],EBP
0084fbd5  MOV dword ptr [ESI + 0x94],EBP
0084fbdb  MOV dword ptr [ESI + 0x98],EBP
0084fbe1  MOV EAX,ESI
0084fbe3  POP EBX
0084fbe4  POP ESI
0084fbe5  POP EBP
0084fbe6  RET
