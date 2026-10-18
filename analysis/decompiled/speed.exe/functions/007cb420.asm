007cb420  PUSH EBP
007cb421  MOV EBP,ESP
007cb423  PUSH ECX
007cb424  CMP dword ptr [EBP + 0xc],0x0
007cb428  JNZ 0x007cb448
007cb42a  PUSH 0x8b8ad0
007cb42f  PUSH 0x0
007cb431  PUSH 0x63
007cb433  PUSH 0x8b8c8c
007cb438  PUSH 0x2
007cb43a  CALL 0x007d2670
007cb43f  ADD ESP,0x14
007cb442  CMP EAX,0x1
007cb445  JNZ 0x007cb448
007cb447  INT3
007cb448  MOV ECX,dword ptr [EBP + 0xc]
007cb44b  MOV dword ptr [EBP + -0x4],ECX
007cb44e  CMP dword ptr [EBP + 0x8],-0x1
007cb452  JZ 0x007cb478
007cb454  MOV EDX,dword ptr [EBP + -0x4]
007cb457  MOV EAX,dword ptr [EDX + 0xc]
007cb45a  AND EAX,0x1
007cb45d  JNZ 0x007cb480
007cb45f  MOV ECX,dword ptr [EBP + -0x4]
007cb462  MOV EDX,dword ptr [ECX + 0xc]
007cb465  AND EDX,0x80
007cb46b  JZ 0x007cb478
007cb46d  MOV EAX,dword ptr [EBP + -0x4]
007cb470  MOV ECX,dword ptr [EAX + 0xc]
007cb473  AND ECX,0x2
007cb476  JZ 0x007cb480
007cb478  OR EAX,0xffffffff
007cb47b  JMP 0x007cb548
007cb480  MOV EDX,dword ptr [EBP + -0x4]
007cb483  CMP dword ptr [EDX + 0x8],0x0
007cb487  JNZ 0x007cb495
007cb489  MOV EAX,dword ptr [EBP + -0x4]
007cb48c  PUSH EAX
007cb48d  CALL 0x007dbb00
007cb492  ADD ESP,0x4
007cb495  MOV ECX,dword ptr [EBP + -0x4]
007cb498  MOV EDX,dword ptr [EBP + -0x4]
007cb49b  MOV EAX,dword ptr [ECX]
007cb49d  CMP EAX,dword ptr [EDX + 0x8]
007cb4a0  JNZ 0x007cb4c0
007cb4a2  MOV ECX,dword ptr [EBP + -0x4]
007cb4a5  CMP dword ptr [ECX + 0x4],0x0
007cb4a9  JZ 0x007cb4b3
007cb4ab  OR EAX,0xffffffff
007cb4ae  JMP 0x007cb548
007cb4b3  MOV EDX,dword ptr [EBP + -0x4]
007cb4b6  MOV EAX,dword ptr [EDX]
007cb4b8  ADD EAX,0x1
007cb4bb  MOV ECX,dword ptr [EBP + -0x4]
007cb4be  MOV dword ptr [ECX],EAX
007cb4c0  MOV EDX,dword ptr [EBP + -0x4]
007cb4c3  MOV EAX,dword ptr [EDX + 0xc]
007cb4c6  AND EAX,0x40
007cb4c9  JZ 0x007cb4fc
007cb4cb  MOV ECX,dword ptr [EBP + -0x4]
007cb4ce  MOV EDX,dword ptr [ECX]
007cb4d0  SUB EDX,0x1
007cb4d3  MOV EAX,dword ptr [EBP + -0x4]
007cb4d6  MOV dword ptr [EAX],EDX
007cb4d8  MOV ECX,dword ptr [EBP + -0x4]
007cb4db  MOV EDX,dword ptr [ECX]
007cb4dd  MOVSX EAX,byte ptr [EDX]
007cb4e0  MOVSX ECX,byte ptr [EBP + 0x8]
007cb4e4  CMP EAX,ECX
007cb4e6  JZ 0x007cb4fa
007cb4e8  MOV EDX,dword ptr [EBP + -0x4]
007cb4eb  MOV EAX,dword ptr [EDX]
007cb4ed  ADD EAX,0x1
007cb4f0  MOV ECX,dword ptr [EBP + -0x4]
007cb4f3  MOV dword ptr [ECX],EAX
007cb4f5  OR EAX,0xffffffff
007cb4f8  JMP 0x007cb548
007cb4fa  JMP 0x007cb513
007cb4fc  MOV EDX,dword ptr [EBP + -0x4]
007cb4ff  MOV EAX,dword ptr [EDX]
007cb501  SUB EAX,0x1
007cb504  MOV ECX,dword ptr [EBP + -0x4]
007cb507  MOV dword ptr [ECX],EAX
007cb509  MOV EDX,dword ptr [EBP + -0x4]
007cb50c  MOV EAX,dword ptr [EDX]
007cb50e  MOV CL,byte ptr [EBP + 0x8]
007cb511  MOV byte ptr [EAX],CL
007cb513  MOV EDX,dword ptr [EBP + -0x4]
007cb516  MOV EAX,dword ptr [EDX + 0x4]
007cb519  ADD EAX,0x1
007cb51c  MOV ECX,dword ptr [EBP + -0x4]
007cb51f  MOV dword ptr [ECX + 0x4],EAX
007cb522  MOV EDX,dword ptr [EBP + -0x4]
007cb525  MOV EAX,dword ptr [EDX + 0xc]
007cb528  AND EAX,0xffffffef
007cb52b  MOV ECX,dword ptr [EBP + -0x4]
007cb52e  MOV dword ptr [ECX + 0xc],EAX
007cb531  MOV EDX,dword ptr [EBP + -0x4]
007cb534  MOV EAX,dword ptr [EDX + 0xc]
007cb537  OR EAX,0x1
007cb53a  MOV ECX,dword ptr [EBP + -0x4]
007cb53d  MOV dword ptr [ECX + 0xc],EAX
007cb540  MOV EAX,dword ptr [EBP + 0x8]
007cb543  AND EAX,0xff
007cb548  MOV ESP,EBP
007cb54a  POP EBP
007cb54b  RET
