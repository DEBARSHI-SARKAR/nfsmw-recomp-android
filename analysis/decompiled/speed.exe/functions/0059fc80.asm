0059fc80  PUSH -0x1
0059fc82  PUSH 0x873333
0059fc87  MOV EAX,FS:[0x0]
0059fc8d  PUSH EAX
0059fc8e  MOV dword ptr FS:[0x0],ESP
0059fc95  PUSH ECX
0059fc96  MOV EAX,dword ptr [ESP + 0x18]
0059fc9a  PUSH EBX
0059fc9b  PUSH EBP
0059fc9c  PUSH ESI
0059fc9d  MOV ESI,ECX
0059fc9f  XOR EBX,EBX
0059fca1  PUSH EDI
0059fca2  LEA EDI,[ESI + 0x8]
0059fca5  MOV dword ptr [ESI],0x8a1e80
0059fcab  MOV dword ptr [EDI],EDI
0059fcad  MOV dword ptr [EDI + 0x4],EDI
0059fcb0  MOV dword ptr [ESP + 0x10],ESI
0059fcb4  MOV dword ptr [ESI + 0x10],EAX
0059fcb7  MOV dword ptr [ESI + 0x18],0x100000
0059fcbe  MOV dword ptr [ESI + 0x1c],EBX
0059fcc1  MOV dword ptr [ESI + 0x20],EBX
0059fcc4  MOV dword ptr [ESI + 0x24],EBX
0059fcc7  MOV byte ptr [ESI + 0x28],BL
0059fcca  MOV ECX,dword ptr [ESP + 0x24]
0059fcce  LEA EBP,[ESI + 0x30]
0059fcd1  PUSH EBP
0059fcd2  PUSH 0x565510
0059fcd7  MOV dword ptr [ESP + 0x24],EBX
0059fcdb  MOV dword ptr [EBP],0x890970
0059fce2  MOV dword ptr [EBP + 0x4],ECX
0059fce5  CALL 0x005d7930
0059fcea  MOV dword ptr [EBP],0x8a0320
0059fcf1  PUSH 0xde89e070
0059fcf6  MOV ECX,ESI
0059fcf8  MOV byte ptr [ESP + 0x20],0x1
0059fcfd  MOV dword ptr [ESI],0x8a2468
0059fd03  MOV dword ptr [EBP],0x8a2428
0059fd0a  MOV byte ptr [ESI + 0x38],BL
0059fd0d  MOV byte ptr [ESI + 0x39],BL
0059fd10  MOV dword ptr [ESI + 0x3c],EBX
0059fd13  MOV dword ptr [ESI + 0x40],EBX
0059fd16  MOV dword ptr [ESI + 0x44],EBX
0059fd19  MOV dword ptr [ESI + 0x4c],EBX
0059fd1c  MOV dword ptr [ESI + 0x50],EBX
0059fd1f  MOV dword ptr [ESI + 0x54],0x42700000
0059fd26  MOV dword ptr [ESI + 0x58],EBX
0059fd29  MOV dword ptr [ESI + 0x5c],EBX
0059fd2c  MOV dword ptr [ESI + 0x60],EBX
0059fd2f  MOV dword ptr [ESI + 0x64],EBX
0059fd32  MOV byte ptr [ESI + 0x68],BL
0059fd35  MOV dword ptr [ESI + 0x6c],EBX
0059fd38  CALL 0x0058bbd0
0059fd3d  PUSH 0x7b422ba3
0059fd42  MOV ECX,ESI
0059fd44  MOV dword ptr [ESI + 0x70],EAX
0059fd47  CALL 0x0058bbd0
0059fd4c  PUSH 0xe0b1430b
0059fd51  MOV ECX,ESI
0059fd53  MOV dword ptr [ESI + 0x74],EAX
0059fd56  CALL 0x0058bbd0
0059fd5b  PUSH 0x8674e6d4
0059fd60  MOV ECX,ESI
0059fd62  MOV dword ptr [ESI + 0x78],EAX
0059fd65  CALL 0x0058bbd0
0059fd6a  PUSH 0x84a226ec
0059fd6f  MOV ECX,ESI
0059fd71  MOV dword ptr [ESI + 0x7c],EAX
0059fd74  CALL 0x0058bbd0
0059fd79  PUSH 0x6a144066
0059fd7e  MOV ECX,ESI
0059fd80  MOV dword ptr [ESI + 0x80],EAX
0059fd86  CALL 0x0058bbd0
0059fd8b  MOV ECX,dword ptr [ESI + 0x10]
0059fd8e  PUSH 0x3c165f39
0059fd93  PUSH ECX
0059fd94  MOV dword ptr [ESI + 0x84],EAX
0059fd9a  CALL 0x005251e0
0059fd9f  MOV EBP,EAX
0059fda1  ADD ESP,0x8
0059fda4  CMP EBP,EBX
0059fda6  JZ 0x0059fdc5
0059fda8  CALL 0x00466410
0059fdad  CMP EAX,EBX
0059fdaf  JZ 0x0059fdb6
0059fdb1  MOV dword ptr [EAX + 0x8],EBP
0059fdb4  JMP 0x0059fdb8
0059fdb6  XOR EAX,EAX
0059fdb8  MOV ECX,dword ptr [EDI + 0x4]
0059fdbb  MOV dword ptr [ECX],EAX
0059fdbd  MOV dword ptr [EDI + 0x4],EAX
0059fdc0  MOV dword ptr [EAX + 0x4],ECX
0059fdc3  MOV dword ptr [EAX],EDI
0059fdc5  MOV EDX,dword ptr [ESI + 0x10]
0059fdc8  PUSH 0xbee44775
0059fdcd  PUSH EDX
0059fdce  CALL 0x005251e0
0059fdd3  MOV EBP,EAX
0059fdd5  ADD ESP,0x8
0059fdd8  CMP EBP,EBX
0059fdda  JZ 0x0059fdf7
0059fddc  CALL 0x00466410
0059fde1  CMP EAX,EBX
0059fde3  JZ 0x0059fdea
0059fde5  MOV dword ptr [EAX + 0x8],EBP
0059fde8  MOV EBX,EAX
0059fdea  MOV EAX,dword ptr [EDI + 0x4]
0059fded  MOV dword ptr [EAX],EBX
0059fdef  MOV dword ptr [EDI + 0x4],EBX
0059fdf2  MOV dword ptr [EBX + 0x4],EAX
0059fdf5  MOV dword ptr [EBX],EDI
0059fdf7  MOV EAX,dword ptr [ESI + 0x10]
0059fdfa  PUSH 0xfc39cb0a
0059fdff  PUSH EAX
0059fe00  CALL 0x00524850
0059fe05  MOV dword ptr [ESI + 0x88],EAX
0059fe0b  MOV EAX,dword ptr [ESI + 0x10]
0059fe0e  PUSH 0xbee44775
0059fe13  PUSH EAX
0059fe14  CALL 0x00524850
0059fe19  MOV dword ptr [ESI + 0x8c],EAX
0059fe1f  MOV EAX,dword ptr [ESI + 0x10]
0059fe22  PUSH 0x814918ca
0059fe27  PUSH EAX
0059fe28  CALL 0x00524850
0059fe2d  MOV dword ptr [ESI + 0x90],EAX
0059fe33  MOV EAX,dword ptr [ESI + 0x10]
0059fe36  PUSH 0xa16f9f1e
0059fe3b  PUSH EAX
0059fe3c  CALL 0x00524850
0059fe41  MOV dword ptr [ESI + 0x94],EAX
0059fe47  MOV EAX,dword ptr [ESI + 0x10]
0059fe4a  PUSH 0x5fa70d4c
0059fe4f  PUSH EAX
0059fe50  CALL 0x00524850
0059fe55  MOV dword ptr [ESI + 0x98],EAX
0059fe5b  MOV EAX,dword ptr [ESI + 0x10]
0059fe5e  PUSH 0x875e92eb
0059fe63  PUSH EAX
0059fe64  CALL 0x00524850
0059fe69  MOV dword ptr [ESI + 0x9c],EAX
0059fe6f  MOV EAX,dword ptr [ESI + 0x10]
0059fe72  PUSH 0xe0e0169b
0059fe77  PUSH EAX
0059fe78  CALL 0x00524850
0059fe7d  MOV dword ptr [ESI + 0xa0],EAX
0059fe83  MOV EAX,dword ptr [ESI + 0x10]
0059fe86  PUSH 0x8eeebd33
0059fe8b  PUSH EAX
0059fe8c  CALL 0x00524850
0059fe91  ADD ESP,0x40
0059fe94  MOV dword ptr [ESI + 0xa4],EAX
0059fe9a  MOV EAX,dword ptr [ESI + 0x10]
0059fe9d  PUSH 0x47a4e2a9
0059fea2  PUSH EAX
0059fea3  CALL 0x00524850
0059fea8  MOV dword ptr [ESI + 0xa8],EAX
0059feae  MOV EAX,dword ptr [ESI + 0x10]
0059feb1  PUSH 0x8e3653a6
0059feb6  PUSH EAX
0059feb7  CALL 0x00524850
0059febc  MOV dword ptr [ESI + 0xac],EAX
0059fec2  MOV EAX,dword ptr [ESI + 0x10]
0059fec5  PUSH 0x30f39a6f
0059feca  PUSH EAX
0059fecb  CALL 0x00524850
0059fed0  MOV dword ptr [ESI + 0xb0],EAX
0059fed6  MOV EAX,dword ptr [ESI + 0x10]
0059fed9  PUSH 0xcf817638
0059fede  PUSH EAX
0059fedf  CALL 0x00524850
0059fee4  MOV dword ptr [ESI + 0xb4],EAX
0059feea  MOV EAX,dword ptr [ESI + 0x10]
0059feed  PUSH 0x8c20a763
0059fef2  PUSH EAX
0059fef3  CALL 0x00524850
0059fef8  MOV dword ptr [ESI + 0xb8],EAX
0059fefe  MOV EAX,dword ptr [ESI + 0x10]
0059ff01  PUSH 0x5c2a4f20
0059ff06  PUSH EAX
0059ff07  CALL 0x00524850
0059ff0c  MOV dword ptr [ESI + 0xbc],EAX
0059ff12  MOV EAX,dword ptr [ESI + 0xa0]
0059ff18  MOV ECX,dword ptr [EAX + 0x2c]
0059ff1b  MOV EDX,dword ptr [ECX + 0x38]
0059ff1e  MOV EAX,dword ptr [ESI + 0xa4]
0059ff24  MOV dword ptr [ESI + 0xc0],EDX
0059ff2a  MOV ECX,dword ptr [EAX + 0x2c]
0059ff2d  MOV EDX,dword ptr [ECX + 0x38]
0059ff30  MOV EAX,dword ptr [ESI + 0xa8]
0059ff36  ADD ESP,0x30
0059ff39  MOV dword ptr [ESI + 0xc4],EDX
0059ff3f  MOV ECX,dword ptr [EAX + 0x2c]
0059ff42  MOV EDX,dword ptr [ECX + 0x38]
0059ff45  MOV EAX,dword ptr [ESI + 0xac]
0059ff4b  MOV dword ptr [ESI + 0xc8],EDX
0059ff51  MOV ECX,dword ptr [EAX + 0x2c]
0059ff54  MOV EDX,dword ptr [ECX + 0x38]
0059ff57  MOV EAX,dword ptr [ESI + 0xb0]
0059ff5d  MOV dword ptr [ESI + 0xcc],EDX
0059ff63  MOV ECX,dword ptr [EAX + 0x2c]
0059ff66  MOV EDX,dword ptr [ECX + 0x38]
0059ff69  MOV EAX,dword ptr [ESI + 0xb4]
0059ff6f  MOV dword ptr [ESI + 0xd0],EDX
0059ff75  MOV ECX,dword ptr [EAX + 0x2c]
0059ff78  MOV EDX,dword ptr [ECX + 0x38]
0059ff7b  MOV ECX,dword ptr [ESP + 0x14]
0059ff7f  POP EDI
0059ff80  MOV dword ptr [ESI + 0xd4],EDX
0059ff86  MOV EAX,ESI
0059ff88  POP ESI
0059ff89  POP EBP
0059ff8a  POP EBX
0059ff8b  MOV dword ptr FS:[0x0],ECX
0059ff92  ADD ESP,0x10
0059ff95  RET 0xc
