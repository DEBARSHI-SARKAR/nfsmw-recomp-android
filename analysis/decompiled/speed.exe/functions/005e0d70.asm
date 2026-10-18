005e0d70  PUSH EBP
005e0d71  MOV EBP,ESP
005e0d73  SUB ESP,0x28
005e0d76  PUSH ESI
005e0d77  PUSH EAX
005e0d78  MOV EAX,0xcfcecdcc
005e0d7d  MOV EAX,0x5e0d7d
005e0d82  MOV EAX,0x1
005e0d87  MOV EAX,0x0
005e0d8c  MOV EAX,0xcfcecdcc
005e0d91  POP EAX
005e0d92  MOV EAX,dword ptr [EBP + 0x8]
005e0d95  MOV ECX,dword ptr [EAX + 0x14]
005e0d98  MOV dword ptr [EBP + -0x20],ECX
005e0d9b  MOV EDX,dword ptr [EBP + 0x8]
005e0d9e  MOV EAX,dword ptr [EDX + 0x18]
005e0da1  MOV dword ptr [EBP + -0x1c],EAX
005e0da4  MOV ECX,dword ptr [EBP + 0x8]
005e0da7  MOV EDX,dword ptr [ECX + 0x1c]
005e0daa  MOV dword ptr [EBP + -0x18],EDX
005e0dad  MOV EAX,dword ptr [EBP + 0x8]
005e0db0  MOV ECX,dword ptr [EAX + 0x20]
005e0db3  MOV dword ptr [EBP + -0x14],ECX
005e0db6  MOV EDX,dword ptr [EBP + 0x8]
005e0db9  MOV EAX,dword ptr [EDX + 0x24]
005e0dbc  MOV dword ptr [EBP + -0xc],EAX
005e0dbf  MOV ECX,dword ptr [EBP + 0x8]
005e0dc2  MOV EDX,dword ptr [ECX + 0x28]
005e0dc5  MOV dword ptr [EBP + -0x4],EDX
005e0dc8  MOV EAX,dword ptr [EBP + 0x8]
005e0dcb  MOV ECX,dword ptr [EAX + 0x2c]
005e0dce  MOV dword ptr [EBP + -0x28],ECX
005e0dd1  MOV EDX,dword ptr [EBP + 0x8]
005e0dd4  MOV EAX,dword ptr [EDX + 0x30]
005e0dd7  MOV dword ptr [EBP + -0x24],EAX
005e0dda  MOV ECX,dword ptr [EBP + 0x8]
005e0ddd  MOV EDX,dword ptr [ECX + 0x34]
005e0de0  MOV dword ptr [EBP + -0x8],EDX
005e0de3  MOV EAX,dword ptr [EBP + 0xc]
005e0de6  AND EAX,dword ptr [EBP + -0x20]
005e0de9  MOV ECX,dword ptr [EBP + 0xc]
005e0dec  AND ECX,dword ptr [EBP + -0x20]
005e0def  ADD ECX,dword ptr [EBP + -0x4]
005e0df2  IMUL ECX,dword ptr [EBP + -0x28]
005e0df6  XOR EAX,ECX
005e0df8  MOV EDX,dword ptr [EBP + 0xc]
005e0dfb  AND EDX,dword ptr [EBP + -0x20]
005e0dfe  ADD EDX,dword ptr [EBP + -0x24]
005e0e01  IMUL EDX,dword ptr [EBP + -0x8]
005e0e05  XOR EAX,EDX
005e0e07  MOV ECX,dword ptr [EBP + -0x20]
005e0e0a  NOT ECX
005e0e0c  AND EAX,ECX
005e0e0e  XOR EAX,dword ptr [EBP + 0xc]
005e0e11  MOV EDX,dword ptr [EBP + 0xc]
005e0e14  AND EDX,dword ptr [EBP + -0x20]
005e0e17  MOV ECX,dword ptr [EBP + 0xc]
005e0e1a  AND ECX,dword ptr [EBP + -0x20]
005e0e1d  ADD ECX,dword ptr [EBP + -0x4]
005e0e20  IMUL ECX,dword ptr [EBP + -0x28]
005e0e24  XOR EDX,ECX
005e0e26  MOV ECX,dword ptr [EBP + 0xc]
005e0e29  AND ECX,dword ptr [EBP + -0x20]
005e0e2c  ADD ECX,dword ptr [EBP + -0x24]
005e0e2f  IMUL ECX,dword ptr [EBP + -0x8]
005e0e33  XOR EDX,ECX
005e0e35  MOV ECX,dword ptr [EBP + -0x20]
005e0e38  NOT ECX
005e0e3a  AND EDX,ECX
005e0e3c  XOR EDX,dword ptr [EBP + 0xc]
005e0e3f  MOV ECX,dword ptr [EBP + -0x20]
005e0e42  NOT ECX
005e0e44  AND EDX,ECX
005e0e46  MOV ECX,dword ptr [EBP + 0xc]
005e0e49  AND ECX,dword ptr [EBP + -0x20]
005e0e4c  MOV ESI,dword ptr [EBP + 0xc]
005e0e4f  AND ESI,dword ptr [EBP + -0x20]
005e0e52  ADD ESI,dword ptr [EBP + -0x4]
005e0e55  IMUL ESI,dword ptr [EBP + -0x28]
005e0e59  XOR ECX,ESI
005e0e5b  MOV ESI,dword ptr [EBP + 0xc]
005e0e5e  AND ESI,dword ptr [EBP + -0x20]
005e0e61  ADD ESI,dword ptr [EBP + -0x24]
005e0e64  IMUL ESI,dword ptr [EBP + -0x8]
005e0e68  XOR ECX,ESI
005e0e6a  MOV ESI,dword ptr [EBP + -0x20]
005e0e6d  NOT ESI
005e0e6f  AND ECX,ESI
005e0e71  XOR ECX,dword ptr [EBP + 0xc]
005e0e74  MOV ESI,dword ptr [EBP + -0x20]
005e0e77  NOT ESI
005e0e79  AND ECX,ESI
005e0e7b  ADD ECX,dword ptr [EBP + -0x18]
005e0e7e  IMUL ECX,dword ptr [EBP + -0x1c]
005e0e82  XOR EDX,ECX
005e0e84  MOV ECX,dword ptr [EBP + 0xc]
005e0e87  AND ECX,dword ptr [EBP + -0x20]
005e0e8a  MOV ESI,dword ptr [EBP + 0xc]
005e0e8d  AND ESI,dword ptr [EBP + -0x20]
005e0e90  ADD ESI,dword ptr [EBP + -0x4]
005e0e93  IMUL ESI,dword ptr [EBP + -0x28]
005e0e97  XOR ECX,ESI
005e0e99  MOV ESI,dword ptr [EBP + 0xc]
005e0e9c  AND ESI,dword ptr [EBP + -0x20]
005e0e9f  ADD ESI,dword ptr [EBP + -0x24]
005e0ea2  IMUL ESI,dword ptr [EBP + -0x8]
005e0ea6  XOR ECX,ESI
005e0ea8  MOV ESI,dword ptr [EBP + -0x20]
005e0eab  NOT ESI
005e0ead  AND ECX,ESI
005e0eaf  XOR ECX,dword ptr [EBP + 0xc]
005e0eb2  MOV ESI,dword ptr [EBP + -0x20]
005e0eb5  NOT ESI
005e0eb7  AND ECX,ESI
005e0eb9  ADD ECX,dword ptr [EBP + -0xc]
005e0ebc  IMUL ECX,dword ptr [EBP + -0x14]
005e0ec0  XOR EDX,ECX
005e0ec2  AND EDX,dword ptr [EBP + -0x20]
005e0ec5  XOR EAX,EDX
005e0ec7  MOV dword ptr [EBP + -0x10],EAX
005e0eca  PUSH EAX
005e0ecb  MOV EAX,0xcfcecdcc
005e0ed0  MOV EAX,0x5e0d7d
005e0ed5  MOV EAX,0x0
005e0eda  MOV EAX,0x0
005e0edf  MOV EAX,0xcecdcccb
005e0ee4  POP EAX
005e0ee5  MOV EAX,dword ptr [EBP + -0x10]
005e0ee8  POP ESI
005e0ee9  MOV ESP,EBP
005e0eeb  POP EBP
005e0eec  RET
