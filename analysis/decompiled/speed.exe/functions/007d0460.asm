007d0460  PUSH EBP
007d0461  MOV EBP,ESP
007d0463  PUSH ECX
007d0464  MOV EAX,dword ptr [EBP + 0xc]
007d0467  MOV ECX,dword ptr [EBP + 0x8]
007d046a  ADD ECX,dword ptr [EAX]
007d046c  MOV dword ptr [EBP + -0x4],ECX
007d046f  MOV EDX,dword ptr [EBP + 0xc]
007d0472  CMP dword ptr [EDX + 0x4],0x0
007d0476  JL 0x007d049f
007d0478  MOV EAX,dword ptr [EBP + 0xc]
007d047b  MOV ECX,dword ptr [EAX + 0x4]
007d047e  MOV EDX,dword ptr [EBP + 0x8]
007d0481  MOV EAX,dword ptr [EDX + ECX*0x1]
007d0484  MOV ECX,dword ptr [EBP + 0xc]
007d0487  MOV EDX,dword ptr [ECX + 0x8]
007d048a  MOV ECX,dword ptr [EBP + -0x4]
007d048d  ADD ECX,dword ptr [EAX + EDX*0x1]
007d0490  MOV dword ptr [EBP + -0x4],ECX
007d0493  MOV EDX,dword ptr [EBP + 0xc]
007d0496  MOV EAX,dword ptr [EBP + -0x4]
007d0499  ADD EAX,dword ptr [EDX + 0x4]
007d049c  MOV dword ptr [EBP + -0x4],EAX
007d049f  MOV EAX,dword ptr [EBP + -0x4]
007d04a2  MOV ESP,EBP
007d04a4  POP EBP
007d04a5  RET
