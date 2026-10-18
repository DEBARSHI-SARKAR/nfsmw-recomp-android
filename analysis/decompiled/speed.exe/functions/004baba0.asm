004baba0  SUB ESP,0xc
004baba3  PUSH ESI
004baba4  MOV ESI,ECX
004baba6  CALL 0x0081bccb
004babab  MOV ECX,dword ptr [ESI + 0x14]
004babae  LEA EAX,[ESP + 0x4]
004babb2  PUSH EAX
004babb3  PUSH ECX
004babb4  CALL 0x0081ccaa
004babb9  ADD ESP,0x8
004babbc  CALL 0x0081bcd9
004babc1  MOV EAX,dword ptr [ESP + 0x4]
004babc5  POP ESI
004babc6  ADD ESP,0xc
004babc9  RET
