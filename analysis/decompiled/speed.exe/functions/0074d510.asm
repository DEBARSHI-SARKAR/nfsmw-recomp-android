0074d510  MOV EAX,FS:[0x0]
0074d516  PUSH -0x1
0074d518  PUSH 0x880e4f
0074d51d  PUSH EAX
0074d51e  MOV dword ptr FS:[0x0],ESP
0074d525  PUSH EBX
0074d526  PUSH ESI
0074d527  MOV ESI,ECX
0074d529  PUSH EDI
0074d52a  LEA EAX,[ESI + 0x8]
0074d52d  MOV EDX,0x20
0074d532  XOR EBX,EBX
0074d534  MOV ECX,0x3f800000
0074d539  MOV EDI,0xbf800000
0074d53e  MOV EDI,EDI
0074d540  MOV dword ptr [EAX + -0x8],EBX
0074d543  MOV dword ptr [EAX + -0x4],EBX
0074d546  MOV dword ptr [EAX],EBX
0074d548  MOV dword ptr [EAX + 0x8],EBX
0074d54b  MOV dword ptr [EAX + 0xc],EBX
0074d54e  MOV dword ptr [EAX + 0x10],EBX
0074d551  MOV dword ptr [EAX + 0x18],EBX
0074d554  MOV dword ptr [EAX + 0x1c],EBX
0074d557  MOV dword ptr [EAX + 0x20],EBX
0074d55a  MOV dword ptr [EAX + 0x28],EBX
0074d55d  MOV dword ptr [EAX + 0x2c],EBX
0074d560  MOV dword ptr [EAX + 0x30],EBX
0074d563  MOV dword ptr [EAX + 0x34],ECX
0074d566  MOV dword ptr [EAX + 0x38],EBX
0074d569  MOV dword ptr [EAX + 0x3c],EBX
0074d56c  MOV dword ptr [EAX + 0x40],EBX
0074d56f  MOV dword ptr [EAX + 0x44],ECX
0074d572  MOV dword ptr [EAX + 0x48],EBX
0074d575  MOV dword ptr [EAX + 0x4c],EBX
0074d578  MOV dword ptr [EAX + 0x50],EBX
0074d57b  MOV dword ptr [EAX + 0x54],ECX
0074d57e  MOV dword ptr [EAX + 0x4],EBX
0074d581  MOV dword ptr [EAX + 0x14],EBX
0074d584  MOV dword ptr [EAX + 0x24],EBX
0074d587  MOV dword ptr [EAX + 0x58],EBX
0074d58a  MOV byte ptr [EAX + 0x6a],0x1
0074d58e  MOV dword ptr [EAX + 0x5c],EDI
0074d591  MOV dword ptr [EAX + 0x60],ECX
0074d594  MOV dword ptr [EAX + 0x64],EBX
0074d597  MOV byte ptr [EAX + 0x68],BL
0074d59a  MOV byte ptr [EAX + 0x69],BL
0074d59d  ADD EAX,0x74
0074d5a0  DEC EDX
0074d5a1  JNZ 0x0074d540
0074d5a3  LEA ECX,[ESI + 0xe80]
0074d5a9  CALL 0x00733ec0
0074d5ae  LEA ECX,[ESI + 0xef4]
0074d5b4  CALL 0x00733ec0
0074d5b9  MOV EAX,dword ptr [ESP + 0x1c]
0074d5bd  PUSH EBX
0074d5be  PUSH 0x1c
0074d5c0  MOV ECX,0x925b30
0074d5c5  MOV dword ptr [ESI + 0xf68],EAX
0074d5cb  MOV dword ptr [ESI + 0xf6c],EBX
0074d5d1  CALL 0x005d29d0
0074d5d6  MOV EDI,EAX
0074d5d8  MOV dword ptr [ESP + 0x1c],EDI
0074d5dc  CMP EDI,EBX
0074d5de  MOV dword ptr [ESP + 0x14],EBX
0074d5e2  JZ 0x0074d5ef
0074d5e4  MOV ECX,EDI
0074d5e6  CALL 0x007ec196
0074d5eb  MOV ECX,EDI
0074d5ed  JMP 0x0074d5f1
0074d5ef  XOR ECX,ECX
0074d5f1  MOV dword ptr [ESP + 0x14],0xffffffff
0074d5f9  MOV dword ptr [ESI + 0xf90],ECX
0074d5ff  CALL 0x007ec1a7
0074d604  MOV ECX,dword ptr [ESP + 0xc]
0074d608  MOV dword ptr [ESI + 0xf98],EBX
0074d60e  MOV dword ptr [ESI + 0xf80],EBX
0074d614  MOV dword ptr [ESI + 0xf8c],EBX
0074d61a  MOV dword ptr [ESI + 0xf88],EBX
0074d620  MOV dword ptr [ESI + 0xf94],EBX
0074d626  MOV byte ptr [ESI + 0xf9d],BL
0074d62c  MOV byte ptr [ESI + 0xf9e],BL
0074d632  MOV byte ptr [ESI + 0xf9f],BL
0074d638  MOV byte ptr [ESI + 0xfa0],BL
0074d63e  POP EDI
0074d63f  MOV dword ptr [ESI + 0xf7c],ESI
0074d645  MOV dword ptr [ESI + 0xf84],0x1
0074d64f  MOV byte ptr [ESI + 0xf9c],0x1
0074d656  MOV EAX,ESI
0074d658  POP ESI
0074d659  MOV dword ptr FS:[0x0],ECX
0074d660  POP EBX
0074d661  ADD ESP,0xc
0074d664  RET 0x4
