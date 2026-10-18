0082aee0  PUSH EBP
0082aee1  MOV EBP,ESP
0082aee3  MOV EAX,dword ptr [ECX + 0x4]
0082aee6  TEST EAX,EAX
0082aee8  JGE 0x0082aef3
0082aeea  MOV EAX,0xffffffd5
0082aeef  POP EBP
0082aef0  RET 0x4
0082aef3  MOV EDX,dword ptr [ECX + 0x104]
0082aef9  PUSH ESI
0082aefa  MOV ESI,dword ptr [EBP + 0x8]
0082aefd  MOV dword ptr [ECX + 0x4],0xffffffff
0082af04  MOV dword ptr [ESI],EDX
0082af06  MOV dword ptr [ECX + 0x104],0x0
0082af10  POP ESI
0082af11  POP EBP
0082af12  RET 0x4
