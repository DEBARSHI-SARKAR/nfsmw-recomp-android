00721b70  SUB ESP,0xc
00721b73  MOVSX EAX,word ptr [ECX + 0x10]
00721b77  MOVSX EDX,word ptr [ECX + 0x4]
00721b7b  SHL EDX,0x8
00721b7e  SHL EAX,0xd
00721b81  MOV dword ptr [ESP],EAX
00721b84  MOVSX EAX,word ptr [ECX + 0x18]
00721b88  ADD EDX,EAX
00721b8a  MOV EAX,dword ptr [ESP + 0x10]
00721b8e  SHL EDX,0x8
00721b91  MOV dword ptr [ESP + 0x4],EDX
00721b95  MOVSX EDX,word ptr [ECX + 0x8]
00721b99  SHL EDX,0xd
00721b9c  MOV dword ptr [ESP + 0x8],EDX
00721ba0  PUSH ESI
00721ba1  FILD dword ptr [ESP + 0xc]
00721ba5  FMUL float ptr [0x00890980]
00721bab  FSTP float ptr [EAX]
00721bad  FILD dword ptr [ESP + 0x4]
00721bb1  FMUL float ptr [0x00890980]
00721bb7  FSTP float ptr [EAX + 0x4]
00721bba  FILD dword ptr [ESP + 0x8]
00721bbe  FMUL float ptr [0x00890980]
00721bc4  FSTP float ptr [EAX + 0x8]
00721bc7  MOVSX EDX,word ptr [ECX + 0x12]
00721bcb  MOVSX ESI,word ptr [ECX + 0x1a]
00721bcf  SHL EDX,0xd
00721bd2  MOV dword ptr [ESP + 0x4],EDX
00721bd6  MOVSX EDX,word ptr [ECX + 0x4]
00721bda  SHL EDX,0x8
00721bdd  ADD EDX,ESI
00721bdf  SHL EDX,0x8
00721be2  MOV dword ptr [ESP + 0x8],EDX
00721be6  MOVSX EDX,word ptr [ECX + 0xa]
00721bea  SHL EDX,0xd
00721bed  MOV dword ptr [ESP + 0x14],EDX
00721bf1  FILD dword ptr [ESP + 0x14]
00721bf5  FMUL float ptr [0x00890980]
00721bfb  FSTP float ptr [EAX + 0x10]
00721bfe  FILD dword ptr [ESP + 0x4]
00721c02  FMUL float ptr [0x00890980]
00721c08  FSTP float ptr [EAX + 0x14]
00721c0b  FILD dword ptr [ESP + 0x8]
00721c0f  FMUL float ptr [0x00890980]
00721c15  FSTP float ptr [EAX + 0x18]
00721c18  MOVSX EDX,word ptr [ECX + 0x14]
00721c1c  MOVSX ESI,word ptr [ECX + 0x1c]
00721c20  SHL EDX,0xd
00721c23  MOV dword ptr [ESP + 0x4],EDX
00721c27  MOVSX EDX,word ptr [ECX + 0x4]
00721c2b  SHL EDX,0x8
00721c2e  ADD EDX,ESI
00721c30  SHL EDX,0x8
00721c33  MOV dword ptr [ESP + 0x8],EDX
00721c37  MOVSX EDX,word ptr [ECX + 0xc]
00721c3b  SHL EDX,0xd
00721c3e  MOV dword ptr [ESP + 0x14],EDX
00721c42  FILD dword ptr [ESP + 0x14]
00721c46  FMUL float ptr [0x00890980]
00721c4c  FSTP float ptr [EAX + 0x20]
00721c4f  FILD dword ptr [ESP + 0x4]
00721c53  FMUL float ptr [0x00890980]
00721c59  FSTP float ptr [EAX + 0x24]
00721c5c  FILD dword ptr [ESP + 0x8]
00721c60  FMUL float ptr [0x00890980]
00721c66  FSTP float ptr [EAX + 0x28]
00721c69  MOVSX EDX,word ptr [ECX + 0x16]
00721c6d  MOVSX ESI,word ptr [ECX + 0x1e]
00721c71  SHL EDX,0xd
00721c74  MOV dword ptr [ESP + 0x4],EDX
00721c78  MOVSX EDX,word ptr [ECX + 0x4]
00721c7c  MOVSX ECX,word ptr [ECX + 0xe]
00721c80  SHL EDX,0x8
00721c83  ADD EDX,ESI
00721c85  SHL EDX,0x8
00721c88  SHL ECX,0xd
00721c8b  MOV dword ptr [ESP + 0x14],ECX
00721c8f  MOV dword ptr [ESP + 0x8],EDX
00721c93  POP ESI
00721c94  FILD dword ptr [ESP + 0x10]
00721c98  FMUL float ptr [0x00890980]
00721c9e  FSTP float ptr [EAX + 0x30]
00721ca1  FILD dword ptr [ESP]
00721ca4  FMUL float ptr [0x00890980]
00721caa  FSTP float ptr [EAX + 0x34]
00721cad  FILD dword ptr [ESP + 0x4]
00721cb1  FMUL float ptr [0x00890980]
00721cb7  FSTP float ptr [EAX + 0x38]
00721cba  ADD ESP,0xc
00721cbd  RET 0x4
