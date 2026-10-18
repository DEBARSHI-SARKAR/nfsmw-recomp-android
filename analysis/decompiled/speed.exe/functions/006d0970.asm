006d0970  PUSH EBP
006d0971  MOV EBP,ESP
006d0973  AND ESP,0xfffffff0
006d0976  SUB ESP,0xa8
006d097c  PUSH ESI
006d097d  MOV ESI,dword ptr [0x00982b50]
006d0983  TEST ESI,ESI
006d0985  PUSH EDI
006d0986  JZ 0x006d0aed
006d098c  LEA ECX,[ESP + 0x10]
006d0990  CALL 0x006c0a30
006d0995  MOV EAX,0x80000000
006d099a  MOV dword ptr [ESP + 0x90],EAX
006d09a1  MOV dword ptr [ESP + 0x94],EAX
006d09a8  MOV dword ptr [ESP + 0x98],EAX
006d09af  MOV dword ptr [ESP + 0x9c],EAX
006d09b6  MOV EAX,[0x00919690]
006d09bb  MOV ECX,dword ptr [EAX + 0xc8]
006d09c1  MOV dword ptr [ESP + 0xc],ECX
006d09c5  FLD float ptr [ESP + 0xc]
006d09c9  FCOMP float ptr [0x00890968]
006d09cf  FNSTSW AX
006d09d1  TEST AH,0x41
006d09d4  JNZ 0x006d0aed
006d09da  MOV AL,[0x00919658]
006d09df  TEST AL,AL
006d09e1  JZ 0x006d0aed
006d09e7  MOV EDX,dword ptr [0x009196b0]
006d09ed  MOV EAX,dword ptr [EDX + 0x10]
006d09f0  TEST EAX,EAX
006d09f2  JZ 0x006d0aed
006d09f8  FLD float ptr [ESP + 0xc]
006d09fc  FMUL float ptr [0x008af2c0]
006d0a02  CALL 0x007c4b80
006d0a07  MOV EDI,EAX
006d0a09  MOV dword ptr [ESP + 0xc],EDI
006d0a0d  FILD dword ptr [ESP + 0xc]
006d0a11  PUSH 0x0
006d0a13  LEA EAX,[ESP + 0x14]
006d0a17  PUSH ESI
006d0a18  FST float ptr [ESP + 0x3c]
006d0a1c  PUSH EAX
006d0a1d  FSTP float ptr [ESP + 0x50]
006d0a21  MOV dword ptr [ESP + 0x1c],0x0
006d0a29  MOV dword ptr [ESP + 0x20],0x0
006d0a31  MOV dword ptr [ESP + 0x24],0x0
006d0a39  MOV dword ptr [ESP + 0x2c],0x44200000
006d0a41  MOV dword ptr [ESP + 0x30],0x0
006d0a49  MOV dword ptr [ESP + 0x34],0x0
006d0a51  MOV dword ptr [ESP + 0x3c],0x44200000
006d0a59  MOV dword ptr [ESP + 0x44],0x0
006d0a61  MOV dword ptr [ESP + 0x4c],0x0
006d0a69  MOV dword ptr [ESP + 0x54],0x0
006d0a71  CALL 0x006d1260
006d0a76  MOV ECX,0x1e0
006d0a7b  SUB ECX,EDI
006d0a7d  MOV dword ptr [ESP + 0x18],ECX
006d0a81  FILD dword ptr [ESP + 0x18]
006d0a85  PUSH 0x0
006d0a87  LEA EDX,[ESP + 0x20]
006d0a8b  PUSH ESI
006d0a8c  FST float ptr [ESP + 0x28]
006d0a90  PUSH EDX
006d0a91  FSTP float ptr [ESP + 0x3c]
006d0a95  MOV dword ptr [ESP + 0x28],0x0
006d0a9d  MOV dword ptr [ESP + 0x30],0x0
006d0aa5  MOV dword ptr [ESP + 0x38],0x44200000
006d0aad  MOV dword ptr [ESP + 0x40],0x0
006d0ab5  MOV dword ptr [ESP + 0x48],0x44200000
006d0abd  MOV dword ptr [ESP + 0x4c],0x43f00000
006d0ac5  MOV dword ptr [ESP + 0x50],0x0
006d0acd  MOV dword ptr [ESP + 0x58],0x0
006d0ad5  MOV dword ptr [ESP + 0x5c],0x43f00000
006d0add  MOV dword ptr [ESP + 0x60],0x0
006d0ae5  CALL 0x006d1260
006d0aea  ADD ESP,0x18
006d0aed  POP EDI
006d0aee  POP ESI
006d0aef  MOV ESP,EBP
006d0af1  POP EBP
006d0af2  RET
