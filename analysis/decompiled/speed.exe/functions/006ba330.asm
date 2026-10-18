006ba330  MOV EAX,FS:[0x0]
006ba336  PUSH -0x1
006ba338  PUSH 0x87e038
006ba33d  PUSH EAX
006ba33e  MOV dword ptr FS:[0x0],ESP
006ba345  SUB ESP,0x44
006ba348  PUSH ESI
006ba349  PUSH EDI
006ba34a  MOV EDI,ECX
006ba34c  CMP dword ptr [EDI + 0x8],0x1ffffffe
006ba353  JC 0x006ba3a1
006ba355  PUSH 0x13
006ba357  XOR ESI,ESI
006ba359  PUSH 0x892b50
006ba35e  LEA ECX,[ESP + 0x10]
006ba362  MOV dword ptr [ESP + 0x28],0xf
006ba36a  MOV dword ptr [ESP + 0x24],ESI
006ba36e  MOV byte ptr [ESP + 0x14],0x0
006ba373  CALL 0x004303b0
006ba378  LEA EAX,[ESP + 0x8]
006ba37c  PUSH EAX
006ba37d  LEA ECX,[ESP + 0x28]
006ba381  MOV dword ptr [ESP + 0x58],ESI
006ba385  CALL 0x00432d50
006ba38a  PUSH 0x8c9ca8
006ba38f  LEA ECX,[ESP + 0x28]
006ba393  PUSH ECX
006ba394  MOV dword ptr [ESP + 0x2c],0x8bf290
006ba39c  CALL 0x007c56b0
006ba3a1  MOV EDX,dword ptr [ESP + 0x68]
006ba3a5  MOV EAX,dword ptr [EDI + 0x4]
006ba3a8  MOV ESI,dword ptr [ESP + 0x64]
006ba3ac  PUSH EBX
006ba3ad  PUSH 0x0
006ba3af  PUSH EDX
006ba3b0  PUSH EAX
006ba3b1  PUSH ESI
006ba3b2  PUSH EAX
006ba3b3  MOV ECX,EDI
006ba3b5  CALL 0x006b10c0
006ba3ba  MOV EBX,dword ptr [EDI + 0x8]
006ba3bd  MOV ECX,EAX
006ba3bf  MOV EAX,dword ptr [EDI + 0x4]
006ba3c2  INC EBX
006ba3c3  CMP ESI,EAX
006ba3c5  MOV dword ptr [ESP + 0x6c],ECX
006ba3c9  MOV dword ptr [EDI + 0x8],EBX
006ba3cc  JNZ 0x006ba3de
006ba3ce  MOV dword ptr [EAX + 0x4],ECX
006ba3d1  MOV EAX,dword ptr [EDI + 0x4]
006ba3d4  MOV dword ptr [EAX],ECX
006ba3d6  MOV EDX,dword ptr [EDI + 0x4]
006ba3d9  MOV dword ptr [EDX + 0x8],ECX
006ba3dc  JMP 0x006ba401
006ba3de  MOV AL,byte ptr [ESP + 0x64]
006ba3e2  TEST AL,AL
006ba3e4  JZ 0x006ba3f3
006ba3e6  MOV dword ptr [ESI],ECX
006ba3e8  MOV EAX,dword ptr [EDI + 0x4]
006ba3eb  CMP ESI,dword ptr [EAX]
006ba3ed  JNZ 0x006ba401
006ba3ef  MOV dword ptr [EAX],ECX
006ba3f1  JMP 0x006ba401
006ba3f3  MOV dword ptr [ESI + 0x8],ECX
006ba3f6  MOV EAX,dword ptr [EDI + 0x4]
006ba3f9  CMP ESI,dword ptr [EAX + 0x8]
006ba3fc  JNZ 0x006ba401
006ba3fe  MOV dword ptr [EAX + 0x8],ECX
006ba401  MOV EDX,dword ptr [ECX + 0x4]
006ba404  CMP byte ptr [EDX + 0x14],0x0
006ba408  LEA EAX,[ECX + 0x4]
006ba40b  MOV ESI,ECX
006ba40d  MOV BL,0x1
006ba40f  JNZ 0x006ba4ba
006ba415  PUSH EBP
006ba416  MOV ECX,dword ptr [EAX]
006ba418  MOV EBP,dword ptr [ECX + 0x4]
006ba41b  MOV EDX,dword ptr [EBP]
006ba41e  CMP ECX,EDX
006ba420  JNZ 0x006ba472
006ba422  MOV EDX,dword ptr [EBP + 0x8]
006ba425  CMP byte ptr [EDX + 0x14],0x0
006ba429  JNZ 0x006ba443
006ba42b  MOV ECX,dword ptr [EAX]
006ba42d  MOV byte ptr [ECX + 0x14],BL
006ba430  MOV byte ptr [EDX + 0x14],BL
006ba433  MOV EDX,dword ptr [EAX]
006ba435  MOV ECX,dword ptr [EDX + 0x4]
006ba438  MOV byte ptr [ECX + 0x14],0x0
006ba43c  MOV EDX,dword ptr [EAX]
006ba43e  MOV ESI,dword ptr [EDX + 0x4]
006ba441  JMP 0x006ba4a4
006ba443  CMP ESI,dword ptr [ECX + 0x8]
006ba446  JNZ 0x006ba452
006ba448  MOV ESI,ECX
006ba44a  PUSH ESI
006ba44b  MOV ECX,EDI
006ba44d  CALL 0x006a60c0
006ba452  MOV EAX,dword ptr [ESI + 0x4]
006ba455  MOV byte ptr [EAX + 0x14],BL
006ba458  MOV ECX,dword ptr [ESI + 0x4]
006ba45b  MOV EDX,dword ptr [ECX + 0x4]
006ba45e  MOV byte ptr [EDX + 0x14],0x0
006ba462  MOV EAX,dword ptr [ESI + 0x4]
006ba465  MOV ECX,dword ptr [EAX + 0x4]
006ba468  PUSH ECX
006ba469  MOV ECX,EDI
006ba46b  CALL 0x00695180
006ba470  JMP 0x006ba4a4
006ba472  CMP byte ptr [EDX + 0x14],0x0
006ba476  JZ 0x006ba42b
006ba478  CMP ESI,dword ptr [ECX]
006ba47a  JNZ 0x006ba486
006ba47c  MOV ESI,ECX
006ba47e  PUSH ESI
006ba47f  MOV ECX,EDI
006ba481  CALL 0x00695180
006ba486  MOV EAX,dword ptr [ESI + 0x4]
006ba489  MOV byte ptr [EAX + 0x14],BL
006ba48c  MOV ECX,dword ptr [ESI + 0x4]
006ba48f  MOV EDX,dword ptr [ECX + 0x4]
006ba492  MOV byte ptr [EDX + 0x14],0x0
006ba496  MOV EAX,dword ptr [ESI + 0x4]
006ba499  MOV ECX,dword ptr [EAX + 0x4]
006ba49c  PUSH ECX
006ba49d  MOV ECX,EDI
006ba49f  CALL 0x006a60c0
006ba4a4  MOV EDX,dword ptr [ESI + 0x4]
006ba4a7  MOV CL,byte ptr [EDX + 0x14]
006ba4aa  TEST CL,CL
006ba4ac  LEA EAX,[ESI + 0x4]
006ba4af  JZ 0x006ba416
006ba4b5  MOV ECX,dword ptr [ESP + 0x70]
006ba4b9  POP EBP
006ba4ba  MOV EAX,dword ptr [EDI + 0x4]
006ba4bd  MOV EDX,dword ptr [EAX + 0x4]
006ba4c0  MOV EAX,dword ptr [ESP + 0x60]
006ba4c4  MOV byte ptr [EDX + 0x14],BL
006ba4c7  POP EBX
006ba4c8  MOV dword ptr [EAX],ECX
006ba4ca  MOV ECX,dword ptr [ESP + 0x4c]
006ba4ce  POP EDI
006ba4cf  POP ESI
006ba4d0  MOV dword ptr FS:[0x0],ECX
006ba4d7  ADD ESP,0x50
006ba4da  RET 0x10
