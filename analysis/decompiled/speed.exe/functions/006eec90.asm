006eec90  PUSH EBX
006eec91  PUSH ESI
006eec92  LEA ESI,[ECX + -0x34]
006eec95  MOV ECX,dword ptr [ESI + 0x80]
006eec9b  XOR EBX,EBX
006eec9d  CMP ECX,EBX
006eec9f  JZ 0x006eecc8
006eeca1  DEC dword ptr [ESI + 0x28]
006eeca4  MOV DL,byte ptr [ECX + 0xc]
006eeca7  MOV AL,0x1
006eeca9  CMP DL,AL
006eecab  JZ 0x006eecb5
006eecad  MOV byte ptr [ECX + 0xc],AL
006eecb0  MOV EAX,dword ptr [ECX]
006eecb2  CALL dword ptr [EAX + 0x4]
006eecb5  MOV EDX,dword ptr [ESI]
006eecb7  MOV ECX,ESI
006eecb9  MOV dword ptr [ESI + 0x80],EBX
006eecbf  CALL dword ptr [EDX + 0x18]
006eecc2  MOV byte ptr [ESI + 0x68],BL
006eecc5  MOV dword ptr [ESI + 0x64],EBX
006eecc8  MOV EAX,dword ptr [ESI + 0x5c]
006eeccb  CMP EAX,EBX
006eeccd  JZ 0x006eecdc
006eeccf  MOV EDX,dword ptr [ESI + 0x2c]
006eecd2  LEA ECX,[ESI + 0x2c]
006eecd5  PUSH EAX
006eecd6  CALL dword ptr [EDX + 0x8]
006eecd9  MOV dword ptr [ESI + 0x5c],EBX
006eecdc  POP ESI
006eecdd  POP EBX
006eecde  RET
