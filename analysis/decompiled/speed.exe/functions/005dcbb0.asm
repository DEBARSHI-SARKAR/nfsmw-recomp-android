005dcbb0  MOV EAX,dword ptr [ECX + 0x3c]
005dcbb3  MOV ECX,dword ptr [ECX]
005dcbb5  PUSH ESI
005dcbb6  XOR EDX,EDX
005dcbb8  TEST ECX,ECX
005dcbba  PUSH EDI
005dcbbb  MOV EDI,dword ptr [ESP + 0xc]
005dcbbf  JBE 0x005dcbd3
005dcbc1  MOV ESI,dword ptr [EAX]
005dcbc3  TEST ESI,ESI
005dcbc5  JZ 0x005dcbd3
005dcbc7  CMP ESI,EDI
005dcbc9  JZ 0x005dcbd5
005dcbcb  ADD EAX,0x10
005dcbce  INC EDX
005dcbcf  CMP EDX,ECX
005dcbd1  JC 0x005dcbc1
005dcbd3  MOV dword ptr [EAX],EDI
005dcbd5  MOV ECX,dword ptr [EAX + 0x4]
005dcbd8  AND ECX,0xfffffffd
005dcbdb  POP EDI
005dcbdc  MOV dword ptr [EAX + 0x4],ECX
005dcbdf  POP ESI
005dcbe0  RET 0x4
