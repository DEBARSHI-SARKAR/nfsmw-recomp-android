004cbaa0  PUSH ECX
004cbaa1  PUSH ESI
004cbaa2  MOV ESI,dword ptr [ESP + 0x10]
004cbaa6  PUSH EDI
004cbaa7  MOV EDI,dword ptr [ESP + 0x10]
004cbaab  MOV byte ptr [ESP + 0x8],0x0
004cbab0  MOV EAX,dword ptr [ESP + 0x8]
004cbab4  PUSH EAX
004cbab5  PUSH ECX
004cbab6  MOV ECX,dword ptr [ESP + 0x20]
004cbaba  PUSH ECX
004cbabb  PUSH ESI
004cbabc  PUSH EDI
004cbabd  CALL 0x004c1a10
004cbac2  ADD ESP,0x14
004cbac5  LEA EAX,[EDI + ESI*0x4]
004cbac8  POP EDI
004cbac9  POP ESI
004cbaca  POP ECX
004cbacb  RET 0xc
