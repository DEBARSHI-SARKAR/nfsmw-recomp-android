004dc5a0  PUSH ESI
004dc5a1  MOV ESI,dword ptr [ESP + 0x8]
004dc5a5  MOV EAX,dword ptr [ESI]
004dc5a7  PUSH EDI
004dc5a8  MOV EDI,ECX
004dc5aa  MOV ECX,ESI
004dc5ac  CALL dword ptr [EAX + 0x4]
004dc5af  MOV EAX,dword ptr [EAX]
004dc5b1  SAR EAX,0x4
004dc5b4  AND EAX,0xfff
004dc5b9  ADD EAX,-0x2
004dc5bc  CMP EAX,0x5
004dc5bf  JA 0x004dc5eb
004dc5c1  JMP dword ptr [EAX*0x4 + 0x4dc5f0]
004dc5c8  MOV dword ptr [EDI + 0x38],ESI
004dc5cb  POP EDI
004dc5cc  POP ESI
004dc5cd  RET 0x4
004dc5d0  MOV dword ptr [EDI + 0x40],ESI
004dc5d3  POP EDI
004dc5d4  POP ESI
004dc5d5  RET 0x4
004dc5d8  MOV dword ptr [EDI + 0x44],ESI
004dc5db  POP EDI
004dc5dc  POP ESI
004dc5dd  RET 0x4
004dc5e0  MOV dword ptr [EDI + 0x34],ESI
004dc5e3  POP EDI
004dc5e4  POP ESI
004dc5e5  RET 0x4
004dc5e8  MOV dword ptr [EDI + 0x48],ESI
004dc5eb  POP EDI
004dc5ec  POP ESI
004dc5ed  RET 0x4
