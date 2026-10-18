006c8510  SUB ESP,0x18
006c8513  FLD float ptr [ECX + 0xc]
006c8516  MOV EAX,dword ptr [ESP + 0x1c]
006c851a  FADD float ptr [ECX]
006c851c  FLD float ptr [ECX + 0x10]
006c851f  FADD float ptr [ECX + 0x4]
006c8522  FLD float ptr [ECX + 0x14]
006c8525  FADD float ptr [ECX + 0x8]
006c8528  FSTP float ptr [ESP + 0x14]
006c852c  FXCH
006c852e  FMUL float ptr [0x008933d4]
006c8534  FSTP float ptr [ESP]
006c8537  MOV ECX,dword ptr [ESP]
006c853a  MOV dword ptr [EAX],ECX
006c853c  FMUL float ptr [0x008933d4]
006c8542  FSTP float ptr [ESP + 0x4]
006c8546  MOV EDX,dword ptr [ESP + 0x4]
006c854a  FLD float ptr [ESP + 0x14]
006c854e  MOV dword ptr [EAX + 0x4],EDX
006c8551  FMUL float ptr [0x008933d4]
006c8557  FSTP float ptr [ESP + 0x8]
006c855b  MOV ECX,dword ptr [ESP + 0x8]
006c855f  MOV dword ptr [EAX + 0x8],ECX
006c8562  ADD ESP,0x18
006c8565  RET 0x4
