007cbb80  PUSH EBP
007cbb81  MOV EBP,ESP
007cbb83  SUB ESP,0x10
007cbb86  FSTCW word ptr [EBP + -0x4]
007cbb8a  MOV AX,word ptr [EBP + -0x4]
007cbb8e  PUSH EAX
007cbb8f  CALL 0x007cbc40
007cbb94  ADD ESP,0x4
007cbb97  MOV dword ptr [EBP + -0xc],EAX
007cbb9a  MOV ECX,dword ptr [EBP + 0x8]
007cbb9d  AND ECX,dword ptr [EBP + 0xc]
007cbba0  MOV EDX,dword ptr [EBP + 0xc]
007cbba3  NOT EDX
007cbba5  AND EDX,dword ptr [EBP + -0xc]
007cbba8  OR ECX,EDX
007cbbaa  MOV dword ptr [EBP + -0x10],ECX
007cbbad  MOV EAX,dword ptr [EBP + -0x10]
007cbbb0  PUSH EAX
007cbbb1  CALL 0x007cbd90
007cbbb6  ADD ESP,0x4
007cbbb9  MOV word ptr [EBP + -0x8],AX
007cbbbd  FLDCW word ptr [EBP + -0x8]
007cbbc0  MOV EAX,dword ptr [EBP + -0x10]
007cbbc3  MOV ESP,EBP
007cbbc5  POP EBP
007cbbc6  RET
