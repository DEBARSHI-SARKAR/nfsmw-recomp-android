007dacb0  PUSH EBP
007dacb1  MOV EBP,ESP
007dacb3  PUSH -0x1
007dacb5  PUSH 0x8bd380
007dacba  PUSH 0x7cd5e4
007dacbf  MOV EAX,FS:[0x0]
007dacc5  PUSH EAX
007dacc6  MOV dword ptr FS:[0x0],ESP
007daccd  ADD ESP,-0x14
007dacd0  PUSH EBX
007dacd1  PUSH ESI
007dacd2  PUSH EDI
007dacd3  MOV dword ptr [EBP + -0x18],ESP
007dacd6  MOV dword ptr [EBP + -0x4],0x0
007dacdd  MOV EAX,dword ptr [EBP + 0x8]
007dace0  MOV ECX,dword ptr [EAX]
007dace2  MOV dword ptr [EBP + -0x24],ECX
007dace5  MOV dword ptr [EBP + -0x1c],0x1
007dacec  MOV dword ptr [EBP + -0x4],0xffffffff
007dacf3  JMP 0x007dad1e
007dad1e  MOV EAX,dword ptr [EBP + -0x1c]
007dad21  MOV ECX,dword ptr [EBP + -0x10]
007dad24  MOV dword ptr FS:[0x0],ECX
007dad2b  POP EDI
007dad2c  POP ESI
007dad2d  POP EBX
007dad2e  MOV ESP,EBP
007dad30  POP EBP
007dad31  RET 0x4
