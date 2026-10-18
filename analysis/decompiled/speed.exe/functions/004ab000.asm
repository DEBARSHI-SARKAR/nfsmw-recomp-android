004ab000  MOV EAX,ECX
004ab002  MOV ECX,dword ptr [ESP + 0x4]
004ab006  MOV EDX,dword ptr [ECX + 0x8]
004ab009  MOV dword ptr [EAX],EDX
004ab00b  XOR EDX,EDX
004ab00d  MOV byte ptr [EAX + 0x4],DL
004ab010  MOV dword ptr [EAX + 0x8],EDX
004ab013  PUSH ESI
004ab014  MOV ESI,dword ptr [ECX + 0x14]
004ab017  MOV dword ptr [EAX + 0xc],ESI
004ab01a  MOVZX ECX,word ptr [ECX + 0xc]
004ab01e  MOV dword ptr [EAX + 0x10],ECX
004ab021  MOV CL,byte ptr [ESP + 0xc]
004ab025  MOV dword ptr [EAX + 0x14],0xffffffff
004ab02c  MOV byte ptr [EAX + 0x18],0x1
004ab030  MOV byte ptr [EAX + 0x19],CL
004ab033  MOV ECX,dword ptr [0x00925ae8]
004ab039  MOV dword ptr [EAX + 0x1c],ECX
004ab03c  MOV dword ptr [EAX + 0x20],EDX
004ab03f  MOV dword ptr [EAX + 0x24],EDX
004ab042  MOV dword ptr [EAX + 0x28],EDX
004ab045  POP ESI
004ab046  RET 0x8
