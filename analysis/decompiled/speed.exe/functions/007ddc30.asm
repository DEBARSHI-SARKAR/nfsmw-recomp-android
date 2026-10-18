007ddc30  PUSH EBP
007ddc31  MOV EBP,ESP
007ddc33  PUSH -0x1
007ddc35  PUSH 0x8bd870
007ddc3a  PUSH 0x7cd5e4
007ddc3f  MOV EAX,FS:[0x0]
007ddc45  PUSH EAX
007ddc46  MOV dword ptr FS:[0x0],ESP
007ddc4d  ADD ESP,-0x14
007ddc50  PUSH EBX
007ddc51  PUSH ESI
007ddc52  PUSH EDI
007ddc53  MOV dword ptr [EBP + -0x18],ESP
007ddc56  CMP dword ptr [0x009bae88],0x0
007ddc5d  JNZ 0x007ddcbb
007ddc5f  CMP dword ptr [0x009baa20],0x1
007ddc66  JNZ 0x007ddc74
007ddc68  MOV dword ptr [0x009bae88],0x7ddd30
007ddc72  JMP 0x007ddcbb
007ddc74  PUSH 0x8b8d5c
007ddc79  CALL dword ptr [0x0089008c]
007ddc7f  MOV dword ptr [EBP + -0x20],EAX
007ddc82  CMP dword ptr [EBP + -0x20],0x0
007ddc86  JZ 0x007ddcb1
007ddc88  PUSH 0x8bd844
007ddc8d  MOV EAX,dword ptr [EBP + -0x20]
007ddc90  PUSH EAX
007ddc91  CALL dword ptr [0x00890094]
007ddc97  MOV [0x009bae88],EAX
007ddc9c  CMP dword ptr [0x009bae88],0x0
007ddca3  JNZ 0x007ddcaf
007ddca5  MOV dword ptr [0x009bae88],0x7ddd30
007ddcaf  JMP 0x007ddcbb
007ddcb1  MOV dword ptr [0x009bae88],0x7ddd30
007ddcbb  MOV dword ptr [EBP + -0x4],0x0
007ddcc2  MOV ECX,dword ptr [EBP + 0xc]
007ddcc5  PUSH ECX
007ddcc6  MOV EDX,dword ptr [EBP + 0x8]
007ddcc9  PUSH EDX
007ddcca  CALL dword ptr [0x009bae88]
007ddcd0  MOV dword ptr [EBP + -0x1c],EAX
007ddcd3  MOV dword ptr [EBP + -0x4],0xffffffff
007ddcda  JMP 0x007ddd0e
007ddd0e  MOV EAX,dword ptr [EBP + -0x1c]
007ddd11  MOV ECX,dword ptr [EBP + -0x10]
007ddd14  MOV dword ptr FS:[0x0],ECX
007ddd1b  POP EDI
007ddd1c  POP ESI
007ddd1d  POP EBX
007ddd1e  MOV ESP,EBP
007ddd20  POP EBP
007ddd21  RET
