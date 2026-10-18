007f2b7e  MOV EAX,ECX
007f2b80  OR dword ptr [EAX + 0x18],0xffffffff
007f2b84  OR dword ptr [EAX + 0x1c],0xffffffff
007f2b88  PUSH ESI
007f2b89  MOV ECX,0x2710
007f2b8e  PUSH 0x2
007f2b90  POP ESI
007f2b91  XOR EDX,EDX
007f2b93  INC EDX
007f2b94  MOV dword ptr [EAX + 0x4],ECX
007f2b97  MOV dword ptr [EAX + 0x8],ECX
007f2b9a  XOR ECX,ECX
007f2b9c  MOV dword ptr [EAX + 0x24],ESI
007f2b9f  MOV dword ptr [EAX + 0x30],ESI
007f2ba2  MOV dword ptr [EAX],EDX
007f2ba4  MOV dword ptr [EAX + 0xc],0xf4240
007f2bab  MOV dword ptr [EAX + 0x14],ECX
007f2bae  MOV dword ptr [EAX + 0x10],ECX
007f2bb1  MOV dword ptr [EAX + 0x20],EDX
007f2bb4  MOV dword ptr [EAX + 0x28],ECX
007f2bb7  MOV dword ptr [EAX + 0x2c],EDX
007f2bba  MOV dword ptr [EAX + 0x34],ECX
007f2bbd  MOV dword ptr [EAX + 0x38],ECX
007f2bc0  MOV dword ptr [EAX + 0x3c],ECX
007f2bc3  MOV dword ptr [EAX + 0x40],ECX
007f2bc6  MOV dword ptr [EAX + 0x44],ECX
007f2bc9  MOV dword ptr [EAX + 0x48],ECX
007f2bcc  MOV dword ptr [EAX + 0x4c],ECX
007f2bcf  POP ESI
007f2bd0  RET
