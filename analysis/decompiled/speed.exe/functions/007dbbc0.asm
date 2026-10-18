007dbbc0  PUSH EBP
007dbbc1  MOV EBP,ESP
007dbbc3  PUSH -0x1
007dbbc5  PUSH 0x8bd750
007dbbca  PUSH 0x7cd5e4
007dbbcf  MOV EAX,FS:[0x0]
007dbbd5  PUSH EAX
007dbbd6  MOV dword ptr FS:[0x0],ESP
007dbbdd  ADD ESP,-0xc
007dbbe0  PUSH EBX
007dbbe1  PUSH ESI
007dbbe2  PUSH EDI
007dbbe3  MOV EAX,dword ptr [EBP + 0x8]
007dbbe6  CMP EAX,dword ptr [0x009c5320]
007dbbec  JNC 0x007dbc0e
007dbbee  MOV ECX,dword ptr [EBP + 0x8]
007dbbf1  SAR ECX,0x5
007dbbf4  MOV EDX,dword ptr [EBP + 0x8]
007dbbf7  AND EDX,0x1f
007dbbfa  IMUL EDX,EDX,0x24
007dbbfd  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007dbc04  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007dbc09  AND ECX,0x1
007dbc0c  JNZ 0x007dbc2c
007dbc0e  CALL 0x007cb270
007dbc13  MOV dword ptr [EAX],0x9
007dbc19  CALL 0x007cb280
007dbc1e  MOV dword ptr [EAX],0x0
007dbc24  OR EAX,0xffffffff
007dbc27  JMP 0x007dbcb3
007dbc2c  MOV EDX,dword ptr [EBP + 0x8]
007dbc2f  PUSH EDX
007dbc30  CALL 0x007e4670
007dbc35  ADD ESP,0x4
007dbc38  MOV dword ptr [EBP + -0x4],0x0
007dbc3f  MOV EAX,dword ptr [EBP + 0x8]
007dbc42  SAR EAX,0x5
007dbc45  MOV ECX,dword ptr [EBP + 0x8]
007dbc48  AND ECX,0x1f
007dbc4b  IMUL ECX,ECX,0x24
007dbc4e  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dbc55  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007dbc5a  AND EAX,0x1
007dbc5d  JZ 0x007dbc78
007dbc5f  MOV ECX,dword ptr [EBP + 0x10]
007dbc62  PUSH ECX
007dbc63  MOV EDX,dword ptr [EBP + 0xc]
007dbc66  PUSH EDX
007dbc67  MOV EAX,dword ptr [EBP + 0x8]
007dbc6a  PUSH EAX
007dbc6b  CALL 0x007dbcd0
007dbc70  ADD ESP,0xc
007dbc73  MOV dword ptr [EBP + -0x1c],EAX
007dbc76  JMP 0x007dbc95
007dbc78  CALL 0x007cb270
007dbc7d  MOV dword ptr [EAX],0x9
007dbc83  CALL 0x007cb280
007dbc88  MOV dword ptr [EAX],0x0
007dbc8e  MOV dword ptr [EBP + -0x1c],0xffffffff
007dbc95  MOV dword ptr [EBP + -0x4],0xffffffff
007dbc9c  CALL 0x007dbca3
007dbca1  JMP 0x007dbcb0
