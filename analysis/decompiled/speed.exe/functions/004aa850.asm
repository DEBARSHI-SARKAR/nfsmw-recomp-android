004aa850  SUB ESP,0x8
004aa853  MOV EAX,dword ptr [ESP + 0x10]
004aa857  FLD float ptr [EAX]
004aa859  MOV ECX,dword ptr [ESP + 0x14]
004aa85d  FADD float ptr [ECX]
004aa85f  FSTP float ptr [ESP]
004aa862  FLD float ptr [EAX + 0x4]
004aa865  MOV EAX,dword ptr [ESP + 0xc]
004aa869  FADD float ptr [ECX + 0x4]
004aa86c  MOV ECX,dword ptr [ESP]
004aa86f  MOV dword ptr [EAX],ECX
004aa871  FSTP float ptr [ESP + 0x4]
004aa875  MOV EDX,dword ptr [ESP + 0x4]
004aa879  MOV dword ptr [EAX + 0x4],EDX
004aa87c  ADD ESP,0x8
004aa87f  RET
