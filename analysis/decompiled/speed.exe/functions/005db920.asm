005db920  PUSH ECX
005db921  PUSH ESI
005db922  LEA EAX,[ESP + 0x4]
005db926  PUSH EAX
005db927  MOV ESI,ECX
005db929  CALL 0x005db8a0
005db92e  MOV ECX,dword ptr [ESP + 0x8]
005db932  MOV EDX,dword ptr [ESP + 0x10]
005db936  ADD ESP,0x4
005db939  XOR EAX,EAX
005db93b  MOV dword ptr [ESI],ECX
005db93d  MOV ECX,dword ptr [ESP + 0x14]
005db941  MOV dword ptr [ESI + 0x4],EAX
005db944  MOV dword ptr [ESI + 0xc],EAX
005db947  MOV AL,byte ptr [ESP + 0x10]
005db94b  MOV byte ptr [ESI + 0x14],AL
005db94e  MOV dword ptr [ESI + 0x8],0x1c
005db955  MOV dword ptr [ESI + 0x10],EDX
005db958  MOV dword ptr [ESI + 0x18],ECX
005db95b  MOV EAX,ESI
005db95d  POP ESI
005db95e  POP ECX
005db95f  RET 0xc
