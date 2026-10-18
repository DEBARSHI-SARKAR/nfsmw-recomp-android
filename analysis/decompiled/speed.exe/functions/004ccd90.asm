004ccd90  PUSH ESI
004ccd91  MOV ESI,ECX
004ccd93  MOV EAX,dword ptr [ESI + 0x4]
004ccd96  TEST EAX,EAX
004ccd98  JZ 0x004ccdb3
004ccd9a  MOV ECX,dword ptr [ESI + 0xc]
004ccd9d  SUB ECX,EAX
004ccd9f  SAR ECX,0x2
004ccda2  PUSH 0x0
004ccda4  SHL ECX,0x2
004ccda7  PUSH ECX
004ccda8  PUSH EAX
004ccda9  MOV ECX,0x925b30
004ccdae  CALL 0x005d0370
004ccdb3  MOV dword ptr [ESI + 0x4],0x0
004ccdba  MOV dword ptr [ESI + 0x8],0x0
004ccdc1  MOV dword ptr [ESI + 0xc],0x0
004ccdc8  POP ESI
004ccdc9  RET
