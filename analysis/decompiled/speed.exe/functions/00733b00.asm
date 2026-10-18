00733b00  MOV EDX,ECX
00733b02  XOR EAX,EAX
00733b04  PUSH ESI
00733b05  PUSH EDI
00733b06  MOV ECX,0x21
00733b0b  MOV EDI,EDX
00733b0d  STOSD.REP ES:EDI
00733b0f  MOV EDI,0x3f800000
00733b14  OR ESI,0xffffffff
00733b17  MOV ECX,0x1
00733b1c  MOV dword ptr [EDX + 0x58],EDI
00733b1f  MOV dword ptr [EDX + 0x64],EDI
00733b22  MOV dword ptr [EDX + 0x68],EDI
00733b25  POP EDI
00733b26  MOV dword ptr [EDX + 0x48],ESI
00733b29  MOV dword ptr [EDX + 0x4c],ESI
00733b2c  MOV dword ptr [EDX + 0x70],ESI
00733b2f  MOV dword ptr [EDX + 0x74],ESI
00733b32  MOV dword ptr [EDX],0x7d0
00733b38  MOV dword ptr [EDX + 0x4],EAX
00733b3b  MOV dword ptr [EDX + 0x8],0x3
00733b42  MOV dword ptr [EDX + 0xc],0x3f000000
00733b49  MOV byte ptr [EDX + 0x10],AL
00733b4c  MOV byte ptr [EDX + 0x11],AL
00733b4f  MOV dword ptr [EDX + 0x14],EAX
00733b52  MOV dword ptr [EDX + 0x18],EAX
00733b55  MOV dword ptr [EDX + 0x1c],EAX
00733b58  MOV dword ptr [EDX + 0x20],0x2
00733b5f  MOV dword ptr [EDX + 0x24],ECX
00733b62  MOV dword ptr [EDX + 0x28],0x7
00733b69  MOV dword ptr [EDX + 0x2c],EAX
00733b6c  MOV dword ptr [EDX + 0x30],EAX
00733b6f  MOV byte ptr [EDX + 0x34],0x7
00733b73  MOV byte ptr [EDX + 0x35],0x8
00733b77  MOV byte ptr [EDX + 0x36],CL
00733b7a  MOV dword ptr [EDX + 0x38],ECX
00733b7d  MOV dword ptr [EDX + 0x3c],EAX
00733b80  MOV byte ptr [EDX + 0x40],AL
00733b83  MOV byte ptr [EDX + 0x41],AL
00733b86  MOV byte ptr [EDX + 0x43],AL
00733b89  MOV byte ptr [EDX + 0x42],AL
00733b8c  MOV byte ptr [EDX + 0x44],AL
00733b8f  MOV byte ptr [EDX + 0x45],AL
00733b92  MOV byte ptr [EDX + 0x46],CL
00733b95  MOV dword ptr [EDX + 0x50],EAX
00733b98  MOV dword ptr [EDX + 0x54],EAX
00733b9b  MOV dword ptr [EDX + 0x5c],EAX
00733b9e  MOV dword ptr [EDX + 0x60],ECX
00733ba1  MOV dword ptr [EDX + 0x6c],0x2
00733ba8  MOV dword ptr [EDX + 0x78],EAX
00733bab  MOV dword ptr [EDX + 0x7c],EAX
00733bae  MOV byte ptr [EDX + 0x80],AL
00733bb4  POP ESI
00733bb5  RET
