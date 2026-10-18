007a9ea0  MOV EDX,dword ptr [ESP + 0x8]
007a9ea4  MOV EAX,ECX
007a9ea6  MOV ECX,dword ptr [ESP + 0x4]
007a9eaa  MOV dword ptr [EAX + 0xc],ECX
007a9ead  MOV ECX,dword ptr [ESP + 0xc]
007a9eb1  MOV dword ptr [EAX + 0x10],EDX
007a9eb4  MOV EDX,dword ptr [ESP + 0x10]
007a9eb8  MOV dword ptr [EAX + 0x14],ECX
007a9ebb  MOV CL,byte ptr [ESP + 0x14]
007a9ebf  MOV dword ptr [EAX + 0x18],EDX
007a9ec2  MOV EDX,dword ptr [ESP + 0x18]
007a9ec6  MOV byte ptr [EAX + 0x1c],CL
007a9ec9  MOV ECX,dword ptr [ESP + 0x1c]
007a9ecd  MOV dword ptr [EAX + 0x20],EDX
007a9ed0  MOV DL,byte ptr [ESP + 0x20]
007a9ed4  MOV dword ptr [EAX],0x8b7518
007a9eda  MOV dword ptr [EAX + 0x24],ECX
007a9edd  MOV byte ptr [EAX + 0x28],DL
007a9ee0  RET 0x20
