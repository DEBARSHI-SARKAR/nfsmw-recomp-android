007d4c60  PUSH EBP
007d4c61  MOV EBP,ESP
007d4c63  PUSH -0x1
007d4c65  PUSH 0x8bd1a8
007d4c6a  PUSH 0x7cd5e4
007d4c6f  MOV EAX,FS:[0x0]
007d4c75  PUSH EAX
007d4c76  MOV dword ptr FS:[0x0],ESP
007d4c7d  ADD ESP,-0x10
007d4c80  PUSH EBX
007d4c81  PUSH ESI
007d4c82  PUSH EDI
007d4c83  CMP dword ptr [EBP + 0xc],-0x20
007d4c87  JBE 0x007d4c90
007d4c89  XOR EAX,EAX
007d4c8b  JMP 0x007d4d6f
007d4c90  CMP dword ptr [0x009c531c],0x3
007d4c97  JNZ 0x007d4d46
007d4c9d  PUSH 0x4
007d4c9f  CALL 0x007d0fd0
007d4ca4  ADD ESP,0x4
007d4ca7  MOV dword ptr [EBP + -0x4],0x0
007d4cae  MOV EAX,dword ptr [EBP + 0x8]
007d4cb1  PUSH EAX
007d4cb2  CALL 0x007d5200
007d4cb7  ADD ESP,0x4
007d4cba  MOV dword ptr [EBP + -0x20],EAX
007d4cbd  CMP dword ptr [EBP + -0x20],0x0
007d4cc1  JZ 0x007d4cf3
007d4cc3  MOV dword ptr [EBP + -0x1c],0x0
007d4cca  MOV ECX,dword ptr [EBP + 0xc]
007d4ccd  CMP ECX,dword ptr [0x009c52f0]
007d4cd3  JA 0x007d4cf3
007d4cd5  MOV EDX,dword ptr [EBP + 0xc]
007d4cd8  PUSH EDX
007d4cd9  MOV EAX,dword ptr [EBP + 0x8]
007d4cdc  PUSH EAX
007d4cdd  MOV ECX,dword ptr [EBP + -0x20]
007d4ce0  PUSH ECX
007d4ce1  CALL 0x007d60a0
007d4ce6  ADD ESP,0xc
007d4ce9  TEST EAX,EAX
007d4ceb  JZ 0x007d4cf3
007d4ced  MOV EDX,dword ptr [EBP + 0x8]
007d4cf0  MOV dword ptr [EBP + -0x1c],EDX
007d4cf3  MOV dword ptr [EBP + -0x4],0xffffffff
007d4cfa  CALL 0x007d4d01
007d4cff  JMP 0x007d4d0c
