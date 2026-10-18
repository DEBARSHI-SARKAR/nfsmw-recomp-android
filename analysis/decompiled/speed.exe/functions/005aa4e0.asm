005aa4e0  MOV EAX,FS:[0x0]
005aa4e6  PUSH -0x1
005aa4e8  PUSH 0x873ce8
005aa4ed  PUSH EAX
005aa4ee  MOV dword ptr FS:[0x0],ESP
005aa4f5  SUB ESP,0x44
005aa4f8  PUSH ESI
005aa4f9  PUSH EDI
005aa4fa  MOV EDI,ECX
005aa4fc  CMP dword ptr [EDI + 0x8],0x1ffffffe
005aa503  JC 0x005aa551
005aa505  PUSH 0x13
005aa507  XOR ESI,ESI
005aa509  PUSH 0x892b50
005aa50e  LEA ECX,[ESP + 0x10]
005aa512  MOV dword ptr [ESP + 0x28],0xf
005aa51a  MOV dword ptr [ESP + 0x24],ESI
005aa51e  MOV byte ptr [ESP + 0x14],0x0
005aa523  CALL 0x004303b0
005aa528  LEA EAX,[ESP + 0x8]
005aa52c  PUSH EAX
005aa52d  LEA ECX,[ESP + 0x28]
005aa531  MOV dword ptr [ESP + 0x58],ESI
005aa535  CALL 0x00432d50
005aa53a  PUSH 0x8c9ca8
005aa53f  LEA ECX,[ESP + 0x28]
005aa543  PUSH ECX
005aa544  MOV dword ptr [ESP + 0x2c],0x8bf290
005aa54c  CALL 0x007c56b0
005aa551  MOV EDX,dword ptr [ESP + 0x68]
005aa555  MOV EAX,dword ptr [EDI + 0x4]
005aa558  MOV ESI,dword ptr [ESP + 0x64]
005aa55c  PUSH EBX
005aa55d  PUSH 0x0
005aa55f  PUSH EDX
005aa560  PUSH EAX
005aa561  PUSH ESI
005aa562  PUSH EAX
005aa563  MOV ECX,EDI
005aa565  CALL 0x0058b2f0
005aa56a  MOV EBX,dword ptr [EDI + 0x8]
005aa56d  MOV ECX,EAX
005aa56f  MOV EAX,dword ptr [EDI + 0x4]
005aa572  INC EBX
005aa573  CMP ESI,EAX
005aa575  MOV dword ptr [ESP + 0x6c],ECX
005aa579  MOV dword ptr [EDI + 0x8],EBX
005aa57c  JNZ 0x005aa58e
005aa57e  MOV dword ptr [EAX + 0x4],ECX
005aa581  MOV EAX,dword ptr [EDI + 0x4]
005aa584  MOV dword ptr [EAX],ECX
005aa586  MOV EDX,dword ptr [EDI + 0x4]
005aa589  MOV dword ptr [EDX + 0x8],ECX
005aa58c  JMP 0x005aa5b1
005aa58e  MOV AL,byte ptr [ESP + 0x64]
005aa592  TEST AL,AL
005aa594  JZ 0x005aa5a3
005aa596  MOV dword ptr [ESI],ECX
005aa598  MOV EAX,dword ptr [EDI + 0x4]
005aa59b  CMP ESI,dword ptr [EAX]
005aa59d  JNZ 0x005aa5b1
005aa59f  MOV dword ptr [EAX],ECX
005aa5a1  JMP 0x005aa5b1
005aa5a3  MOV dword ptr [ESI + 0x8],ECX
005aa5a6  MOV EAX,dword ptr [EDI + 0x4]
005aa5a9  CMP ESI,dword ptr [EAX + 0x8]
005aa5ac  JNZ 0x005aa5b1
005aa5ae  MOV dword ptr [EAX + 0x8],ECX
005aa5b1  MOV EDX,dword ptr [ECX + 0x4]
005aa5b4  CMP byte ptr [EDX + 0x14],0x0
005aa5b8  LEA EAX,[ECX + 0x4]
005aa5bb  MOV ESI,ECX
005aa5bd  MOV BL,0x1
005aa5bf  JNZ 0x005aa66a
005aa5c5  PUSH EBP
005aa5c6  MOV ECX,dword ptr [EAX]
005aa5c8  MOV EBP,dword ptr [ECX + 0x4]
005aa5cb  MOV EDX,dword ptr [EBP]
005aa5ce  CMP ECX,EDX
005aa5d0  JNZ 0x005aa622
005aa5d2  MOV EDX,dword ptr [EBP + 0x8]
005aa5d5  CMP byte ptr [EDX + 0x14],0x0
005aa5d9  JNZ 0x005aa5f3
005aa5db  MOV ECX,dword ptr [EAX]
005aa5dd  MOV byte ptr [ECX + 0x14],BL
005aa5e0  MOV byte ptr [EDX + 0x14],BL
005aa5e3  MOV EDX,dword ptr [EAX]
005aa5e5  MOV ECX,dword ptr [EDX + 0x4]
005aa5e8  MOV byte ptr [ECX + 0x14],0x0
005aa5ec  MOV EDX,dword ptr [EAX]
005aa5ee  MOV ESI,dword ptr [EDX + 0x4]
005aa5f1  JMP 0x005aa654
005aa5f3  CMP ESI,dword ptr [ECX + 0x8]
005aa5f6  JNZ 0x005aa602
005aa5f8  MOV ESI,ECX
005aa5fa  PUSH ESI
005aa5fb  MOV ECX,EDI
005aa5fd  CALL 0x0058b230
005aa602  MOV EAX,dword ptr [ESI + 0x4]
005aa605  MOV byte ptr [EAX + 0x14],BL
005aa608  MOV ECX,dword ptr [ESI + 0x4]
005aa60b  MOV EDX,dword ptr [ECX + 0x4]
005aa60e  MOV byte ptr [EDX + 0x14],0x0
005aa612  MOV EAX,dword ptr [ESI + 0x4]
005aa615  MOV ECX,dword ptr [EAX + 0x4]
005aa618  PUSH ECX
005aa619  MOV ECX,EDI
005aa61b  CALL 0x0058b290
005aa620  JMP 0x005aa654
005aa622  CMP byte ptr [EDX + 0x14],0x0
005aa626  JZ 0x005aa5db
005aa628  CMP ESI,dword ptr [ECX]
005aa62a  JNZ 0x005aa636
005aa62c  MOV ESI,ECX
005aa62e  PUSH ESI
005aa62f  MOV ECX,EDI
005aa631  CALL 0x0058b290
005aa636  MOV EAX,dword ptr [ESI + 0x4]
005aa639  MOV byte ptr [EAX + 0x14],BL
005aa63c  MOV ECX,dword ptr [ESI + 0x4]
005aa63f  MOV EDX,dword ptr [ECX + 0x4]
005aa642  MOV byte ptr [EDX + 0x14],0x0
005aa646  MOV EAX,dword ptr [ESI + 0x4]
005aa649  MOV ECX,dword ptr [EAX + 0x4]
005aa64c  PUSH ECX
005aa64d  MOV ECX,EDI
005aa64f  CALL 0x0058b230
005aa654  MOV EDX,dword ptr [ESI + 0x4]
005aa657  MOV CL,byte ptr [EDX + 0x14]
005aa65a  TEST CL,CL
005aa65c  LEA EAX,[ESI + 0x4]
005aa65f  JZ 0x005aa5c6
005aa665  MOV ECX,dword ptr [ESP + 0x70]
005aa669  POP EBP
005aa66a  MOV EAX,dword ptr [EDI + 0x4]
005aa66d  MOV EDX,dword ptr [EAX + 0x4]
005aa670  MOV EAX,dword ptr [ESP + 0x60]
005aa674  MOV byte ptr [EDX + 0x14],BL
005aa677  POP EBX
005aa678  MOV dword ptr [EAX],ECX
005aa67a  MOV ECX,dword ptr [ESP + 0x4c]
005aa67e  POP EDI
005aa67f  POP ESI
005aa680  MOV dword ptr FS:[0x0],ECX
005aa687  ADD ESP,0x50
005aa68a  RET 0x10
