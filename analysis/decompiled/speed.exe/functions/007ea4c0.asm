007ea4c0  PUSH EBP
007ea4c1  MOV EBP,ESP
007ea4c3  MOV EDX,dword ptr [ECX]
007ea4c5  MOV EAX,dword ptr [EBP + 0x8]
007ea4c8  SHR EDX,0xa
007ea4cb  AND EDX,0x1
007ea4ce  MOV dword ptr [EAX + 0x8],EDX
007ea4d1  MOV EDX,dword ptr [ECX]
007ea4d3  SHR EDX,0xb
007ea4d6  AND EDX,0x1
007ea4d9  MOV dword ptr [EAX + 0xc],EDX
007ea4dc  MOV EDX,dword ptr [ECX]
007ea4de  SHR EDX,0x9
007ea4e1  AND EDX,0x1
007ea4e4  MOV dword ptr [EAX + 0x10],EDX
007ea4e7  OR dword ptr [EAX + 0x4],0x100
007ea4ee  MOV EDX,dword ptr [ECX + 0x10]
007ea4f1  MOV dword ptr [EAX + 0x64],EDX
007ea4f4  MOV EDX,dword ptr [ECX + 0x14]
007ea4f7  MOV dword ptr [EAX + 0x68],EDX
007ea4fa  MOV EDX,dword ptr [ECX + 0x18]
007ea4fd  MOV dword ptr [EAX + 0x6c],EDX
007ea500  MOV ECX,dword ptr [ECX + 0x1c]
007ea503  MOV dword ptr [EAX + 0x70],ECX
007ea506  POP EBP
007ea507  RET 0x4
