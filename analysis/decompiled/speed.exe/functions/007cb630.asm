007cb630  PUSH EBP
007cb631  MOV EBP,ESP
007cb633  PUSH -0x1
007cb635  PUSH 0x8b8cc0
007cb63a  PUSH 0x7cd5e4
007cb63f  MOV EAX,FS:[0x0]
007cb645  PUSH EAX
007cb646  MOV dword ptr FS:[0x0],ESP
007cb64d  ADD ESP,-0x10
007cb650  PUSH EBX
007cb651  PUSH ESI
007cb652  PUSH EDI
007cb653  CMP dword ptr [EBP + 0x8],0x0
007cb657  JNZ 0x007cb677
007cb659  PUSH 0x8b8b00
007cb65e  PUSH 0x0
007cb660  PUSH 0x44
007cb662  PUSH 0x8b8ca4
007cb667  PUSH 0x2
007cb669  CALL 0x007d2670
007cb66e  ADD ESP,0x14
007cb671  CMP EAX,0x1
007cb674  JNZ 0x007cb677
007cb676  INT3
007cb677  MOV ECX,dword ptr [EBP + 0x8]
007cb67a  PUSH ECX
007cb67b  CALL 0x007c9390
007cb680  ADD ESP,0x4
007cb683  MOV dword ptr [EBP + -0x4],0x0
007cb68a  MOV EDX,dword ptr [EBP + 0x8]
007cb68d  MOV EAX,dword ptr [EDX + 0x4]
007cb690  SUB EAX,0x1
007cb693  MOV ECX,dword ptr [EBP + 0x8]
007cb696  MOV dword ptr [ECX + 0x4],EAX
007cb699  MOV EDX,dword ptr [EBP + 0x8]
007cb69c  CMP dword ptr [EDX + 0x4],0x0
007cb6a0  JL 0x007cb6c2
007cb6a2  MOV EAX,dword ptr [EBP + 0x8]
007cb6a5  MOV ECX,dword ptr [EAX]
007cb6a7  MOVSX EDX,byte ptr [ECX]
007cb6aa  AND EDX,0xff
007cb6b0  MOV dword ptr [EBP + -0x20],EDX
007cb6b3  MOV EAX,dword ptr [EBP + 0x8]
007cb6b6  MOV ECX,dword ptr [EAX]
007cb6b8  ADD ECX,0x1
007cb6bb  MOV EDX,dword ptr [EBP + 0x8]
007cb6be  MOV dword ptr [EDX],ECX
007cb6c0  JMP 0x007cb6d1
007cb6c2  MOV EAX,dword ptr [EBP + 0x8]
007cb6c5  PUSH EAX
007cb6c6  CALL 0x007db3e0
007cb6cb  ADD ESP,0x4
007cb6ce  MOV dword ptr [EBP + -0x20],EAX
007cb6d1  MOV ECX,dword ptr [EBP + -0x20]
007cb6d4  MOV dword ptr [EBP + -0x1c],ECX
007cb6d7  MOV dword ptr [EBP + -0x4],0xffffffff
007cb6de  CALL 0x007cb6e5
007cb6e3  JMP 0x007cb6f2
