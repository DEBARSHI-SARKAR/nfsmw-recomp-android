004ccb70  PUSH ESI
004ccb71  MOV ESI,ECX
004ccb73  MOV EAX,dword ptr [ESI + 0x4]
004ccb76  TEST EAX,EAX
004ccb78  JZ 0x004ccb96
004ccb7a  MOV ECX,dword ptr [ESI + 0xc]
004ccb7d  SUB ECX,EAX
004ccb7f  SAR ECX,0x2
004ccb82  PUSH 0x890f10
004ccb87  SHL ECX,0x2
004ccb8a  PUSH ECX
004ccb8b  PUSH EAX
004ccb8c  MOV ECX,0x925b30
004ccb91  CALL 0x005d0370
004ccb96  MOV dword ptr [ESI + 0x4],0x0
004ccb9d  MOV dword ptr [ESI + 0x8],0x0
004ccba4  MOV dword ptr [ESI + 0xc],0x0
004ccbab  POP ESI
004ccbac  RET
