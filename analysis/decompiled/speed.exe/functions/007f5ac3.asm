007f5ac3  MOV EDX,ECX
007f5ac5  AND dword ptr [EDX + 0x4],0x0
007f5ac9  OR dword ptr [EDX + 0xc],0xffffffff
007f5acd  PUSH EDI
007f5ace  PUSH 0x1a
007f5ad0  MOV dword ptr [EDX + 0x8],0x4
007f5ad7  POP ECX
007f5ad8  XOR EAX,EAX
007f5ada  MOV EDI,EDX
007f5adc  MOV dword ptr [EDX],0x8c24f4
007f5ae2  STOSD.REP ES:EDI
007f5ae4  MOV EAX,EDX
007f5ae6  POP EDI
007f5ae7  RET
