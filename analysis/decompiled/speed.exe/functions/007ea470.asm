007ea470  PUSH EBP
007ea471  MOV EBP,ESP
007ea473  MOV EDX,dword ptr [ECX]
007ea475  MOV EAX,dword ptr [EBP + 0x8]
007ea478  SHR EDX,0xa
007ea47b  AND EDX,0x1
007ea47e  MOV dword ptr [EAX + 0x8],EDX
007ea481  MOV EDX,dword ptr [ECX]
007ea483  SHR EDX,0xb
007ea486  AND EDX,0x1
007ea489  MOV dword ptr [EAX + 0xc],EDX
007ea48c  MOV EDX,dword ptr [ECX]
007ea48e  SHR EDX,0x9
007ea491  AND EDX,0x1
007ea494  MOV dword ptr [EAX + 0x10],EDX
007ea497  OR dword ptr [EAX + 0x4],0x4
007ea49b  MOV EDX,dword ptr [ECX]
007ea49d  AND EDX,0xff
007ea4a3  MOV dword ptr [EAX + 0x54],EDX
007ea4a6  MOV EDX,dword ptr [ECX + 0x18]
007ea4a9  MOV dword ptr [EAX + 0x5c],EDX
007ea4ac  MOV ECX,dword ptr [ECX]
007ea4ae  SHR ECX,0x16
007ea4b1  AND ECX,0x1
007ea4b4  MOV dword ptr [EAX + 0x58],ECX
007ea4b7  POP EBP
007ea4b8  RET 0x4
