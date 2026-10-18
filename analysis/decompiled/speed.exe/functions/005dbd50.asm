005dbd50  MOV ECX,dword ptr [0x0091e000]
005dbd56  TEST ECX,ECX
005dbd58  JZ 0x005dbd60
005dbd5a  MOV EAX,dword ptr [ECX]
005dbd5c  PUSH 0x1
005dbd5e  CALL dword ptr [EAX]
005dbd60  MOV dword ptr [0x0091e000],0x0
005dbd6a  RET
