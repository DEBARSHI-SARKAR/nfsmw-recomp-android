007c7d80  PUSH EBP
007c7d81  MOV EBP,ESP
007c7d83  PUSH -0x1
007c7d85  PUSH 0x8b8750
007c7d8a  PUSH 0x7cd5e4
007c7d8f  MOV EAX,FS:[0x0]
007c7d95  PUSH EAX
007c7d96  MOV dword ptr FS:[0x0],ESP
007c7d9d  ADD ESP,-0xc
007c7da0  PUSH EBX
007c7da1  PUSH ESI
007c7da2  PUSH EDI
007c7da3  PUSH 0x4
007c7da5  CALL 0x007d0fd0
007c7daa  ADD ESP,0x4
007c7dad  MOV dword ptr [EBP + -0x4],0x0
007c7db4  MOV EAX,[0x00906300]
007c7db9  MOV dword ptr [EBP + -0x1c],EAX
007c7dbc  CMP dword ptr [EBP + 0x8],-0x1
007c7dc0  JZ 0x007c7dfa
007c7dc2  MOV ECX,dword ptr [EBP + 0x8]
007c7dc5  AND ECX,0x4
007c7dc8  JZ 0x007c7dd6
007c7dca  MOV dword ptr [0x009baa14],0x1
007c7dd4  JMP 0x007c7de8
007c7dd6  MOV EDX,dword ptr [EBP + 0x8]
007c7dd9  SAR EDX,0x10
007c7ddc  AND EDX,0xffff
007c7de2  MOV dword ptr [0x009baa14],EDX
007c7de8  MOV dword ptr [0x009baa04],0x0
007c7df2  MOV EAX,dword ptr [EBP + 0x8]
007c7df5  MOV [0x00906300],EAX
007c7dfa  MOV dword ptr [EBP + -0x4],0xffffffff
007c7e01  CALL 0x007c7e08
007c7e06  JMP 0x007c7e13
