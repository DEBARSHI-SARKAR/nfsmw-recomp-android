006cba70  PUSH EBX
006cba71  PUSH 0x1
006cba73  CALL dword ptr [0x00890074]
006cba79  XOR EBX,EBX
006cba7b  MOV byte ptr [0x0093dd0c],BL
006cba81  MOV byte ptr [0x0093dc08],BL
006cba87  MOV dword ptr [0x0093de10],EBX
006cba8d  MOV dword ptr [0x0093de14],EBX
006cba93  MOV dword ptr [0x0093de18],EBX
006cba99  MOV dword ptr [0x0093de1c],EBX
006cba9f  CALL 0x006cb680
006cbaa4  MOV AL,[0x0093dc08]
006cbaa9  MOV [0x008f945c],AL
006cbaae  CALL 0x006cb9d0
006cbab3  PUSH EBX
006cbab4  PUSH EBX
006cbab5  CALL 0x007ee0ca
006cbaba  ADD ESP,0x8
006cbabd  CALL 0x006c2620
006cbac2  TEST AL,AL
006cbac4  MOV byte ptr [0x00982c30],BL
006cbaca  JZ 0x006cbaec
006cbacc  MOV CL,byte ptr [0x008f945c]
006cbad2  MOV byte ptr [0x0093dc08],CL
006cbad8  MOV byte ptr [0x0093dc09],0x3a
006cbadf  MOV byte ptr [0x0093dc0a],0x5c
006cbae6  MOV byte ptr [0x0093dc0b],BL
006cbaec  POP EBX
006cbaed  RET
