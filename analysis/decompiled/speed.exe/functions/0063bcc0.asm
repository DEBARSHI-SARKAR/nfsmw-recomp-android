0063bcc0  PUSH -0x1
0063bcc2  PUSH 0x8795a8
0063bcc7  MOV EAX,FS:[0x0]
0063bccd  PUSH EAX
0063bcce  MOV dword ptr FS:[0x0],ESP
0063bcd5  SUB ESP,0x70
0063bcd8  PUSH EBX
0063bcd9  PUSH EBP
0063bcda  PUSH ESI
0063bcdb  MOV ESI,ECX
0063bcdd  PUSH EDI
0063bcde  MOV dword ptr [ESP + 0x14],ESI
0063bce2  MOV dword ptr [ESI],0x8a7670
0063bce8  MOV EAX,dword ptr [ESI + 0x8]
0063bceb  TEST EAX,EAX
0063bced  MOV dword ptr [ESP + 0x88],0x0
0063bcf8  JZ 0x0063be15
0063bcfe  MOV ECX,dword ptr [0x0092febc]
0063bd04  PUSH EAX
0063bd05  MOV EAX,[0x0092feb4]
0063bd0a  LEA EDX,[EAX + ECX*0x8]
0063bd0d  PUSH EDX
0063bd0e  PUSH EAX
0063bd0f  CALL 0x005d51f0
0063bd14  ADD ESP,0xc
0063bd17  TEST EAX,EAX
0063bd19  JZ 0x0063be15
0063bd1f  MOV EBX,dword ptr [EAX + 0x4]
0063bd22  TEST EBX,EBX
0063bd24  JZ 0x0063be15
0063bd2a  MOV ECX,dword ptr [EBX + 0x4]
0063bd2d  PUSH 0x404040
0063bd32  CALL 0x005d59f0
0063bd37  MOV EDI,EAX
0063bd39  TEST EDI,EDI
0063bd3b  JZ 0x0063be15
0063bd41  MOV EAX,dword ptr [EBX]
0063bd43  MOV ECX,EBX
0063bd45  CALL dword ptr [EAX + 0x24]
0063bd48  TEST AL,AL
0063bd4a  JZ 0x0063be15
0063bd50  MOV EAX,dword ptr [ESI + 0xc]
0063bd53  MOV EDX,dword ptr [EDI]
0063bd55  PUSH EAX
0063bd56  MOV ECX,EDI
0063bd58  CALL dword ptr [EDX + 0xc]
0063bd5b  MOV ECX,dword ptr [EAX]
0063bd5d  MOV EDX,dword ptr [EAX + 0x4]
0063bd60  MOV EAX,dword ptr [EAX + 0x8]
0063bd63  MOV dword ptr [ESP + 0x18],ECX
0063bd67  PUSH 0x3f800000
0063bd6c  LEA ECX,[ESP + 0x1c]
0063bd70  MOV dword ptr [ESP + 0x20],EDX
0063bd74  PUSH ECX
0063bd75  LEA EDX,[ESP + 0x30]
0063bd79  PUSH EDX
0063bd7a  MOV dword ptr [ESP + 0x2c],EAX
0063bd7e  CALL 0x004011c0
0063bd83  MOV EDI,dword ptr [EAX]
0063bd85  MOV EBX,dword ptr [EAX + 0x4]
0063bd88  MOV EBP,dword ptr [EAX + 0x8]
0063bd8b  MOV EAX,dword ptr [EAX + 0xc]
0063bd8e  PUSH 0x8a7cb0
0063bd93  MOV dword ptr [ESP + 0x34],EAX
0063bd97  CALL 0x005cc240
0063bd9c  MOV ECX,dword ptr [ESI + 0x8]
0063bd9f  ADD ESP,0x10
0063bda2  PUSH 0x0
0063bda4  PUSH ECX
0063bda5  MOV ECX,dword ptr [0x008a2fc4]
0063bdab  SUB ESP,0x10
0063bdae  MOV dword ptr [ESP + 0x28],EAX
0063bdb2  MOV EAX,[0x008a2fc0]
0063bdb7  MOV EDX,ESP
0063bdb9  MOV dword ptr [EDX],EAX
0063bdbb  MOV dword ptr [EDX + 0x4],ECX
0063bdbe  MOV ECX,dword ptr [0x008a2fc8]
0063bdc4  MOV dword ptr [EDX + 0x8],ECX
0063bdc7  MOV ECX,dword ptr [0x008a2fcc]
0063bdcd  MOV dword ptr [EDX + 0xc],ECX
0063bdd0  SUB ESP,0x10
0063bdd3  MOV EDX,ESP
0063bdd5  MOV dword ptr [EDX],EAX
0063bdd7  MOV EAX,[0x008a2fc4]
0063bddc  MOV dword ptr [EDX + 0x4],EAX
0063bddf  MOV EAX,[0x008a2fc8]
0063bde4  MOV dword ptr [EDX + 0x8],EAX
0063bde7  MOV dword ptr [EDX + 0xc],ECX
0063bdea  MOV EDX,dword ptr [ESP + 0x4c]
0063bdee  SUB ESP,0x10
0063bdf1  MOV ECX,ESP
0063bdf3  MOV dword ptr [ECX],EDI
0063bdf5  MOV dword ptr [ECX + 0x4],EBX
0063bdf8  MOV dword ptr [ECX + 0x8],EBP
0063bdfb  MOV dword ptr [ECX + 0xc],EDX
0063bdfe  LEA ECX,[ESP + 0x70]
0063be02  CALL 0x00469b90
0063be07  MOV ECX,dword ptr [ESP + 0x10]
0063be0b  MOV dword ptr [EAX + 0x4],ECX
0063be0e  MOV ECX,EAX
0063be10  CALL 0x0065faf0
0063be15  MOV ECX,dword ptr [ESP + 0x80]
0063be1c  POP EDI
0063be1d  MOV dword ptr [ESI],0x8a66f8
0063be23  POP ESI
0063be24  POP EBP
0063be25  MOV dword ptr FS:[0x0],ECX
0063be2c  POP EBX
0063be2d  ADD ESP,0x7c
0063be30  RET
