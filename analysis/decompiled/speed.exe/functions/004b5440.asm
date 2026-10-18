004b5440  PUSH EBP
004b5441  MOV EBP,ESP
004b5443  AND ESP,0xfffffff0
004b5446  PUSH -0x1
004b5448  PUSH 0x86b5e8
004b544d  MOV EAX,FS:[0x0]
004b5453  PUSH EAX
004b5454  MOV dword ptr FS:[0x0],ESP
004b545b  SUB ESP,0xc
004b545e  PUSH EBX
004b545f  PUSH ESI
004b5460  MOV ESI,ECX
004b5462  MOV dword ptr [ESP + 0xc],ESI
004b5466  CALL 0x004d61d0
004b546b  XOR EBX,EBX
004b546d  MOV dword ptr [ESI + 0x24],EBX
004b5470  MOV dword ptr [ESI],0x896d74
004b5476  MOV dword ptr [ESI + 0x8c],EBX
004b547c  MOV dword ptr [ESI + 0x78],EBX
004b547f  MOV dword ptr [ESI + 0x80],EBX
004b5485  MOV dword ptr [ESI + 0x84],EBX
004b548b  MOV dword ptr [ESI + 0x7c],EBX
004b548e  MOV dword ptr [ESI + 0x88],EBX
004b5494  MOV byte ptr [ESI + 0x90],0x1
004b549b  MOV dword ptr [ESI + 0xc4],EBX
004b54a1  MOV dword ptr [ESI + 0xc8],0x7f
004b54ab  MOV dword ptr [ESI + 0xcc],EBX
004b54b1  MOV dword ptr [ESI + 0xd0],EBX
004b54b7  MOV dword ptr [ESI + 0xa4],EBX
004b54bd  MOV dword ptr [ESI + 0xac],EBX
004b54c3  MOV dword ptr [ESI + 0xb4],EBX
004b54c9  MOV dword ptr [ESI + 0xb8],EBX
004b54cf  MOV dword ptr [ESI + 0x70],EBX
004b54d2  MOV dword ptr [ESI + 0x74],0xffffffff
004b54d9  MOV dword ptr [ESI + 0x50],EBX
004b54dc  MOV EAX,0x5
004b54e1  MOV dword ptr [ESI + 0x98],EAX
004b54e7  MOV dword ptr [ESI + 0xa0],EAX
004b54ed  MOV EAX,0x3f800000
004b54f2  MOV dword ptr [ESI + 0xa8],EAX
004b54f8  MOV dword ptr [ESI + 0xb0],EAX
004b54fe  MOV dword ptr [ESI + 0xbc],EAX
004b5504  MOV dword ptr [ESI + 0xc0],EAX
004b550a  MOV dword ptr [ESI + 0x40],EBX
004b550d  MOV dword ptr [ESI + 0x44],EBX
004b5510  MOV dword ptr [ESI + 0x48],EBX
004b5513  MOV byte ptr [ESI + 0x3c],BL
004b5516  MOV dword ptr [ESI + 0x54],EBX
004b5519  MOV dword ptr [ESI + 0x64],EBX
004b551c  MOV dword ptr [ESI + 0x58],EBX
004b551f  MOV dword ptr [ESI + 0x68],EBX
004b5522  MOV byte ptr [ESI + 0x94],BL
004b5528  MOV byte ptr [ESI + 0x95],BL
004b552e  MOV byte ptr [ESI + 0x96],BL
004b5534  MOV dword ptr [ESI + 0x7c],0x3a83126f
004b553b  MOV dword ptr [ESI + 0x84],EBX
004b5541  MOV dword ptr [ESI + 0x80],EBX
004b5547  MOV dword ptr [ESI + 0x88],EBX
004b554d  MOV byte ptr [ESI + 0x90],BL
004b5553  MOV dword ptr [ESI + 0x8c],EBX
004b5559  MOV dword ptr [ESI + 0x78],EBX
004b555c  PUSH 0x911fe0
004b5561  PUSH EAX
004b5562  MOV dword ptr [ESP + 0x24],EBX
004b5566  MOV byte ptr [ESI + 0xd4],BL
004b556c  MOV byte ptr [ESI + 0x97],BL
004b5572  CALL 0x0045d9e0
004b5577  FSTP float ptr [ESI + 0x2c]
004b557a  ADD ESP,0x8
004b557d  CALL 0x0045ce40
004b5582  MOV ECX,dword ptr [ESP + 0x14]
004b5586  MOV [0x00912128],EAX
004b558b  MOV EAX,ESI
004b558d  POP ESI
004b558e  MOV dword ptr [0x0091212c],EBX
004b5594  MOV dword ptr FS:[0x0],ECX
004b559b  POP EBX
004b559c  MOV ESP,EBP
004b559e  POP EBP
004b559f  RET
