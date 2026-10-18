004fe4a0  MOV EAX,[0x00916060]
004fe4a5  MOV EDX,dword ptr [EAX + 0x14]
004fe4a8  MOV ECX,0xfffffffe
004fe4ad  AND EDX,ECX
004fe4af  MOV dword ptr [EAX + 0x14],EDX
004fe4b2  MOV EAX,[0x00916064]
004fe4b7  AND dword ptr [EAX + 0x14],ECX
004fe4ba  MOV EAX,[0x00916068]
004fe4bf  AND dword ptr [EAX + 0x14],ECX
004fe4c2  MOV EAX,[0x00916060]
004fe4c7  MOV EDX,dword ptr [EAX + 0x14]
004fe4ca  MOV ECX,0x4
004fe4cf  OR EDX,ECX
004fe4d1  MOV dword ptr [EAX + 0x14],EDX
004fe4d4  MOV EAX,[0x00916064]
004fe4d9  OR dword ptr [EAX + 0x14],ECX
004fe4dc  MOV EAX,[0x00916068]
004fe4e1  OR dword ptr [EAX + 0x14],ECX
004fe4e4  MOV ECX,dword ptr [0x00916068]
004fe4ea  MOV EAX,dword ptr [ECX + 0x2c]
004fe4ed  CMP EAX,dword ptr [ECX + 0x24]
004fe4f0  JZ 0x004fe4f7
004fe4f2  CALL 0x00465900
004fe4f7  MOV ECX,dword ptr [0x00916064]
004fe4fd  MOV EDX,dword ptr [ECX + 0x2c]
004fe500  CMP EDX,dword ptr [ECX + 0x24]
004fe503  JZ 0x004fe50a
004fe505  CALL 0x00465900
004fe50a  MOV ECX,dword ptr [0x00916060]
004fe510  MOV EAX,dword ptr [ECX + 0x2c]
004fe513  CMP EAX,dword ptr [ECX + 0x24]
004fe516  JZ 0x004fe51d
004fe518  JMP 0x00465900
004fe51d  RET
