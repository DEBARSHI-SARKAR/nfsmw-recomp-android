00467b10  MOV EAX,ECX
00467b12  MOV EDX,dword ptr [ESP + 0x8]
00467b16  FLD float ptr [EDX]
00467b18  XOR ECX,ECX
00467b1a  FSTP float ptr [EAX + 0x24]
00467b1d  MOV dword ptr [EAX],ECX
00467b1f  MOV dword ptr [EAX + 0x4],ECX
00467b22  MOV dword ptr [EAX + 0x8],ECX
00467b25  MOV dword ptr [EAX + 0xc],ECX
00467b28  MOV dword ptr [EAX + 0x20],ECX
00467b2b  MOV word ptr [EAX + 0x28],CX
00467b2f  MOV dword ptr [EAX + 0x10],ECX
00467b32  MOV dword ptr [EAX + 0x14],ECX
00467b35  MOV dword ptr [EAX + 0x18],ECX
00467b38  MOV dword ptr [EAX + 0x1c],ECX
00467b3b  PUSH ESI
00467b3c  MOV SI,word ptr [ESP + 0x8]
00467b41  MOV word ptr [EAX + 0x2a],SI
00467b45  FLD float ptr [EDX + 0x4]
00467b48  MOV word ptr [EAX + 0x56],SI
00467b4c  FSTP float ptr [EAX + 0x50]
00467b4f  MOV dword ptr [EAX + 0x2c],ECX
00467b52  MOV dword ptr [EAX + 0x30],ECX
00467b55  MOV dword ptr [EAX + 0x34],ECX
00467b58  MOV dword ptr [EAX + 0x38],ECX
00467b5b  MOV dword ptr [EAX + 0x4c],ECX
00467b5e  MOV word ptr [EAX + 0x54],CX
00467b62  MOV dword ptr [EAX + 0x3c],ECX
00467b65  MOV dword ptr [EAX + 0x40],ECX
00467b68  MOV dword ptr [EAX + 0x44],ECX
00467b6b  MOV dword ptr [EAX + 0x48],ECX
00467b6e  FLD float ptr [EDX + 0x8]
00467b71  MOV word ptr [EAX + 0x82],SI
00467b78  FSTP float ptr [EAX + 0x7c]
00467b7b  MOV dword ptr [EAX + 0x58],ECX
00467b7e  MOV dword ptr [EAX + 0x5c],ECX
00467b81  MOV dword ptr [EAX + 0x60],ECX
00467b84  MOV dword ptr [EAX + 0x64],ECX
00467b87  MOV dword ptr [EAX + 0x78],ECX
00467b8a  MOV word ptr [EAX + 0x80],CX
00467b91  MOV dword ptr [EAX + 0x68],ECX
00467b94  MOV dword ptr [EAX + 0x6c],ECX
00467b97  MOV dword ptr [EAX + 0x70],ECX
00467b9a  MOV dword ptr [EAX + 0x74],ECX
00467b9d  POP ESI
00467b9e  RET 0x8
