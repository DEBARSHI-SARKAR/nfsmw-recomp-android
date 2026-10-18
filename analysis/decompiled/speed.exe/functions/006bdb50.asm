006bdb50  PUSH ECX
006bdb51  PUSH ESI
006bdb52  MOV ESI,dword ptr [ESP + 0x10]
006bdb56  PUSH ESI
006bdb57  CALL 0x0045dbf0
006bdb5c  FSTP float ptr [ESP + 0x8]
006bdb60  PUSH ESI
006bdb61  CALL 0x0045db30
006bdb66  FLD float ptr [ESP + 0xc]
006bdb6a  MOV EAX,dword ptr [ESP + 0x14]
006bdb6e  MOV EDX,dword ptr [ESP + 0xc]
006bdb72  FSTP float ptr [EAX]
006bdb74  ADD ESP,0x8
006bdb77  XOR ECX,ECX
006bdb79  FST float ptr [EAX + 0x4]
006bdb7c  MOV dword ptr [EAX + 0x14],EDX
006bdb7f  FCHS
006bdb81  MOV EDX,0x3f800000
006bdb86  FSTP float ptr [EAX + 0x10]
006bdb89  MOV dword ptr [EAX + 0x8],ECX
006bdb8c  MOV dword ptr [EAX + 0xc],ECX
006bdb8f  MOV dword ptr [EAX + 0x18],ECX
006bdb92  MOV dword ptr [EAX + 0x1c],ECX
006bdb95  MOV dword ptr [EAX + 0x20],ECX
006bdb98  MOV dword ptr [EAX + 0x24],ECX
006bdb9b  MOV dword ptr [EAX + 0x28],EDX
006bdb9e  MOV dword ptr [EAX + 0x2c],ECX
006bdba1  MOV dword ptr [EAX + 0x30],ECX
006bdba4  MOV dword ptr [EAX + 0x34],ECX
006bdba7  MOV dword ptr [EAX + 0x38],ECX
006bdbaa  MOV dword ptr [EAX + 0x3c],EDX
006bdbad  POP ESI
006bdbae  POP ECX
006bdbaf  RET
