006e7ab0  MOV EAX,dword ptr [ESP + 0x8]
006e7ab4  MOV byte ptr [ECX + 0x94],0x1
006e7abb  PUSH ESI
006e7abc  MOV ESI,dword ptr [EAX]
006e7abe  MOV EDX,ECX
006e7ac0  MOV dword ptr [EDX],ESI
006e7ac2  MOV ESI,dword ptr [EAX + 0x4]
006e7ac5  MOV dword ptr [EDX + 0x4],ESI
006e7ac8  MOV EAX,dword ptr [EAX + 0x8]
006e7acb  MOV dword ptr [EDX + 0x8],EAX
006e7ace  MOV EAX,dword ptr [ESP + 0x10]
006e7ad2  MOV EDX,dword ptr [EAX]
006e7ad4  MOV dword ptr [ECX + 0xa0],EDX
006e7ada  MOV EDX,dword ptr [EAX + 0x4]
006e7add  MOV dword ptr [ECX + 0xa4],EDX
006e7ae3  MOV EAX,dword ptr [EAX + 0x8]
006e7ae6  MOV dword ptr [ECX + 0xa8],EAX
006e7aec  MOV EAX,dword ptr [ESP + 0x8]
006e7af0  MOV EDX,dword ptr [EAX]
006e7af2  MOV dword ptr [ECX + 0x10],EDX
006e7af5  FLD float ptr [ECX + 0x10]
006e7af8  MOV EDX,dword ptr [EAX + 0x4]
006e7afb  FMUL float ptr [ECX + 0xa0]
006e7b01  MOV dword ptr [ECX + 0x14],EDX
006e7b04  MOV EDX,dword ptr [EAX + 0x8]
006e7b07  MOV dword ptr [ECX + 0x18],EDX
006e7b0a  MOV EDX,dword ptr [EAX + 0x10]
006e7b0d  MOV dword ptr [ECX + 0x20],EDX
006e7b10  MOV EDX,dword ptr [EAX + 0x14]
006e7b13  MOV dword ptr [ECX + 0x24],EDX
006e7b16  MOV EDX,dword ptr [EAX + 0x18]
006e7b19  MOV dword ptr [ECX + 0x28],EDX
006e7b1c  MOV EDX,dword ptr [EAX + 0x20]
006e7b1f  MOV dword ptr [ECX + 0x30],EDX
006e7b22  MOV EDX,dword ptr [EAX + 0x24]
006e7b25  MOV dword ptr [ECX + 0x34],EDX
006e7b28  MOV EAX,dword ptr [EAX + 0x28]
006e7b2b  FSTP float ptr [ECX + 0x40]
006e7b2e  FLD float ptr [ECX + 0x14]
006e7b31  MOV dword ptr [ECX + 0x38],EAX
006e7b34  FMUL float ptr [ECX + 0xa0]
006e7b3a  XOR EAX,EAX
006e7b3c  MOV dword ptr [ECX + 0x8c],EAX
006e7b42  MOV dword ptr [ECX + 0x7c],EAX
006e7b45  FSTP float ptr [ECX + 0x44]
006e7b48  MOV dword ptr [ECX + 0x90],0xc7c35000
006e7b52  FLD float ptr [ECX + 0xa0]
006e7b58  POP ESI
006e7b59  FMUL float ptr [ECX + 0x18]
006e7b5c  FSTP float ptr [ECX + 0x48]
006e7b5f  FLD float ptr [ECX + 0xa4]
006e7b65  FMUL float ptr [ECX + 0x20]
006e7b68  FSTP float ptr [ECX + 0x50]
006e7b6b  FLD float ptr [ECX + 0x24]
006e7b6e  FMUL float ptr [ECX + 0xa4]
006e7b74  FSTP float ptr [ECX + 0x54]
006e7b77  FLD float ptr [ECX + 0x28]
006e7b7a  FMUL float ptr [ECX + 0xa4]
006e7b80  FSTP float ptr [ECX + 0x58]
006e7b83  FLD float ptr [ECX + 0xa8]
006e7b89  FMUL float ptr [ECX + 0x30]
006e7b8c  FSTP float ptr [ECX + 0x60]
006e7b8f  FLD float ptr [ECX + 0xa8]
006e7b95  FMUL float ptr [ECX + 0x34]
006e7b98  FSTP float ptr [ECX + 0x64]
006e7b9b  FLD float ptr [ECX + 0xa8]
006e7ba1  FMUL float ptr [ECX + 0x38]
006e7ba4  FSTP float ptr [ECX + 0x68]
006e7ba7  RET 0xc
