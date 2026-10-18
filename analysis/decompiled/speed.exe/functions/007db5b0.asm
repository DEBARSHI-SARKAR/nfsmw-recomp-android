007db5b0  PUSH EBP
007db5b1  MOV EBP,ESP
007db5b3  PUSH -0x1
007db5b5  PUSH 0x8bd400
007db5ba  PUSH 0x7cd5e4
007db5bf  MOV EAX,FS:[0x0]
007db5c5  PUSH EAX
007db5c6  MOV dword ptr FS:[0x0],ESP
007db5cd  ADD ESP,-0xc
007db5d0  PUSH EBX
007db5d1  PUSH ESI
007db5d2  PUSH EDI
007db5d3  MOV EAX,dword ptr [EBP + 0x8]
007db5d6  CMP EAX,dword ptr [0x009c5320]
007db5dc  JNC 0x007db5fe
007db5de  MOV ECX,dword ptr [EBP + 0x8]
007db5e1  SAR ECX,0x5
007db5e4  MOV EDX,dword ptr [EBP + 0x8]
007db5e7  AND EDX,0x1f
007db5ea  IMUL EDX,EDX,0x24
007db5ed  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007db5f4  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007db5f9  AND ECX,0x1
007db5fc  JNZ 0x007db61c
007db5fe  CALL 0x007cb270
007db603  MOV dword ptr [EAX],0x9
007db609  CALL 0x007cb280
007db60e  MOV dword ptr [EAX],0x0
007db614  OR EAX,0xffffffff
007db617  JMP 0x007db6a3
007db61c  MOV EDX,dword ptr [EBP + 0x8]
007db61f  PUSH EDX
007db620  CALL 0x007e4670
007db625  ADD ESP,0x4
007db628  MOV dword ptr [EBP + -0x4],0x0
007db62f  MOV EAX,dword ptr [EBP + 0x8]
007db632  SAR EAX,0x5
007db635  MOV ECX,dword ptr [EBP + 0x8]
007db638  AND ECX,0x1f
007db63b  IMUL ECX,ECX,0x24
007db63e  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007db645  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007db64a  AND EAX,0x1
007db64d  JZ 0x007db668
007db64f  MOV ECX,dword ptr [EBP + 0x10]
007db652  PUSH ECX
007db653  MOV EDX,dword ptr [EBP + 0xc]
007db656  PUSH EDX
007db657  MOV EAX,dword ptr [EBP + 0x8]
007db65a  PUSH EAX
007db65b  CALL 0x007db6c0
007db660  ADD ESP,0xc
007db663  MOV dword ptr [EBP + -0x1c],EAX
007db666  JMP 0x007db685
007db668  CALL 0x007cb270
007db66d  MOV dword ptr [EAX],0x9
007db673  CALL 0x007cb280
007db678  MOV dword ptr [EAX],0x0
007db67e  MOV dword ptr [EBP + -0x1c],0xffffffff
007db685  MOV dword ptr [EBP + -0x4],0xffffffff
007db68c  CALL 0x007db693
007db691  JMP 0x007db6a0
