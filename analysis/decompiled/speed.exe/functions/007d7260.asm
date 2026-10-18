007d7260  PUSH EBP
007d7261  MOV EBP,ESP
007d7263  SUB ESP,0xc
007d7266  MOV dword ptr [EBP + -0x4],0x0
007d726d  MOV EAX,dword ptr [EBP + 0x8]
007d7270  MOV dword ptr [EBP + -0xc],EAX
007d7273  MOV ECX,dword ptr [EBP + -0xc]
007d7276  MOV EDX,dword ptr [ECX + 0xc]
007d7279  AND EDX,0x3
007d727c  CMP EDX,0x2
007d727f  JNZ 0x007d72f7
007d7281  MOV EAX,dword ptr [EBP + -0xc]
007d7284  MOV ECX,dword ptr [EAX + 0xc]
007d7287  AND ECX,0x108
007d728d  JZ 0x007d72f7
007d728f  MOV EDX,dword ptr [EBP + -0xc]
007d7292  MOV EAX,dword ptr [EBP + -0xc]
007d7295  MOV ECX,dword ptr [EDX]
007d7297  SUB ECX,dword ptr [EAX + 0x8]
007d729a  MOV dword ptr [EBP + -0x8],ECX
007d729d  CMP dword ptr [EBP + -0x8],0x0
007d72a1  JLE 0x007d72f7
007d72a3  MOV EDX,dword ptr [EBP + -0x8]
007d72a6  PUSH EDX
007d72a7  MOV EAX,dword ptr [EBP + -0xc]
007d72aa  MOV ECX,dword ptr [EAX + 0x8]
007d72ad  PUSH ECX
007d72ae  MOV EDX,dword ptr [EBP + -0xc]
007d72b1  MOV EAX,dword ptr [EDX + 0x10]
007d72b4  PUSH EAX
007d72b5  CALL 0x007dbbc0
007d72ba  ADD ESP,0xc
007d72bd  CMP EAX,dword ptr [EBP + -0x8]
007d72c0  JNZ 0x007d72e1
007d72c2  MOV ECX,dword ptr [EBP + -0xc]
007d72c5  MOV EDX,dword ptr [ECX + 0xc]
007d72c8  AND EDX,0x80
007d72ce  JZ 0x007d72df
007d72d0  MOV EAX,dword ptr [EBP + -0xc]
007d72d3  MOV ECX,dword ptr [EAX + 0xc]
007d72d6  AND ECX,0xfffffffd
007d72d9  MOV EDX,dword ptr [EBP + -0xc]
007d72dc  MOV dword ptr [EDX + 0xc],ECX
007d72df  JMP 0x007d72f7
007d72e1  MOV EAX,dword ptr [EBP + -0xc]
007d72e4  MOV ECX,dword ptr [EAX + 0xc]
007d72e7  OR ECX,0x20
007d72ea  MOV EDX,dword ptr [EBP + -0xc]
007d72ed  MOV dword ptr [EDX + 0xc],ECX
007d72f0  MOV dword ptr [EBP + -0x4],0xffffffff
007d72f7  MOV EAX,dword ptr [EBP + -0xc]
007d72fa  MOV ECX,dword ptr [EBP + -0xc]
007d72fd  MOV EDX,dword ptr [ECX + 0x8]
007d7300  MOV dword ptr [EAX],EDX
007d7302  MOV EAX,dword ptr [EBP + -0xc]
007d7305  MOV dword ptr [EAX + 0x4],0x0
007d730c  MOV EAX,dword ptr [EBP + -0x4]
007d730f  MOV ESP,EBP
007d7311  POP EBP
007d7312  RET
