006bde60  PUSH EBP
006bde61  MOV EBP,ESP
006bde63  AND ESP,0xfffffff0
006bde66  SUB ESP,0x8c
006bde6c  PUSH ESI
006bde6d  MOV EAX,dword ptr [EBP + 0xc]
006bde70  MOV EDX,dword ptr [EAX + 0x10]
006bde73  FLD float ptr [EAX + 0x30]
006bde76  MOV ECX,dword ptr [EAX]
006bde78  FCHS
006bde7a  MOV dword ptr [ESP + 0x14],EDX
006bde7e  FSTP float ptr [ESP + 0x80]
006bde85  MOV EDX,dword ptr [EAX + 0x4]
006bde88  FLD float ptr [EAX + 0x34]
006bde8b  MOV dword ptr [ESP + 0x10],ECX
006bde8f  FCHS
006bde91  MOV ECX,dword ptr [EAX + 0x20]
006bde94  FSTP float ptr [ESP + 0x84]
006bde9b  FLD float ptr [EAX + 0x38]
006bde9e  MOV dword ptr [ESP + 0x20],EDX
006bdea2  MOV EDX,dword ptr [EAX + 0x24]
006bdea5  FCHS
006bdea7  MOV dword ptr [ESP + 0x18],ECX
006bdeab  FSTP float ptr [ESP + 0x88]
006bdeb2  MOV ECX,dword ptr [EAX + 0x14]
006bdeb5  MOV dword ptr [ESP + 0x28],EDX
006bdeb9  MOV EDX,dword ptr [EAX + 0x18]
006bdebc  MOV dword ptr [ESP + 0x24],ECX
006bdec0  MOV ECX,dword ptr [EAX + 0x8]
006bdec3  MOV ESI,dword ptr [EBP + 0x8]
006bdec6  MOV dword ptr [ESP + 0x34],EDX
006bdeca  MOV dword ptr [ESP + 0x30],ECX
006bdece  MOV ECX,dword ptr [EAX + 0x28]
006bded1  LEA EDX,[ESP + 0x10]
006bded5  PUSH EDX
006bded6  LEA EAX,[ESP + 0x54]
006bdeda  PUSH EAX
006bdedb  PUSH ESI
006bdedc  MOV dword ptr [ESP + 0x28],0x0
006bdee4  MOV dword ptr [ESP + 0x38],0x0
006bdeec  MOV dword ptr [ESP + 0x44],ECX
006bdef0  MOV dword ptr [ESP + 0x48],0x0
006bdef8  MOV dword ptr [ESP + 0x4c],0x0
006bdf00  MOV dword ptr [ESP + 0x50],0x0
006bdf08  MOV dword ptr [ESP + 0x54],0x0
006bdf10  MOV dword ptr [ESP + 0x58],0x3f800000
006bdf18  MOV dword ptr [ESP + 0x5c],0x3f800000
006bdf20  MOV dword ptr [ESP + 0x60],0x0
006bdf28  MOV dword ptr [ESP + 0x64],0x0
006bdf30  MOV dword ptr [ESP + 0x68],0x0
006bdf38  MOV dword ptr [ESP + 0x6c],0x0
006bdf40  MOV dword ptr [ESP + 0x70],0x3f800000
006bdf48  MOV dword ptr [ESP + 0x74],0x0
006bdf50  MOV dword ptr [ESP + 0x78],0x0
006bdf58  MOV dword ptr [ESP + 0x7c],0x0
006bdf60  MOV dword ptr [ESP + 0x80],0x0
006bdf6b  MOV dword ptr [ESP + 0x84],0x3f800000
006bdf76  MOV dword ptr [ESP + 0x88],0x0
006bdf81  MOV dword ptr [ESP + 0x98],0x3f800000
006bdf8c  CALL 0x007e7d5e
006bdf91  MOV EAX,ESI
006bdf93  POP ESI
006bdf94  MOV ESP,EBP
006bdf96  POP EBP
006bdf97  RET
