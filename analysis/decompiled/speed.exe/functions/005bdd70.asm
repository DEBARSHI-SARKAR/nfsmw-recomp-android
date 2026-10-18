005bdd70  PUSH ESI
005bdd71  MOV ESI,ECX
005bdd73  CALL 0x005bc050
005bdd78  MOV dword ptr [ESI],0x8a2e24
005bdd7e  XOR EAX,EAX
005bdd80  MOV dword ptr [ESI + 0x64],EAX
005bdd83  MOV dword ptr [ESI + 0x68],EAX
005bdd86  MOV dword ptr [ESI + 0x60],EAX
005bdd89  MOV dword ptr [ESI + 0x5c],0x8a2c18
005bdd90  MOV dword ptr [ESI + 0x18],0x5
005bdd97  MOV EAX,ESI
005bdd99  POP ESI
005bdd9a  RET
