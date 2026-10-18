007ea560  PUSH EBP
007ea561  MOV EBP,ESP
007ea563  MOV EDX,dword ptr [ECX]
007ea565  MOV EAX,dword ptr [EBP + 0x8]
007ea568  SHR EDX,0xa
007ea56b  AND EDX,0x1
007ea56e  MOV dword ptr [EAX + 0x8],EDX
007ea571  MOV EDX,dword ptr [ECX]
007ea573  SHR EDX,0xb
007ea576  AND EDX,0x1
007ea579  MOV dword ptr [EAX + 0xc],EDX
007ea57c  MOV EDX,dword ptr [ECX]
007ea57e  SHR EDX,0x9
007ea581  AND EDX,0x1
007ea584  MOV dword ptr [EAX + 0x10],EDX
007ea587  OR dword ptr [EAX + 0x4],0x80
007ea58e  MOV ECX,dword ptr [ECX + 0xc]
007ea591  MOV dword ptr [EAX + 0x84],ECX
007ea597  POP EBP
007ea598  RET 0x4
