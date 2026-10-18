006efa70  PUSH ESI
006efa71  MOV ESI,ECX
006efa73  MOV EAX,dword ptr [ESI + 0x8]
006efa76  PUSH EDI
006efa77  MOV EDI,dword ptr [ESP + 0xc]
006efa7b  CMP EDI,EAX
006efa7d  JBE 0x006efad6
006efa7f  MOV EAX,dword ptr [ESI]
006efa81  PUSH EBX
006efa82  PUSH EBP
006efa83  PUSH EDI
006efa84  CALL dword ptr [EAX + 0x14]
006efa87  MOV ECX,dword ptr [ESI + 0x8]
006efa8a  MOV EDX,dword ptr [ESI]
006efa8c  MOV EBX,dword ptr [ESI + 0x4]
006efa8f  MOV EBP,dword ptr [ESI + 0xc]
006efa92  PUSH 0x10
006efa94  MOV dword ptr [ESP + 0x18],ECX
006efa98  PUSH EDI
006efa99  MOV ECX,ESI
006efa9b  CALL dword ptr [EDX + 0x4]
006efa9e  CMP EBX,EAX
006efaa0  MOV dword ptr [ESI + 0x4],EAX
006efaa3  MOV dword ptr [ESI + 0x8],EDI
006efaa6  JZ 0x006efad4
006efaa8  TEST EBP,EBP
006efaaa  MOV dword ptr [ESI + 0xc],0x0
006efab1  JLE 0x006efac3
006efab3  MOV EDI,EBX
006efab5  PUSH EDI
006efab6  MOV ECX,ESI
006efab8  CALL 0x006f3a90
006efabd  ADD EDI,0x8
006efac0  DEC EBP
006efac1  JNZ 0x006efab5
006efac3  TEST EBX,EBX
006efac5  JZ 0x006efad4
006efac7  MOV ECX,dword ptr [ESP + 0x14]
006efacb  MOV EAX,dword ptr [ESI]
006efacd  PUSH ECX
006eface  PUSH EBX
006efacf  MOV ECX,ESI
006efad1  CALL dword ptr [EAX + 0x8]
006efad4  POP EBP
006efad5  POP EBX
006efad6  POP EDI
006efad7  POP ESI
006efad8  RET 0x4
