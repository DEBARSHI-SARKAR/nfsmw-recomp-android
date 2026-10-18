005ad0f0  SUB ESP,0x10
005ad0f3  MOV EAX,dword ptr [ESP + 0x18]
005ad0f7  FLD float ptr [ECX + 0x4]
005ad0fa  FMUL float ptr [EAX + 0x8]
005ad0fd  FLD float ptr [EAX + 0x4]
005ad100  FMUL float ptr [ECX + 0x8]
005ad103  FSUBP
005ad105  FLD float ptr [EAX]
005ad107  FMUL float ptr [ECX + 0x8]
005ad10a  FLD float ptr [ECX]
005ad10c  FMUL float ptr [EAX + 0x8]
005ad10f  FSUBP
005ad111  FLD float ptr [EAX + 0x4]
005ad114  FMUL float ptr [ECX]
005ad116  FLD float ptr [ECX + 0x4]
005ad119  FMUL float ptr [EAX]
005ad11b  FSUBP
005ad11d  FSTP float ptr [ESP + 0x8]
005ad121  FLD float ptr [ECX + 0xc]
005ad124  FMUL float ptr [EAX]
005ad126  FLD float ptr [EAX + 0xc]
005ad129  FMUL float ptr [ECX]
005ad12b  FADDP
005ad12d  FADD ST0,ST2
005ad12f  FSTP float ptr [ESP]
005ad132  MOV EDX,dword ptr [ESP]
005ad135  FLD float ptr [EAX + 0xc]
005ad138  FMUL float ptr [ECX + 0x4]
005ad13b  FLD float ptr [EAX + 0x4]
005ad13e  FMUL float ptr [ECX + 0xc]
005ad141  FADDP
005ad143  FADD ST0,ST1
005ad145  FSTP float ptr [ESP + 0x4]
005ad149  FSTP ST0
005ad14b  FSTP ST0
005ad14d  FLD float ptr [ECX + 0xc]
005ad150  FMUL float ptr [EAX + 0x8]
005ad153  FLD float ptr [EAX + 0xc]
005ad156  FMUL float ptr [ECX + 0x8]
005ad159  FADDP
005ad15b  FADD float ptr [ESP + 0x8]
005ad15f  FSTP float ptr [ESP + 0x8]
005ad163  FLD float ptr [EAX + 0xc]
005ad166  FMUL float ptr [ECX + 0xc]
005ad169  FLD float ptr [EAX]
005ad16b  FMUL float ptr [ECX]
005ad16d  FLD float ptr [EAX + 0x4]
005ad170  FMUL float ptr [ECX + 0x4]
005ad173  FADDP
005ad175  FLD float ptr [EAX + 0x8]
005ad178  MOV EAX,dword ptr [ESP + 0x14]
005ad17c  FMUL float ptr [ECX + 0x8]
005ad17f  MOV ECX,EAX
005ad181  MOV dword ptr [ECX],EDX
005ad183  MOV EDX,dword ptr [ESP + 0x4]
005ad187  FADDP
005ad189  MOV dword ptr [ECX + 0x4],EDX
005ad18c  MOV EDX,dword ptr [ESP + 0x8]
005ad190  MOV dword ptr [ECX + 0x8],EDX
005ad193  FSUBP
005ad195  FSTP float ptr [ESP + 0xc]
005ad199  MOV EDX,dword ptr [ESP + 0xc]
005ad19d  MOV dword ptr [ECX + 0xc],EDX
005ad1a0  ADD ESP,0x10
005ad1a3  RET 0x8
