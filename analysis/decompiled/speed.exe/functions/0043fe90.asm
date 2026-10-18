0043fe90  PUSH -0x1
0043fe92  PUSH 0x869628
0043fe97  MOV EAX,FS:[0x0]
0043fe9d  PUSH EAX
0043fe9e  MOV dword ptr FS:[0x0],ESP
0043fea5  SUB ESP,0x3c
0043fea8  PUSH EBX
0043fea9  PUSH ESI
0043feaa  MOV ESI,ECX
0043feac  PUSH EDI
0043fead  MOV dword ptr [ESP + 0xc],ESI
0043feb1  CALL 0x0043f120
0043feb6  PUSH 0x892f84
0043febb  MOV dword ptr [ESP + 0x54],0x0
0043fec3  MOV dword ptr [ESI],0x892f70
0043fec9  MOV dword ptr [ESP + 0x14],0x40800000
0043fed1  MOV dword ptr [ESP + 0x18],0x0
0043fed9  MOV dword ptr [ESP + 0x1c],0xc02ccccd
0043fee1  MOV dword ptr [ESP + 0x20],0xc1200000
0043fee9  MOV dword ptr [ESP + 0x24],0x0
0043fef1  MOV dword ptr [ESP + 0x28],0xc02ccccd
0043fef9  CALL 0x005cc240
0043fefe  MOV ECX,dword ptr [ESP + 0x14]
0043ff02  MOV EDX,dword ptr [ESP + 0x18]
0043ff06  MOV dword ptr [ESP + 0x2c],ECX
0043ff0a  MOV ECX,dword ptr [ESP + 0x1c]
0043ff0e  MOV dword ptr [ESP + 0x30],EDX
0043ff12  MOV EDX,dword ptr [ESP + 0x20]
0043ff16  MOV dword ptr [ESP + 0x34],ECX
0043ff1a  MOV ECX,dword ptr [ESP + 0x24]
0043ff1e  MOV dword ptr [ESP + 0x48],EAX
0043ff22  ADD ESP,0x4
0043ff25  MOV dword ptr [ESP + 0x34],EDX
0043ff29  MOV EDX,dword ptr [ESP + 0x24]
0043ff2d  LEA EAX,[ESP + 0x28]
0043ff31  MOV dword ptr [ESP + 0x38],ECX
0043ff35  LEA EDI,[ESI + 0x10]
0043ff38  MOV EBX,0x1
0043ff3d  PUSH EAX
0043ff3e  MOV ECX,EDI
0043ff40  MOV dword ptr [ESP + 0x40],EDX
0043ff44  MOV dword ptr [ESP + 0x44],EBX
0043ff48  CALL 0x004393f0
0043ff4d  PUSH 0x892f84
0043ff52  MOV dword ptr [ESP + 0x20],0xc0800000
0043ff5a  MOV dword ptr [ESP + 0x24],0x0
0043ff62  MOV dword ptr [ESP + 0x28],0xc02ccccd
0043ff6a  MOV dword ptr [ESP + 0x14],0x41200000
0043ff72  MOV dword ptr [ESP + 0x18],0x0
0043ff7a  MOV dword ptr [ESP + 0x1c],0xc02ccccd
0043ff82  CALL 0x005cc240
0043ff87  MOV ECX,dword ptr [ESP + 0x20]
0043ff8b  MOV EDX,dword ptr [ESP + 0x24]
0043ff8f  MOV dword ptr [ESP + 0x2c],ECX
0043ff93  MOV ECX,dword ptr [ESP + 0x28]
0043ff97  MOV dword ptr [ESP + 0x30],EDX
0043ff9b  MOV EDX,dword ptr [ESP + 0x14]
0043ff9f  MOV dword ptr [ESP + 0x34],ECX
0043ffa3  MOV ECX,dword ptr [ESP + 0x18]
0043ffa7  MOV dword ptr [ESP + 0x48],EAX
0043ffab  ADD ESP,0x4
0043ffae  MOV dword ptr [ESP + 0x34],EDX
0043ffb2  MOV EDX,dword ptr [ESP + 0x18]
0043ffb6  LEA EAX,[ESP + 0x28]
0043ffba  MOV dword ptr [ESP + 0x38],ECX
0043ffbe  PUSH EAX
0043ffbf  MOV ECX,EDI
0043ffc1  MOV dword ptr [ESP + 0x40],EDX
0043ffc5  MOV dword ptr [ESP + 0x44],EBX
0043ffc9  CALL 0x004393f0
0043ffce  MOV ECX,dword ptr [ESP + 0x48]
0043ffd2  MOV dword ptr [ESI + 0x4],EBX
0043ffd5  MOV byte ptr [ESI + 0xc],BL
0043ffd8  POP EDI
0043ffd9  MOV EAX,ESI
0043ffdb  POP ESI
0043ffdc  MOV dword ptr FS:[0x0],ECX
0043ffe3  POP EBX
0043ffe4  ADD ESP,0x48
0043ffe7  RET 0x4
