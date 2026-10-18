006d1a40  SUB ESP,0x80
006d1a46  PUSH ESI
006d1a47  MOV ESI,dword ptr [ESP + 0x90]
006d1a4e  TEST ESI,ESI
006d1a50  JNZ 0x006d1a57
006d1a52  MOV ESI,0x987ab0
006d1a57  MOV EAX,dword ptr [ESP + 0x88]
006d1a5e  MOV EDX,dword ptr [EAX + 0x4]
006d1a61  MOV dword ptr [ESP + 0x8],EDX
006d1a65  XOR EDX,EDX
006d1a67  MOV DH,byte ptr [EAX + 0x83]
006d1a6d  MOV ECX,dword ptr [EAX]
006d1a6f  MOV dword ptr [ESP + 0x4],ECX
006d1a73  MOV ECX,dword ptr [EAX + 0x8]
006d1a76  MOV dword ptr [ESP + 0xc],ECX
006d1a7a  MOVZX ECX,byte ptr [EAX + 0x81]
006d1a81  MOV DL,byte ptr [EAX + 0x80]
006d1a87  SHL EDX,0x8
006d1a8a  OR EDX,ECX
006d1a8c  MOVZX ECX,byte ptr [EAX + 0x82]
006d1a93  SHL EDX,0x8
006d1a96  OR EDX,ECX
006d1a98  MOV ECX,dword ptr [EAX + 0x44]
006d1a9b  MOV dword ptr [ESP + 0x18],ECX
006d1a9f  MOV ECX,dword ptr [EAX + 0x14]
006d1aa2  MOV dword ptr [ESP + 0x28],ECX
006d1aa6  XOR ECX,ECX
006d1aa8  MOV CH,byte ptr [EAX + 0x87]
006d1aae  MOV dword ptr [ESP + 0x10],EDX
006d1ab2  MOV EDX,dword ptr [EAX + 0x40]
006d1ab5  MOV dword ptr [ESP + 0x14],EDX
006d1ab9  MOV EDX,dword ptr [EAX + 0x10]
006d1abc  MOV dword ptr [ESP + 0x24],EDX
006d1ac0  MOV EDX,dword ptr [EAX + 0x18]
006d1ac3  MOV CL,byte ptr [EAX + 0x84]
006d1ac9  MOV dword ptr [ESP + 0x2c],EDX
006d1acd  MOVZX EDX,byte ptr [EAX + 0x85]
006d1ad4  SHL ECX,0x8
006d1ad7  OR ECX,EDX
006d1ad9  MOVZX EDX,byte ptr [EAX + 0x86]
006d1ae0  SHL ECX,0x8
006d1ae3  OR ECX,EDX
006d1ae5  MOV EDX,dword ptr [EAX + 0x4c]
006d1ae8  MOV dword ptr [ESP + 0x38],EDX
006d1aec  MOV EDX,dword ptr [EAX + 0x24]
006d1aef  MOV dword ptr [ESP + 0x48],EDX
006d1af3  XOR EDX,EDX
006d1af5  MOV DH,byte ptr [EAX + 0x8b]
006d1afb  MOV dword ptr [ESP + 0x30],ECX
006d1aff  MOV ECX,dword ptr [EAX + 0x48]
006d1b02  MOV dword ptr [ESP + 0x34],ECX
006d1b06  MOV ECX,dword ptr [EAX + 0x20]
006d1b09  MOV dword ptr [ESP + 0x44],ECX
006d1b0d  MOV ECX,dword ptr [EAX + 0x28]
006d1b10  MOV DL,byte ptr [EAX + 0x88]
006d1b16  MOV dword ptr [ESP + 0x4c],ECX
006d1b1a  MOVZX ECX,byte ptr [EAX + 0x89]
006d1b21  SHL EDX,0x8
006d1b24  OR EDX,ECX
006d1b26  MOVZX ECX,byte ptr [EAX + 0x8a]
006d1b2d  SHL EDX,0x8
006d1b30  OR EDX,ECX
006d1b32  MOV ECX,dword ptr [EAX + 0x54]
006d1b35  MOV dword ptr [ESP + 0x58],ECX
006d1b39  MOV ECX,dword ptr [EAX + 0x34]
006d1b3c  MOV dword ptr [ESP + 0x68],ECX
006d1b40  XOR ECX,ECX
006d1b42  MOV CH,byte ptr [EAX + 0x8f]
006d1b48  MOV dword ptr [ESP + 0x50],EDX
006d1b4c  MOV EDX,dword ptr [EAX + 0x50]
006d1b4f  MOV dword ptr [ESP + 0x54],EDX
006d1b53  MOV EDX,dword ptr [EAX + 0x30]
006d1b56  MOV dword ptr [ESP + 0x64],EDX
006d1b5a  MOV EDX,dword ptr [EAX + 0x38]
006d1b5d  MOV CL,byte ptr [EAX + 0x8c]
006d1b63  MOV dword ptr [ESP + 0x6c],EDX
006d1b67  MOVZX EDX,byte ptr [EAX + 0x8d]
006d1b6e  SHL ECX,0x8
006d1b71  OR ECX,EDX
006d1b73  MOVZX EDX,byte ptr [EAX + 0x8e]
006d1b7a  SHL ECX,0x8
006d1b7d  OR ECX,EDX
006d1b7f  MOV EDX,dword ptr [EAX + 0x5c]
006d1b82  MOV dword ptr [ESP + 0x70],ECX
006d1b86  MOV ECX,dword ptr [EAX + 0x58]
006d1b89  MOV dword ptr [ESP + 0x74],ECX
006d1b8d  MOV dword ptr [ESP + 0x78],EDX
006d1b91  MOV EAX,dword ptr [ESP + 0x8c]
006d1b98  TEST EAX,EAX
006d1b9a  JZ 0x006d1ba7
006d1b9c  PUSH 0x0
006d1b9e  PUSH EAX
006d1b9f  CALL 0x006c6cc0
006d1ba4  ADD ESP,0x8
006d1ba7  MOV EAX,[0x00982a20]
006d1bac  MOV ECX,dword ptr [EAX + 0x4]
006d1baf  PUSH ECX
006d1bb0  PUSH ESI
006d1bb1  CALL 0x006c8000
006d1bb6  MOV EDX,dword ptr [0x00982bc4]
006d1bbc  ADD ESP,0x8
006d1bbf  TEST EDX,EDX
006d1bc1  JZ 0x006d1be0
006d1bc3  MOV ECX,dword ptr [0x00982c80]
006d1bc9  MOV EAX,dword ptr [ECX + 0x48]
006d1bcc  MOV ESI,dword ptr [EAX]
006d1bce  PUSH EDX
006d1bcf  MOV EDX,dword ptr [ECX + 0x44]
006d1bd2  MOV ECX,dword ptr [EDX + 0x2a4]
006d1bd8  PUSH ECX
006d1bd9  PUSH EAX
006d1bda  CALL dword ptr [ESI + 0xd0]
006d1be0  MOV AL,[0x008f9358]
006d1be5  TEST AL,AL
006d1be7  POP ESI
006d1be8  JZ 0x006d1c45
006d1bea  MOV EDX,dword ptr [0x00982c80]
006d1bf0  MOV EAX,dword ptr [EDX + 0x48]
006d1bf3  MOV ECX,dword ptr [EAX]
006d1bf5  PUSH EAX
006d1bf6  CALL dword ptr [ECX + 0x104]
006d1bfc  MOV EDX,dword ptr [0x00982c80]
006d1c02  MOV dword ptr [0x00982ca0],0x0
006d1c0c  MOV EAX,dword ptr [EDX + 0x48]
006d1c0f  MOV ECX,dword ptr [EAX]
006d1c11  PUSH 0x0
006d1c13  PUSH EAX
006d1c14  CALL dword ptr [ECX + 0x100]
006d1c1a  MOV EAX,[0x00982bdc]
006d1c1f  MOV EDX,dword ptr [EAX]
006d1c21  PUSH 0x20
006d1c23  LEA ECX,[ESP + 0x4]
006d1c27  PUSH ECX
006d1c28  PUSH 0x2
006d1c2a  PUSH 0x6
006d1c2c  PUSH EAX
006d1c2d  CALL dword ptr [EDX + 0x14c]
006d1c33  MOV EDX,dword ptr [0x00982c80]
006d1c39  MOV EAX,dword ptr [EDX + 0x48]
006d1c3c  MOV ECX,dword ptr [EAX]
006d1c3e  PUSH EAX
006d1c3f  CALL dword ptr [ECX + 0x108]
006d1c45  CALL 0x006c6ed0
006d1c4a  ADD ESP,0x80
006d1c50  RET
