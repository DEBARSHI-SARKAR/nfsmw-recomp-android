007ea510  PUSH EBP
007ea511  MOV EBP,ESP
007ea513  MOV EDX,dword ptr [ECX]
007ea515  MOV EAX,dword ptr [EBP + 0x8]
007ea518  SHR EDX,0xa
007ea51b  AND EDX,0x1
007ea51e  MOV dword ptr [EAX + 0x8],EDX
007ea521  MOV EDX,dword ptr [ECX]
007ea523  SHR EDX,0xb
007ea526  AND EDX,0x1
007ea529  MOV dword ptr [EAX + 0xc],EDX
007ea52c  MOV EDX,dword ptr [ECX]
007ea52e  SHR EDX,0x9
007ea531  AND EDX,0x1
007ea534  MOV dword ptr [EAX + 0x10],EDX
007ea537  OR dword ptr [EAX + 0x4],0x10
007ea53b  MOV EDX,dword ptr [ECX + 0x10]
007ea53e  MOV dword ptr [EAX + 0x74],EDX
007ea541  MOV EDX,dword ptr [ECX + 0x14]
007ea544  MOV dword ptr [EAX + 0x78],EDX
007ea547  MOV EDX,dword ptr [ECX + 0x18]
007ea54a  MOV dword ptr [EAX + 0x7c],EDX
007ea54d  MOV ECX,dword ptr [ECX + 0x1c]
007ea550  MOV dword ptr [EAX + 0x80],ECX
007ea556  POP EBP
007ea557  RET 0x4
