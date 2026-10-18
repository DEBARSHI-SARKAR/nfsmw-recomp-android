007dd1d0  PUSH EBP
007dd1d1  MOV EBP,ESP
007dd1d3  PUSH -0x1
007dd1d5  PUSH 0x8bd820
007dd1da  PUSH 0x7cd5e4
007dd1df  MOV EAX,FS:[0x0]
007dd1e5  PUSH EAX
007dd1e6  MOV dword ptr FS:[0x0],ESP
007dd1ed  ADD ESP,-0x10
007dd1f0  PUSH EBX
007dd1f1  PUSH ESI
007dd1f2  PUSH EDI
007dd1f3  PUSH 0xd
007dd1f5  CALL 0x007d0fd0
007dd1fa  ADD ESP,0x4
007dd1fd  MOV dword ptr [EBP + -0x4],0x0
007dd204  CALL 0x007cd100
007dd209  MOV dword ptr [EBP + -0x20],EAX
007dd20c  MOV EAX,dword ptr [EBP + -0x20]
007dd20f  MOV ECX,dword ptr [EAX + 0x60]
007dd212  MOV dword ptr [EBP + -0x1c],ECX
007dd215  MOV EDX,dword ptr [EBP + -0x1c]
007dd218  CMP EDX,dword ptr [0x009c50a4]
007dd21e  JZ 0x007dd26a
007dd220  CMP dword ptr [EBP + -0x1c],0x0
007dd224  JZ 0x007dd249
007dd226  MOV EAX,dword ptr [EBP + -0x1c]
007dd229  MOV ECX,dword ptr [EAX]
007dd22b  SUB ECX,0x1
007dd22e  MOV EDX,dword ptr [EBP + -0x1c]
007dd231  MOV dword ptr [EDX],ECX
007dd233  MOV EAX,dword ptr [EBP + -0x1c]
007dd236  CMP dword ptr [EAX],0x0
007dd239  JNZ 0x007dd249
007dd23b  PUSH 0x2
007dd23d  MOV ECX,dword ptr [EBP + -0x1c]
007dd240  PUSH ECX
007dd241  CALL 0x007c7290
007dd246  ADD ESP,0x8
007dd249  MOV EDX,dword ptr [EBP + -0x20]
007dd24c  MOV EAX,[0x009c50a4]
007dd251  MOV dword ptr [EDX + 0x60],EAX
007dd254  MOV ECX,dword ptr [0x009c50a4]
007dd25a  MOV dword ptr [EBP + -0x1c],ECX
007dd25d  MOV EDX,dword ptr [EBP + -0x1c]
007dd260  MOV EAX,dword ptr [EDX]
007dd262  ADD EAX,0x1
007dd265  MOV ECX,dword ptr [EBP + -0x1c]
007dd268  MOV dword ptr [ECX],EAX
007dd26a  MOV dword ptr [EBP + -0x4],0xffffffff
007dd271  CALL 0x007dd278
007dd276  JMP 0x007dd283
