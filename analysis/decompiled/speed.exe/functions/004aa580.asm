004aa580  PUSH EBP
004aa581  MOV EBP,ESP
004aa583  AND ESP,0xfffffff8
004aa586  SUB ESP,0xc
004aa589  MOV EAX,dword ptr [EBP + 0x8]
004aa58c  PUSH EBX
004aa58d  PUSH ESI
004aa58e  MOV ESI,ECX
004aa590  MOV dword ptr [ESI + 0x3c],EAX
004aa593  MOV EAX,dword ptr [ESI + 0x10]
004aa596  TEST EAX,EAX
004aa598  PUSH EDI
004aa599  JNZ 0x004aa5a2
004aa59b  PUSH 0x0
004aa59d  CALL 0x0049c290
004aa5a2  FLD float ptr [EBP + 0x8]
004aa5a5  PUSH ECX
004aa5a6  FADD float ptr [ESI + 0x40]
004aa5a9  FSTP float ptr [EBP + 0x8]
004aa5ac  FLD float ptr [0x0089096c]
004aa5b2  MOV ECX,dword ptr [EBP + 0x8]
004aa5b5  FDIV float ptr [ESI + 0x38]
004aa5b8  FST float ptr [ESP + 0x18]
004aa5bc  FADD ST0,ST0
004aa5be  FSTP float ptr [ESP]
004aa5c1  PUSH 0x0
004aa5c3  PUSH ECX
004aa5c4  MOV ECX,ESI
004aa5c6  CALL 0x0049c4c0
004aa5cb  FLD float ptr [ESP + 0x14]
004aa5cf  SUB ESP,0x18
004aa5d2  FSTP double ptr [ESP + 0x10]
004aa5d6  MOV EDI,EAX
004aa5d8  FLD float ptr [ESI + 0x40]
004aa5db  FSTP double ptr [ESP + 0x8]
004aa5df  FLD float ptr [EBP + 0x8]
004aa5e2  FSTP double ptr [ESP]
004aa5e5  PUSH 0x8961f8
004aa5ea  CALL 0x007c5e60
004aa5ef  FLD float ptr [ESI + 0x34]
004aa5f2  ADD ESP,0xc
004aa5f5  FSTP double ptr [ESP + 0x8]
004aa5f9  FLD float ptr [ESI + 0x30]
004aa5fc  FSTP double ptr [ESP]
004aa5ff  PUSH 0x8961dc
004aa604  CALL 0x007c5e60
004aa609  FLD float ptr [ESI + 0x2c]
004aa60c  ADD ESP,0x4
004aa60f  FSTP double ptr [ESP + 0x8]
004aa613  FLD float ptr [ESI + 0x28]
004aa616  FSTP double ptr [ESP]
004aa619  PUSH 0x8961c4
004aa61e  CALL 0x007c5e60
004aa623  FLD float ptr [ESI + 0x28]
004aa626  FMUL float ptr [ESI + 0x38]
004aa629  ADD ESP,0x4
004aa62c  FMUL float ptr [EBP + 0x8]
004aa62f  FSTP float ptr [ESP + 0x24]
004aa633  FLD float ptr [ESI + 0x2c]
004aa636  FMUL float ptr [ESI + 0x38]
004aa639  FMUL float ptr [EBP + 0x8]
004aa63c  FST float ptr [ESP + 0x20]
004aa640  FSTP double ptr [ESP + 0x8]
004aa644  FLD float ptr [ESP + 0x24]
004aa648  FSTP double ptr [ESP]
004aa64b  PUSH 0x8961a4
004aa650  CALL 0x007c5e60
004aa655  FLD float ptr [ESI + 0x28]
004aa658  MOV EDX,dword ptr [ESP + 0x28]
004aa65c  FADD ST0,ST0
004aa65e  ADD ESP,0x10
004aa661  MOV ECX,ESI
004aa663  FSTP float ptr [ESP]
004aa666  PUSH 0x0
004aa668  PUSH EDX
004aa669  CALL 0x0049c670
004aa66e  MOV EAX,dword ptr [ESP + 0x10]
004aa672  FSUB float ptr [ESI + 0x30]
004aa675  PUSH ECX
004aa676  MOV ECX,ESI
004aa678  FSTP float ptr [ESP + 0x18]
004aa67c  FLD float ptr [ESI + 0x2c]
004aa67f  FADD ST0,ST0
004aa681  FSTP float ptr [ESP]
004aa684  PUSH 0x0
004aa686  PUSH EAX
004aa687  CALL 0x0049c670
004aa68c  MOV EBX,dword ptr [EBP + 0xc]
004aa68f  MOV EDX,dword ptr [ESP + 0x14]
004aa693  FSUB float ptr [ESI + 0x34]
004aa696  PUSH EBX
004aa697  FSTP float ptr [ESP + 0x14]
004aa69b  MOV ECX,dword ptr [ESP + 0x14]
004aa69f  PUSH ECX
004aa6a0  PUSH EDX
004aa6a1  MOV ECX,ESI
004aa6a3  CALL 0x0049c390
004aa6a8  TEST AL,AL
004aa6aa  JNZ 0x004aa6b5
004aa6ac  POP EDI
004aa6ad  POP ESI
004aa6ae  POP EBX
004aa6af  MOV ESP,EBP
004aa6b1  POP EBP
004aa6b2  RET 0x8
004aa6b5  PUSH EDI
004aa6b6  MOV ECX,ESI
004aa6b8  CALL 0x004a9af0
004aa6bd  PUSH EBX
004aa6be  MOV ECX,ESI
004aa6c0  CALL 0x0049c620
004aa6c5  POP EDI
004aa6c6  POP ESI
004aa6c7  MOV AL,0x1
004aa6c9  POP EBX
004aa6ca  MOV ESP,EBP
004aa6cc  POP EBP
004aa6cd  RET 0x8
