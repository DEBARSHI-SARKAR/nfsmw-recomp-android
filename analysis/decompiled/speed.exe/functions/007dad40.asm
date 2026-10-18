007dad40  PUSH EBP
007dad41  MOV EBP,ESP
007dad43  SUB ESP,0x2c
007dad46  MOV EAX,[0x00906980]
007dad4b  MOV dword ptr [EBP + -0x18],EAX
007dad4e  MOV dword ptr [EBP + -0x28],0x0
007dad55  PUSH 0x0
007dad57  PUSH 0x0
007dad59  PUSH 0x0
007dad5b  PUSH 0x0
007dad5d  MOV EAX,dword ptr [EBP + 0xc]
007dad60  PUSH EAX
007dad61  LEA ECX,[EBP + -0x14]
007dad64  PUSH ECX
007dad65  LEA EDX,[EBP + -0x24]
007dad68  PUSH EDX
007dad69  CALL 0x007e4e00
007dad6e  ADD ESP,0x1c
007dad71  MOV dword ptr [EBP + -0x4],EAX
007dad74  MOV EAX,dword ptr [EBP + -0x4]
007dad77  AND EAX,0x4
007dad7a  JZ 0x007dad98
007dad7c  MOV ECX,dword ptr [EBP + -0x28]
007dad7f  OR ECX,0x200
007dad85  MOV dword ptr [EBP + -0x28],ECX
007dad88  MOV dword ptr [EBP + -0x10],0x0
007dad8f  MOV dword ptr [EBP + -0xc],0x0
007dad96  JMP 0x007daddf
007dad98  LEA EDX,[EBP + -0x10]
007dad9b  PUSH EDX
007dad9c  LEA EAX,[EBP + -0x24]
007dad9f  PUSH EAX
007dada0  CALL 0x007de8c0
007dada5  ADD ESP,0x8
007dada8  MOV dword ptr [EBP + -0x2c],EAX
007dadab  MOV ECX,dword ptr [EBP + -0x4]
007dadae  AND ECX,0x2
007dadb1  JNZ 0x007dadb9
007dadb3  CMP dword ptr [EBP + -0x2c],0x1
007dadb7  JNZ 0x007dadc5
007dadb9  MOV EDX,dword ptr [EBP + -0x28]
007dadbc  OR EDX,0x80
007dadc2  MOV dword ptr [EBP + -0x28],EDX
007dadc5  MOV EAX,dword ptr [EBP + -0x4]
007dadc8  AND EAX,0x1
007dadcb  JNZ 0x007dadd3
007dadcd  CMP dword ptr [EBP + -0x2c],0x2
007dadd1  JNZ 0x007daddf
007dadd3  MOV ECX,dword ptr [EBP + -0x28]
007dadd6  OR ECX,0x100
007daddc  MOV dword ptr [EBP + -0x28],ECX
007daddf  MOV EDX,dword ptr [EBP + 0x8]
007dade2  MOV EAX,dword ptr [EBP + -0x28]
007dade5  MOV dword ptr [EDX],EAX
007dade7  MOV ECX,dword ptr [EBP + -0x14]
007dadea  SUB ECX,dword ptr [EBP + 0xc]
007daded  MOV EDX,dword ptr [EBP + 0x8]
007dadf0  MOV dword ptr [EDX + 0x4],ECX
007dadf3  MOV EAX,dword ptr [EBP + 0x8]
007dadf6  MOV ECX,dword ptr [EBP + -0x10]
007dadf9  MOV dword ptr [EAX + 0x10],ECX
007dadfc  MOV EDX,dword ptr [EBP + -0xc]
007dadff  MOV dword ptr [EAX + 0x14],EDX
007dae02  MOV EAX,dword ptr [EBP + 0x8]
007dae05  MOV ECX,dword ptr [EBP + -0x18]
007dae08  CALL 0x007d6cb0
007dae0d  MOV ESP,EBP
007dae0f  POP EBP
007dae10  RET
