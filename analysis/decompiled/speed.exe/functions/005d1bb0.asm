005d1bb0  MOV ECX,dword ptr [ESP + 0x8]
005d1bb4  PUSH EBX
005d1bb5  MOV EBX,dword ptr [ESP + 0x14]
005d1bb9  LEA EAX,[ECX + -0x1]
005d1bbc  CDQ
005d1bbd  PUSH ESI
005d1bbe  MOV ESI,dword ptr [ESP + 0xc]
005d1bc2  SUB EAX,EDX
005d1bc4  PUSH EDI
005d1bc5  MOV EDI,dword ptr [ESP + 0x18]
005d1bc9  SAR EAX,0x1
005d1bcb  CMP EDI,ECX
005d1bcd  JGE 0x005d1bee
005d1bcf  NOP
005d1bd0  MOV EDX,dword ptr [ESI + EAX*0x8]
005d1bd3  CMP EDX,EBX
005d1bd5  JNC 0x005d1bee
005d1bd7  MOV dword ptr [ESI + ECX*0x8],EDX
005d1bda  MOV EDX,dword ptr [ESI + EAX*0x8 + 0x4]
005d1bde  MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
005d1be2  MOV ECX,EAX
005d1be4  DEC EAX
005d1be5  CDQ
005d1be6  SUB EAX,EDX
005d1be8  SAR EAX,0x1
005d1bea  CMP EDI,ECX
005d1bec  JL 0x005d1bd0
005d1bee  MOV EAX,dword ptr [ESP + 0x20]
005d1bf2  POP EDI
005d1bf3  MOV dword ptr [ESI + ECX*0x8],EBX
005d1bf6  MOV dword ptr [ESI + ECX*0x8 + 0x4],EAX
005d1bfa  POP ESI
005d1bfb  POP EBX
005d1bfc  RET
