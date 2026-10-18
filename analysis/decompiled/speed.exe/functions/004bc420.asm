004bc420  PUSH EBP
004bc421  MOV EBP,ESP
004bc423  AND ESP,0xfffffff0
004bc426  SUB ESP,0x74
004bc429  PUSH EBX
004bc42a  PUSH ESI
004bc42b  MOV ESI,ECX
004bc42d  MOV EAX,dword ptr [ESI + 0x18]
004bc430  MOV ECX,dword ptr [EAX + 0xd8]
004bc436  MOVZX EDX,word ptr [ECX + 0xa0]
004bc43d  MOV EAX,dword ptr [ESI + 0xc]
004bc440  MOV dword ptr [EAX + 0x8],EDX
004bc443  MOV EAX,dword ptr [ESI + 0x14]
004bc446  MOV EAX,dword ptr [EAX + 0x34]
004bc449  MOV ECX,dword ptr [ESI + 0x34]
004bc44c  MOV EDX,dword ptr [ECX]
004bc44e  PUSH EDI
004bc44f  ADD EAX,0x10
004bc452  PUSH EAX
004bc453  CALL dword ptr [EDX + 0x3c]
004bc456  MOV ECX,dword ptr [ESI + 0x14]
004bc459  MOV EAX,dword ptr [ECX + 0x34]
004bc45c  MOV EDX,dword ptr [EAX + 0x40]
004bc45f  FLD float ptr [EAX + 0x44]
004bc462  ADD EAX,0x40
004bc465  FLD float ptr [EAX + 0x8]
004bc468  MOV dword ptr [ESI + 0x40],EDX
004bc46b  FXCH
004bc46d  LEA EDX,[ESP + 0x10]
004bc471  FSTP float ptr [ESI + 0x44]
004bc474  PUSH EDX
004bc475  FSTP float ptr [ESI + 0x48]
004bc478  MOV EAX,dword ptr [ESI + 0x14]
004bc47b  MOV EAX,dword ptr [EAX + 0x34]
004bc47e  FLD float ptr [EAX + 0x14]
004bc481  MOV ECX,dword ptr [EAX + 0x10]
004bc484  FLD float ptr [EAX + 0x18]
004bc487  ADD EAX,0x10
004bc48a  FXCH
004bc48c  LEA EAX,[ESP + 0x24]
004bc490  FSTP float ptr [ESP + 0x18]
004bc494  PUSH EAX
004bc495  MOV dword ptr [ESP + 0x18],ECX
004bc499  FSTP float ptr [ESP + 0x20]
004bc49d  CALL 0x0045f490
004bc4a2  MOV ECX,dword ptr [ESP + 0x28]
004bc4a6  FLD float ptr [ESP + 0x28]
004bc4aa  MOV EAX,dword ptr [ESP + 0x30]
004bc4ae  MOV EDX,dword ptr [ESP + 0x2c]
004bc4b2  MOV dword ptr [ESP + 0x18],ECX
004bc4b6  MOV ECX,dword ptr [ESI + 0x18]
004bc4b9  MOV dword ptr [ESP + 0x1c],EDX
004bc4bd  MOV dword ptr [ESP + 0x20],EAX
004bc4c1  MOV EAX,dword ptr [ECX + 0xc4]
004bc4c7  MOV EBX,0x1
004bc4cc  ADD ESP,0x8
004bc4cf  CMP EAX,EBX
004bc4d1  JZ 0x004bc4fb
004bc4d3  FMUL float ptr [0x00895074]
004bc4d9  FLD float ptr [ESP + 0x24]
004bc4dd  FMUL float ptr [0x00895074]
004bc4e3  FLD float ptr [ESP + 0x28]
004bc4e7  FMUL float ptr [0x00895074]
004bc4ed  FSTP float ptr [ESP + 0x28]
004bc4f1  MOV EDX,dword ptr [ESP + 0x28]
004bc4f5  MOV dword ptr [ESP + 0x18],EDX
004bc4f9  JMP 0x004bc515
004bc4fb  FADD ST0,ST0
004bc4fd  FLD float ptr [ESP + 0x24]
004bc501  FADD ST0,ST0
004bc503  FLD float ptr [ESP + 0x28]
004bc507  FADD ST0,ST0
004bc509  FSTP float ptr [ESP + 0x28]
004bc50d  MOV EAX,dword ptr [ESP + 0x28]
004bc511  MOV dword ptr [ESP + 0x18],EAX
004bc515  FXCH
004bc517  FSTP float ptr [ESP + 0x10]
004bc51b  FSTP float ptr [ESP + 0x14]
004bc51f  FLD float ptr [ESP + 0x10]
004bc523  FADD float ptr [ESI + 0x40]
004bc526  FLD float ptr [ESP + 0x14]
004bc52a  FADD float ptr [ESI + 0x44]
004bc52d  FLD float ptr [ESP + 0x18]
004bc531  FADD float ptr [ESI + 0x48]
004bc534  FSTP float ptr [ESP + 0x28]
004bc538  MOV ECX,dword ptr [ESP + 0x28]
004bc53c  FXCH
004bc53e  MOV dword ptr [ESI + 0x48],ECX
004bc541  FSTP float ptr [ESI + 0x40]
004bc544  FSTP float ptr [ESI + 0x44]
004bc547  MOV EDX,dword ptr [ESI + 0x14]
004bc54a  MOV EAX,dword ptr [EDX + 0x34]
004bc54d  MOV ECX,dword ptr [EAX + 0x228]
004bc553  TEST ECX,ECX
004bc555  JZ 0x004bc55b
004bc557  XOR AL,AL
004bc559  JMP 0x004bc586
004bc55b  MOV ECX,dword ptr [ESI + 0x2c]
004bc55e  MOV EAX,dword ptr [ECX + 0x84]
004bc564  TEST EAX,EAX
004bc566  JZ 0x004bc56c
004bc568  XOR AL,AL
004bc56a  JMP 0x004bc586
004bc56c  MOV EDX,dword ptr [ESI]
004bc56e  MOV ECX,ESI
004bc570  CALL dword ptr [EDX + 0x44]
004bc573  FCOMP float ptr [0x00896440]
004bc579  FNSTSW AX
004bc57b  TEST AH,0x41
004bc57e  JNZ 0x004bc584
004bc580  XOR AL,AL
004bc582  JMP 0x004bc586
004bc584  MOV AL,BL
004bc586  MOV EDI,dword ptr [EBP + 0x8]
004bc589  MOV byte ptr [ESI + 0x138],AL
004bc58f  MOV EAX,dword ptr [ESI]
004bc591  PUSH EDI
004bc592  MOV ECX,ESI
004bc594  CALL dword ptr [EAX + 0x54]
004bc597  PUSH EDI
004bc598  MOV ECX,ESI
004bc59a  CALL 0x004b3f90
004bc59f  MOV EDX,dword ptr [ESI]
004bc5a1  PUSH EDI
004bc5a2  MOV ECX,ESI
004bc5a4  CALL dword ptr [EDX + 0x34]
004bc5a7  MOV EAX,dword ptr [ESI]
004bc5a9  PUSH EDI
004bc5aa  MOV ECX,ESI
004bc5ac  CALL dword ptr [EAX + 0x38]
004bc5af  MOV EDX,dword ptr [ESI]
004bc5b1  PUSH EDI
004bc5b2  MOV ECX,ESI
004bc5b4  CALL dword ptr [EDX + 0x3c]
004bc5b7  MOV ECX,ESI
004bc5b9  CALL 0x004b3ed0
004bc5be  MOV EAX,dword ptr [ESI]
004bc5c0  PUSH EDI
004bc5c1  MOV ECX,ESI
004bc5c3  CALL dword ptr [EAX + 0x40]
004bc5c6  MOV EDX,dword ptr [ESI + 0x14]
004bc5c9  MOV ECX,dword ptr [ESI + 0x18]
004bc5cc  MOV EAX,dword ptr [EDX + 0x34]
004bc5cf  MOV ECX,dword ptr [ECX + 0x74]
004bc5d2  MOV dword ptr [EAX + 0x248],ECX
004bc5d8  MOV EAX,dword ptr [ESI + 0x14]
004bc5db  MOV EDX,dword ptr [EAX + 0x34]
004bc5de  MOV ECX,dword ptr [EDX + 0x1e8]
004bc5e4  CMP ECX,EBX
004bc5e6  JZ 0x004bc5f1
004bc5e8  CMP ECX,0x2
004bc5eb  JNZ 0x004bc691
004bc5f1  MOV CL,byte ptr [ESI + 0x130]
004bc5f7  TEST CL,CL
004bc5f9  JNZ 0x004bc691
004bc5ff  MOV byte ptr [ESI + 0x130],BL
004bc605  MOV EAX,dword ptr [EAX + 0x34]
004bc608  MOV EAX,dword ptr [EAX + 0x1e8]
004bc60e  CMP EAX,EBX
004bc610  MOV ESI,0xbc2dfa2f
004bc615  JZ 0x004bc61b
004bc617  MOV ESI,dword ptr [ESP + 0xc]
004bc61b  CMP EAX,0x2
004bc61e  JNZ 0x004bc625
004bc620  MOV ESI,0xbae41d1b
004bc625  PUSH 0x894b20
004bc62a  CALL 0x005cc240
004bc62f  MOV ECX,dword ptr [0x008a2fc4]
004bc635  MOV EDX,dword ptr [0x008a2fc8]
004bc63b  ADD ESP,0x4
004bc63e  PUSH ESI
004bc63f  MOV ESI,dword ptr [0x008a2fcc]
004bc645  PUSH 0x0
004bc647  SUB ESP,0x10
004bc64a  MOV EBX,ESP
004bc64c  MOV EDI,EAX
004bc64e  MOV EAX,[0x008a2fc0]
004bc653  MOV dword ptr [EBX],EAX
004bc655  MOV dword ptr [EBX + 0x4],ECX
004bc658  MOV dword ptr [EBX + 0x8],EDX
004bc65b  MOV dword ptr [EBX + 0xc],ESI
004bc65e  SUB ESP,0x10
004bc661  MOV EBX,ESP
004bc663  MOV dword ptr [EBX],EAX
004bc665  MOV dword ptr [EBX + 0x4],ECX
004bc668  MOV dword ptr [EBX + 0x8],EDX
004bc66b  MOV dword ptr [EBX + 0xc],ESI
004bc66e  SUB ESP,0x10
004bc671  MOV EBX,ESP
004bc673  MOV dword ptr [EBX],EAX
004bc675  MOV dword ptr [EBX + 0x4],ECX
004bc678  MOV dword ptr [EBX + 0x8],EDX
004bc67b  LEA ECX,[ESP + 0x70]
004bc67f  MOV dword ptr [EBX + 0xc],ESI
004bc682  CALL 0x00469b90
004bc687  MOV ECX,EAX
004bc689  MOV dword ptr [EAX + 0x4],EDI
004bc68c  CALL 0x0065faf0
004bc691  POP EDI
004bc692  POP ESI
004bc693  POP EBX
004bc694  MOV ESP,EBP
004bc696  POP EBP
004bc697  RET 0x4
