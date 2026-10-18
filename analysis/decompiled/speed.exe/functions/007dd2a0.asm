007dd2a0  PUSH EBP
007dd2a1  MOV EBP,ESP
007dd2a3  PUSH -0x1
007dd2a5  PUSH 0x8bd838
007dd2aa  PUSH 0x7cd5e4
007dd2af  MOV EAX,FS:[0x0]
007dd2b5  PUSH EAX
007dd2b6  MOV dword ptr FS:[0x0],ESP
007dd2bd  ADD ESP,-0x14
007dd2c0  PUSH EBX
007dd2c1  PUSH ESI
007dd2c2  PUSH EDI
007dd2c3  MOV dword ptr [EBP + -0x24],0xffffffff
007dd2ca  PUSH 0xd
007dd2cc  CALL 0x007d0fd0
007dd2d1  ADD ESP,0x4
007dd2d4  MOV dword ptr [EBP + -0x4],0x0
007dd2db  MOV EAX,dword ptr [EBP + 0x8]
007dd2de  PUSH EAX
007dd2df  CALL 0x007dd470
007dd2e4  ADD ESP,0x4
007dd2e7  MOV dword ptr [EBP + 0x8],EAX
007dd2ea  MOV ECX,dword ptr [EBP + 0x8]
007dd2ed  CMP ECX,dword ptr [0x009c51c4]
007dd2f3  JZ 0x007dd435
007dd2f9  MOV EDX,dword ptr [0x009c50a4]
007dd2ff  MOV dword ptr [EBP + -0x20],EDX
007dd302  CMP dword ptr [EBP + -0x20],0x0
007dd306  JZ 0x007dd310
007dd308  MOV EAX,dword ptr [EBP + -0x20]
007dd30b  CMP dword ptr [EAX],0x0
007dd30e  JZ 0x007dd32c
007dd310  PUSH 0x20b
007dd315  PUSH 0x8bd82c
007dd31a  PUSH 0x2
007dd31c  PUSH 0x220
007dd321  CALL 0x007c6700
007dd326  ADD ESP,0x10
007dd329  MOV dword ptr [EBP + -0x20],EAX
007dd32c  CMP dword ptr [EBP + -0x20],0x0
007dd330  JZ 0x007dd414
007dd336  MOV ECX,dword ptr [EBP + 0x8]
007dd339  PUSH ECX
007dd33a  CALL 0x007dd4d0
007dd33f  ADD ESP,0x4
007dd342  MOV dword ptr [EBP + -0x24],EAX
007dd345  CMP dword ptr [EBP + -0x24],0x0
007dd349  JNZ 0x007dd414
007dd34f  MOV EDX,dword ptr [EBP + -0x20]
007dd352  MOV dword ptr [EDX],0x0
007dd358  MOV EAX,dword ptr [EBP + -0x20]
007dd35b  MOV ECX,dword ptr [0x009c51c4]
007dd361  MOV dword ptr [EAX + 0x4],ECX
007dd364  MOV EDX,dword ptr [EBP + -0x20]
007dd367  MOV EAX,[0x009c50a8]
007dd36c  MOV dword ptr [EDX + 0x8],EAX
007dd36f  MOV ECX,dword ptr [EBP + -0x20]
007dd372  MOV EDX,dword ptr [0x009c50a0]
007dd378  MOV dword ptr [ECX + 0xc],EDX
007dd37b  MOV dword ptr [EBP + -0x1c],0x0
007dd382  JMP 0x007dd38d
007dd384  MOV EAX,dword ptr [EBP + -0x1c]
007dd387  ADD EAX,0x1
007dd38a  MOV dword ptr [EBP + -0x1c],EAX
007dd38d  CMP dword ptr [EBP + -0x1c],0x5
007dd391  JGE 0x007dd3ab
007dd393  MOV ECX,dword ptr [EBP + -0x1c]
007dd396  MOV EDX,dword ptr [EBP + -0x20]
007dd399  MOV EAX,dword ptr [EBP + -0x1c]
007dd39c  MOV AX,word ptr [EAX*0x2 + 0x9c51d0]
007dd3a4  MOV word ptr [EDX + ECX*0x2 + 0x10],AX
007dd3a9  JMP 0x007dd384
007dd3ab  MOV dword ptr [EBP + -0x1c],0x0
007dd3b2  JMP 0x007dd3bd
007dd3b4  MOV ECX,dword ptr [EBP + -0x1c]
007dd3b7  ADD ECX,0x1
007dd3ba  MOV dword ptr [EBP + -0x1c],ECX
007dd3bd  CMP dword ptr [EBP + -0x1c],0x101
007dd3c4  JGE 0x007dd3da
007dd3c6  MOV EDX,dword ptr [EBP + -0x20]
007dd3c9  ADD EDX,dword ptr [EBP + -0x1c]
007dd3cc  MOV EAX,dword ptr [EBP + -0x1c]
007dd3cf  MOV CL,byte ptr [EAX + 0x9c50c0]
007dd3d5  MOV byte ptr [EDX + 0x1c],CL
007dd3d8  JMP 0x007dd3b4
007dd3da  MOV dword ptr [EBP + -0x1c],0x0
007dd3e1  JMP 0x007dd3ec
007dd3e3  MOV EDX,dword ptr [EBP + -0x1c]
007dd3e6  ADD EDX,0x1
007dd3e9  MOV dword ptr [EBP + -0x1c],EDX
007dd3ec  CMP dword ptr [EBP + -0x1c],0x100
007dd3f3  JGE 0x007dd40c
007dd3f5  MOV EAX,dword ptr [EBP + -0x20]
007dd3f8  ADD EAX,dword ptr [EBP + -0x1c]
007dd3fb  MOV ECX,dword ptr [EBP + -0x1c]
007dd3fe  MOV DL,byte ptr [ECX + 0x9c51e0]
007dd404  MOV byte ptr [EAX + 0x11d],DL
007dd40a  JMP 0x007dd3e3
007dd40c  MOV EAX,dword ptr [EBP + -0x20]
007dd40f  MOV [0x009c50a4],EAX
007dd414  CMP dword ptr [EBP + -0x24],-0x1
007dd418  JNZ 0x007dd433
007dd41a  MOV ECX,dword ptr [EBP + -0x20]
007dd41d  CMP ECX,dword ptr [0x009c50a4]
007dd423  JZ 0x007dd433
007dd425  PUSH 0x2
007dd427  MOV EDX,dword ptr [EBP + -0x20]
007dd42a  PUSH EDX
007dd42b  CALL 0x007c7290
007dd430  ADD ESP,0x8
007dd433  JMP 0x007dd43c
007dd435  MOV dword ptr [EBP + -0x24],0x0
007dd43c  MOV dword ptr [EBP + -0x4],0xffffffff
007dd443  CALL 0x007dd44a
007dd448  JMP 0x007dd455
