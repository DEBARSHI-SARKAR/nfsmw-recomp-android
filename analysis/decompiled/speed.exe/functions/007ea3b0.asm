007ea3b0  PUSH EBP
007ea3b1  MOV EBP,ESP
007ea3b3  MOV EDX,dword ptr [ECX]
007ea3b5  MOV EAX,dword ptr [EBP + 0x8]
007ea3b8  SHR EDX,0xa
007ea3bb  AND EDX,0x1
007ea3be  MOV dword ptr [EAX + 0x8],EDX
007ea3c1  MOV EDX,dword ptr [ECX]
007ea3c3  SHR EDX,0xb
007ea3c6  AND EDX,0x1
007ea3c9  MOV dword ptr [EAX + 0xc],EDX
007ea3cc  MOV EDX,dword ptr [ECX]
007ea3ce  SHR EDX,0x9
007ea3d1  AND EDX,0x1
007ea3d4  MOV dword ptr [EAX + 0x10],EDX
007ea3d7  OR dword ptr [EAX + 0x4],0x2
007ea3db  MOV EDX,dword ptr [ECX]
007ea3dd  AND EDX,0xff
007ea3e3  MOV dword ptr [EAX + 0x14],EDX
007ea3e6  MOV EDX,dword ptr [ECX + 0x10]
007ea3e9  MOV dword ptr [EAX + 0x20],EDX
007ea3ec  MOV EDX,dword ptr [ECX + 0x14]
007ea3ef  MOV dword ptr [EAX + 0x24],EDX
007ea3f2  MOV EDX,dword ptr [ECX + 0x18]
007ea3f5  MOV dword ptr [EAX + 0x18],EDX
007ea3f8  MOV EDX,dword ptr [ECX + 0x1c]
007ea3fb  MOV dword ptr [EAX + 0x1c],EDX
007ea3fe  MOV EDX,dword ptr [ECX]
007ea400  SHR EDX,0x1c
007ea403  MOV dword ptr [EAX + 0x28],EDX
007ea406  MOV EDX,dword ptr [ECX]
007ea408  SHR EDX,0x16
007ea40b  AND EDX,0x1
007ea40e  MOV dword ptr [EAX + 0x2c],EDX
007ea411  XOR EDX,EDX
007ea413  MOV DL,byte ptr [ECX + 0x2]
007ea416  AND EDX,0x1
007ea419  MOV dword ptr [EAX + 0x34],EDX
007ea41c  MOV EDX,dword ptr [ECX]
007ea41e  SHR EDX,0x11
007ea421  AND EDX,0x1
007ea424  MOV dword ptr [EAX + 0x38],EDX
007ea427  MOV EDX,dword ptr [ECX]
007ea429  SHR EDX,0x12
007ea42c  AND EDX,0x1
007ea42f  MOV dword ptr [EAX + 0x3c],EDX
007ea432  MOV EDX,dword ptr [ECX]
007ea434  SHR EDX,0x13
007ea437  AND EDX,0x1
007ea43a  MOV dword ptr [EAX + 0x40],EDX
007ea43d  MOV EDX,dword ptr [ECX]
007ea43f  SHR EDX,0x14
007ea442  AND EDX,0x1
007ea445  MOV dword ptr [EAX + 0x44],EDX
007ea448  MOV EDX,dword ptr [ECX]
007ea44a  SHR EDX,0x15
007ea44d  AND EDX,0x1
007ea450  MOV dword ptr [EAX + 0x48],EDX
007ea453  MOV EDX,dword ptr [ECX]
007ea455  SHR EDX,0x17
007ea458  AND EDX,0x1
007ea45b  MOV dword ptr [EAX + 0x4c],EDX
007ea45e  MOVZX ECX,byte ptr [ECX + 0x3]
007ea462  AND ECX,0x1
007ea465  MOV dword ptr [EAX + 0x30],ECX
007ea468  POP EBP
007ea469  RET 0x4
