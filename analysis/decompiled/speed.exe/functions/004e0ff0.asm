004e0ff0  SUB ESP,0x8
004e0ff3  FLD float ptr [ESP + 0xc]
004e0ff7  FIST dword ptr [ESP]
004e0ffa  FISUBR dword ptr [ESP]
004e0ffd  FSTP float ptr [ESP + 0x4]
004e1001  MOV EAX,dword ptr [ESP + 0x4]
004e1005  MOV ECX,dword ptr [ESP]
004e1008  SAR EAX,0x1f
004e100b  SUB ECX,EAX
004e100d  MOV EAX,ECX
004e100f  ADD ESP,0x8
004e1012  RET
