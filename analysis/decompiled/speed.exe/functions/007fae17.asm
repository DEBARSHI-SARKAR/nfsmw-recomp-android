007fae17  PUSH EBP
007fae18  MOV EBP,ESP
007fae1a  PUSH ESI
007fae1b  PUSH EDI
007fae1c  PUSH 0x8
007fae1e  POP ESI
007fae1f  MOVZX EDI,byte ptr [EAX]
007fae22  ADD EDI,EDX
007fae24  SHL EDI,0x10
007fae27  MOV dword ptr [ECX],EDI
007fae29  MOVZX EDI,byte ptr [EAX + 0x1]
007fae2d  ADD EDI,EDX
007fae2f  SHL EDI,0x10
007fae32  MOV dword ptr [ECX + 0x4],EDI
007fae35  MOVZX EDI,byte ptr [EAX + 0x2]
007fae39  ADD EDI,EDX
007fae3b  SHL EDI,0x10
007fae3e  MOV dword ptr [ECX + 0x8],EDI
007fae41  MOVZX EDI,byte ptr [EAX + 0x3]
007fae45  ADD EDI,EDX
007fae47  SHL EDI,0x10
007fae4a  MOV dword ptr [ECX + 0xc],EDI
007fae4d  MOVZX EDI,byte ptr [EAX + 0x4]
007fae51  ADD EDI,EDX
007fae53  SHL EDI,0x10
007fae56  MOV dword ptr [ECX + 0x10],EDI
007fae59  MOVZX EDI,byte ptr [EAX + 0x5]
007fae5d  ADD EDI,EDX
007fae5f  SHL EDI,0x10
007fae62  MOV dword ptr [ECX + 0x14],EDI
007fae65  MOVZX EDI,byte ptr [EAX + 0x6]
007fae69  ADD EDI,EDX
007fae6b  SHL EDI,0x10
007fae6e  MOV dword ptr [ECX + 0x18],EDI
007fae71  MOVZX EDI,byte ptr [EAX + 0x7]
007fae75  ADD EAX,dword ptr [EBP + 0x8]
007fae78  ADD EDI,EDX
007fae7a  SHL EDI,0x10
007fae7d  MOV dword ptr [ECX + 0x1c],EDI
007fae80  ADD ECX,0x20
007fae83  DEC ESI
007fae84  JNZ 0x007fae1f
007fae86  POP EDI
007fae87  POP ESI
007fae88  POP EBP
007fae89  RET
