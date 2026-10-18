0047ab00  PUSH -0x1
0047ab02  PUSH 0x86a448
0047ab07  MOV EAX,FS:[0x0]
0047ab0d  PUSH EAX
0047ab0e  MOV dword ptr FS:[0x0],ESP
0047ab15  PUSH ECX
0047ab16  MOV EAX,dword ptr [ESP + 0x14]
0047ab1a  PUSH ESI
0047ab1b  PUSH EDI
0047ab1c  PUSH 0x7
0047ab1e  MOV ESI,ECX
0047ab20  PUSH EAX
0047ab21  MOV dword ptr [ESP + 0x10],ESI
0047ab25  CALL 0x00470890
0047ab2a  MOV dword ptr [ESI],0x894d60
0047ab30  MOV dword ptr [ESI + 0x9c],0xbf800000
0047ab3a  MOV dword ptr [ESI + 0xa8],0xc0c00000
0047ab44  XOR EAX,EAX
0047ab46  MOV dword ptr [ESI + 0x80],EAX
0047ab4c  MOV dword ptr [ESI + 0xa0],EAX
0047ab52  MOV dword ptr [ESI + 0xb0],EAX
0047ab58  MOV dword ptr [ESI + 0xb4],EAX
0047ab5e  MOV dword ptr [ESI + 0xc0],EAX
0047ab64  MOV dword ptr [ESI + 0xc4],EAX
0047ab6a  MOV dword ptr [ESI + 0xc8],EAX
0047ab70  MOV ECX,0x40400000
0047ab75  MOV dword ptr [ESI + 0x98],ECX
0047ab7b  MOV dword ptr [ESI + 0xa4],ECX
0047ab81  MOV dword ptr [ESI + 0xac],ECX
0047ab87  MOV dword ptr [ESI + 0xb8],ECX
0047ab8d  MOV EDX,0x3f800000
0047ab92  MOV dword ptr [ESI + 0x90],EDX
0047ab98  MOV dword ptr [ESI + 0xcc],EDX
0047ab9e  MOV EDI,0xc0400000
0047aba3  MOV dword ptr [ESI + 0x94],EDI
0047aba9  MOV dword ptr [ESI + 0xbc],EDI
0047abaf  MOV dword ptr [ESI + 0x110],EAX
0047abb5  MOV dword ptr [ESI + 0x138],ECX
0047abbb  MOV dword ptr [ESI + 0x144],ECX
0047abc1  MOV dword ptr [ESI + 0x14c],ECX
0047abc7  MOV dword ptr [ESI + 0x158],ECX
0047abcd  MOV dword ptr [ESI + 0x120],EAX
0047abd3  MOV dword ptr [ESI + 0x130],EDX
0047abd9  MOV dword ptr [ESI + 0x134],EDI
0047abdf  MOV dword ptr [ESI + 0x13c],0xbf800000
0047abe9  MOV dword ptr [ESI + 0x140],EAX
0047abef  MOV dword ptr [ESI + 0x148],0xc0c00000
0047abf9  MOV dword ptr [ESI + 0x150],EAX
0047abff  MOV dword ptr [ESI + 0x154],EAX
0047ac05  MOV dword ptr [ESI + 0x15c],EDI
0047ac0b  MOV dword ptr [ESI + 0x160],EAX
0047ac11  MOV dword ptr [ESI + 0x164],EAX
0047ac17  MOV dword ptr [ESI + 0x168],EAX
0047ac1d  MOV dword ptr [ESI + 0x16c],EDX
0047ac23  MOV dword ptr [ESI + 0x1b0],EAX
0047ac29  MOV dword ptr [ESI + 0x1d8],ECX
0047ac2f  MOV dword ptr [ESI + 0x1e4],ECX
0047ac35  MOV dword ptr [ESI + 0x1ec],ECX
0047ac3b  MOV dword ptr [ESI + 0x1f8],ECX
0047ac41  MOV ECX,dword ptr [ESP + 0x20]
0047ac45  MOV dword ptr [ESI + 0x1c0],EAX
0047ac4b  MOV dword ptr [ESI + 0x1d0],EDX
0047ac51  MOV dword ptr [ESI + 0x1d4],EDI
0047ac57  MOV dword ptr [ESI + 0x1dc],0xbf800000
0047ac61  MOV dword ptr [ESI + 0x1e0],EAX
0047ac67  MOV dword ptr [ESI + 0x1e8],0xc0c00000
0047ac71  MOV dword ptr [ESI + 0x1f0],EAX
0047ac77  MOV dword ptr [ESI + 0x1f4],EAX
0047ac7d  MOV dword ptr [ESI + 0x1fc],EDI
0047ac83  MOV dword ptr [ESI + 0x200],EAX
0047ac89  MOV dword ptr [ESI + 0x204],EAX
0047ac8f  MOV dword ptr [ESI + 0x208],EAX
0047ac95  MOV dword ptr [ESI + 0x20c],EDX
0047ac9b  MOV dword ptr [ESI + 0x254],ECX
0047aca1  MOV dword ptr [ESI + 0x250],EAX
0047aca7  MOV ECX,0x1
0047acac  MOV dword ptr [ESP + 0x14],EAX
0047acb0  MOV dword ptr [ESI + 0x258],EAX
0047acb6  MOV dword ptr [ESI + 0x25c],EAX
0047acbc  MOV dword ptr [ESI + 0x260],EAX
0047acc2  MOV dword ptr [ESI + 0x264],EAX
0047acc8  MOV dword ptr [ESI + 0x278],EAX
0047acce  MOV dword ptr [ESI + 0x27c],EDX
0047acd4  MOV word ptr [ESI + 0x280],AX
0047acdb  MOV word ptr [ESI + 0x282],CX
0047ace2  MOV dword ptr [ESI + 0x268],EAX
0047ace8  MOV DL,byte ptr [ESP + 0x24]
0047acec  MOV dword ptr [ESI + 0x26c],EAX
0047acf2  MOV dword ptr [ESI + 0x270],EAX
0047acf8  MOV dword ptr [ESI + 0x274],EAX
0047acfe  MOV byte ptr [ESI + 0x285],CL
0047ad04  MOV ECX,ESI
0047ad06  MOV byte ptr [ESI + 0x284],DL
0047ad0c  CALL 0x00475350
0047ad11  MOV ECX,dword ptr [ESP + 0xc]
0047ad15  POP EDI
0047ad16  MOV EAX,ESI
0047ad18  POP ESI
0047ad19  MOV dword ptr FS:[0x0],ECX
0047ad20  ADD ESP,0x10
0047ad23  RET 0xc
