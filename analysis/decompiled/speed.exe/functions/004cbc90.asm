004cbc90  PUSH ESI
004cbc91  MOV ESI,ECX
004cbc93  MOV EAX,dword ptr [ESI + 0x4]
004cbc96  TEST EAX,EAX
004cbc98  JZ 0x004cbcb3
004cbc9a  MOV ECX,dword ptr [ESI + 0xc]
004cbc9d  SUB ECX,EAX
004cbc9f  SAR ECX,0x2
004cbca2  PUSH 0x0
004cbca4  SHL ECX,0x2
004cbca7  PUSH ECX
004cbca8  PUSH EAX
004cbca9  MOV ECX,0x925b30
004cbcae  CALL 0x005d0370
004cbcb3  MOV dword ptr [ESI + 0x4],0x0
004cbcba  MOV dword ptr [ESI + 0x8],0x0
004cbcc1  MOV dword ptr [ESI + 0xc],0x0
004cbcc8  POP ESI
004cbcc9  RET
