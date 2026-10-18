005eeb90  PUSH ESI
005eeb91  MOV ESI,ECX
005eeb93  TEST byte ptr [ESI + 0x4d],0x2
005eeb97  JZ 0x005eeba9
005eeb99  MOV ECX,dword ptr [0x0091e00c]
005eeb9f  PUSH ESI
005eeba0  CALL 0x005ed9c0
005eeba5  AND byte ptr [ESI + 0x4d],0xfd
005eeba9  MOV EAX,dword ptr [ESI + 0x6c]
005eebac  TEST EAX,EAX
005eebae  JZ 0x005eebeb
005eebb0  MOV CL,byte ptr [ESI + 0x4d]
005eebb3  PUSH EDI
005eebb4  NOT CL
005eebb6  XOR EDI,EDI
005eebb8  TEST CL,0x1
005eebbb  JZ 0x005eebcc
005eebbd  MOV ECX,dword ptr [EAX + 0x4]
005eebc0  PUSH 0x402830
005eebc5  CALL 0x005d59f0
005eebca  MOV EDI,EAX
005eebcc  MOV EAX,dword ptr [ESI + 0x6c]
005eebcf  MOV EDX,dword ptr [ESI + 0x28]
005eebd2  LEA ECX,[ESI + 0x28]
005eebd5  PUSH EAX
005eebd6  CALL dword ptr [EDX + 0x8]
005eebd9  TEST EDI,EDI
005eebdb  JZ 0x005eebe4
005eebdd  MOV EDX,dword ptr [EDI]
005eebdf  MOV ECX,EDI
005eebe1  CALL dword ptr [EDX + 0x8]
005eebe4  POP EDI
005eebe5  MOV byte ptr [ESI + 0x4c],0x1
005eebe9  POP ESI
005eebea  RET
005eebeb  MOV byte ptr [ESI + 0x4c],0x1
005eebef  POP ESI
005eebf0  RET
