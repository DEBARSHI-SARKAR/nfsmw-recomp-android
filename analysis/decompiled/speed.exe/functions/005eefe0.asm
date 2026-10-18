005eefe0  PUSH ESI
005eefe1  MOV ESI,ECX
005eefe3  MOV EAX,dword ptr [ESI + 0x4]
005eefe6  TEST EAX,EAX
005eefe8  JZ 0x005ef003
005eefea  MOV ECX,dword ptr [ESI + 0xc]
005eefed  SUB ECX,EAX
005eefef  SAR ECX,0x2
005eeff2  PUSH 0x0
005eeff4  SHL ECX,0x2
005eeff7  PUSH ECX
005eeff8  PUSH EAX
005eeff9  MOV ECX,0x925b30
005eeffe  CALL 0x005d0370
005ef003  MOV dword ptr [ESI + 0x4],0x0
005ef00a  MOV dword ptr [ESI + 0x8],0x0
005ef011  MOV dword ptr [ESI + 0xc],0x0
005ef018  POP ESI
005ef019  RET
