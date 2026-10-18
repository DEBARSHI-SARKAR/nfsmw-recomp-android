00486610  SUB ESP,0xc
00486613  MOV EAX,dword ptr [ESP + 0x10]
00486617  MOV ECX,dword ptr [EAX]
00486619  MOV EDX,dword ptr [EAX + 0x4]
0048661c  MOV EAX,dword ptr [EAX + 0x8]
0048661f  MOV dword ptr [ESP + 0x8],EAX
00486623  FLD float ptr [ESP + 0x8]
00486627  MOV EAX,dword ptr [ESP + 0x14]
0048662b  FMUL float ptr [EAX + 0x20]
0048662e  MOV dword ptr [ESP + 0x4],EDX
00486632  FLD float ptr [ESP + 0x4]
00486636  MOV dword ptr [ESP],ECX
00486639  FMUL float ptr [EAX + 0x10]
0048663c  MOV ECX,dword ptr [ESP + 0x18]
00486640  FADDP
00486642  FLD float ptr [ESP]
00486645  FMUL float ptr [EAX]
00486647  FADDP
00486649  FADD float ptr [EAX + 0x30]
0048664c  FSTP float ptr [ECX]
0048664e  FLD float ptr [ESP + 0x8]
00486652  FMUL float ptr [EAX + 0x24]
00486655  FLD float ptr [ESP + 0x4]
00486659  FMUL float ptr [EAX + 0x14]
0048665c  FADDP
0048665e  FLD float ptr [ESP]
00486661  FMUL float ptr [EAX + 0x4]
00486664  FADDP
00486666  FADD float ptr [EAX + 0x34]
00486669  FSTP float ptr [ECX + 0x4]
0048666c  FLD float ptr [ESP + 0x8]
00486670  FMUL float ptr [EAX + 0x28]
00486673  FLD float ptr [ESP + 0x4]
00486677  FMUL float ptr [EAX + 0x18]
0048667a  FADDP
0048667c  FLD float ptr [ESP]
0048667f  FMUL float ptr [EAX + 0x8]
00486682  FADDP
00486684  FADD float ptr [EAX + 0x38]
00486687  FSTP float ptr [ECX + 0x8]
0048668a  ADD ESP,0xc
0048668d  RET
