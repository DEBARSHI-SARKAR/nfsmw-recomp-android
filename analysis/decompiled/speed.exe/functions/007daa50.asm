007daa50  PUSH EBP
007daa51  MOV EBP,ESP
007daa53  SUB ESP,0x20
007daa56  MOV EAX,dword ptr [EBP + 0xc]
007daa59  PUSH EAX
007daa5a  CALL 0x007dab30
007daa5f  ADD ESP,0x4
007daa62  MOV dword ptr [EBP + -0x1c],EAX
007daa65  CMP dword ptr [EBP + -0x1c],0x0
007daa69  JZ 0x007daac7
007daa6b  MOV ECX,dword ptr [EBP + 0x8]
007daa6e  MOV dword ptr [EBP + -0x20],ECX
007daa71  MOV EDX,dword ptr [EBP + 0x10]
007daa74  MOV dword ptr [EBP + -0x18],EDX
007daa77  MOV EAX,dword ptr [EBP + 0x14]
007daa7a  MOV dword ptr [EBP + -0x14],EAX
007daa7d  MOV ECX,dword ptr [EBP + 0x18]
007daa80  MOV dword ptr [EBP + -0x10],ECX
007daa83  MOV EDX,dword ptr [EBP + 0x1c]
007daa86  MOV dword ptr [EBP + -0xc],EDX
007daa89  MOV EAX,dword ptr [EBP + 0x20]
007daa8c  MOV dword ptr [EBP + -0x8],EAX
007daa8f  MOV ECX,dword ptr [EBP + 0x24]
007daa92  MOV dword ptr [EBP + -0x4],ECX
007daa95  PUSH 0xffff
007daa9a  MOV EDX,dword ptr [EBP + 0x28]
007daa9d  PUSH EDX
007daa9e  CALL 0x007dac10
007daaa3  ADD ESP,0x8
007daaa6  LEA EAX,[EBP + -0x20]
007daaa9  PUSH EAX
007daaaa  CALL 0x007e4df0
007daaaf  ADD ESP,0x4
007daab2  TEST EAX,EAX
007daab4  JNZ 0x007daac2
007daab6  MOV ECX,dword ptr [EBP + 0x8]
007daab9  PUSH ECX
007daaba  CALL 0x007daaf0
007daabf  ADD ESP,0x4
007daac2  FLD double ptr [EBP + -0x8]
007daac5  JMP 0x007daae7
007daac7  PUSH 0xffff
007daacc  MOV EDX,dword ptr [EBP + 0x28]
007daacf  PUSH EDX
007daad0  CALL 0x007dac10
007daad5  ADD ESP,0x8
007daad8  MOV EAX,dword ptr [EBP + 0x8]
007daadb  PUSH EAX
007daadc  CALL 0x007daaf0
007daae1  ADD ESP,0x4
007daae4  FLD double ptr [EBP + 0x20]
007daae7  MOV ESP,EBP
007daae9  POP EBP
007daaea  RET
