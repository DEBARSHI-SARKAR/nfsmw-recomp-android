007f6de8  PUSH EBP
007f6de9  MOV EBP,ESP
007f6deb  PUSH ESI
007f6dec  MOV ESI,ECX
007f6dee  PUSH EDI
007f6def  LEA EDI,[ESI + 0x108]
007f6df5  CMP dword ptr [EDI],0x0
007f6df8  JNZ 0x007f6e3b
007f6dfa  CALL 0x007f6337
007f6dff  PUSH dword ptr [EBP + 0x18]
007f6e02  LEA EAX,[EBP + 0x8]
007f6e05  PUSH dword ptr [EBP + 0x14]
007f6e08  LEA ECX,[ESI + 0x8]
007f6e0b  PUSH EAX
007f6e0c  PUSH 0x1
007f6e0e  MOV dword ptr [EDI],0x10
007f6e14  CALL 0x007f60f4
007f6e19  MOV EAX,dword ptr [ESI + 0x18]
007f6e1c  MOV ECX,dword ptr [EBP + 0xc]
007f6e1f  MOV dword ptr [EAX + 0x44],ECX
007f6e22  MOV EAX,dword ptr [ESI + 0x18]
007f6e25  MOV ECX,dword ptr [EBP + 0x10]
007f6e28  MOV dword ptr [EAX + 0x48],ECX
007f6e2b  MOV EAX,dword ptr [ESI + 0x18]
007f6e2e  MOV ECX,ESI
007f6e30  MOV byte ptr [EAX + 0x5c],0x1
007f6e34  CALL 0x007f6455
007f6e39  JMP 0x007f6e76
007f6e3b  PUSH dword ptr [EBP + 0x18]
007f6e3e  LEA EAX,[EBP + 0x8]
007f6e41  PUSH dword ptr [EBP + 0x14]
007f6e44  LEA ECX,[ESI + 0x5c]
007f6e47  PUSH EAX
007f6e48  PUSH 0x1
007f6e4a  CALL 0x007f60f4
007f6e4f  MOV EAX,dword ptr [ESI + 0x6c]
007f6e52  MOV ECX,dword ptr [EBP + 0xc]
007f6e55  MOV dword ptr [EAX + 0x44],ECX
007f6e58  MOV EAX,dword ptr [ESI + 0x6c]
007f6e5b  MOV ECX,dword ptr [EBP + 0x10]
007f6e5e  MOV dword ptr [EAX + 0x48],ECX
007f6e61  MOV EAX,dword ptr [ESI + 0x6c]
007f6e64  MOV byte ptr [EAX + 0x5c],0x1
007f6e68  MOV EAX,dword ptr [ESI]
007f6e6a  CMP dword ptr [EAX + 0x6c],0x0
007f6e6e  JNZ 0x007f6e76
007f6e70  DEC dword ptr [ESI + 0x104]
007f6e76  POP EDI
007f6e77  POP ESI
007f6e78  POP EBP
007f6e79  RET 0x14
