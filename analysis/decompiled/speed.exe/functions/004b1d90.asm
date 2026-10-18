004b1d90  MOV DL,byte ptr [ESP + 0x8]
004b1d94  CMP DL,0xff
004b1d97  MOV EAX,dword ptr [ESP + 0x4]
004b1d9b  MOV byte ptr [EAX + 0x18],0x1
004b1d9f  JZ 0x004b1dab
004b1da1  MOVZX EDX,DL
004b1da4  MOV dword ptr [ECX + EDX*0x4 + 0x1c],EAX
004b1da8  RET 0x8
004b1dab  MOVZX EDX,byte ptr [ECX + 0x3a]
004b1daf  MOV dword ptr [ECX + EDX*0x4 + 0x1c],EAX
004b1db3  INC byte ptr [ECX + 0x3a]
004b1db6  RET 0x8
