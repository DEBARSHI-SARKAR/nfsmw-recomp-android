004b0fa0  PUSH ESI
004b0fa1  MOV ESI,ECX
004b0fa3  LEA ECX,[ESI + 0x14]
004b0fa6  CALL 0x006539a0
004b0fab  XOR EAX,EAX
004b0fad  MOV ECX,0xbf800000
004b0fb2  MOV dword ptr [ESI],EAX
004b0fb4  MOV dword ptr [ESI + 0x8],EAX
004b0fb7  MOV dword ptr [ESI + 0x4],EAX
004b0fba  MOV dword ptr [ESI + 0xc],EAX
004b0fbd  MOV byte ptr [ESI + 0x3c],AL
004b0fc0  MOV dword ptr [ESI + 0x40],ECX
004b0fc3  MOV dword ptr [ESI + 0x44],ECX
004b0fc6  MOV dword ptr [ESI + 0x48],ECX
004b0fc9  MOV dword ptr [ESI + 0x10],0x3f800000
004b0fd0  MOV EAX,ESI
004b0fd2  POP ESI
004b0fd3  RET
