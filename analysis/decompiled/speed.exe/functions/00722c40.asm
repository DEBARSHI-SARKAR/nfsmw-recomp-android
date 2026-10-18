00722c40  PUSH ESI
00722c41  PUSH EDI
00722c42  MOV EDI,dword ptr [ESP + 0xc]
00722c46  FLD float ptr [EDI]
00722c48  MOV ESI,ECX
00722c4a  FMUL float ptr [0x008b2a38]
00722c50  CALL 0x007c4b80
00722c55  MOV word ptr [ESI + 0x2c],AX
00722c59  FLD float ptr [EDI + 0x4]
00722c5c  FMUL float ptr [0x008b2a38]
00722c62  CALL 0x007c4b80
00722c67  MOV word ptr [ESI + 0x2e],AX
00722c6b  FLD float ptr [EDI + 0x8]
00722c6e  FMUL float ptr [0x008b2a38]
00722c74  CALL 0x007c4b80
00722c79  MOV word ptr [ESI + 0x30],AX
00722c7d  FLD float ptr [EDI + 0x10]
00722c80  FMUL float ptr [0x008b2a38]
00722c86  CALL 0x007c4b80
00722c8b  MOV word ptr [ESI + 0x32],AX
00722c8f  FLD float ptr [EDI + 0x14]
00722c92  FMUL float ptr [0x008b2a38]
00722c98  CALL 0x007c4b80
00722c9d  MOV word ptr [ESI + 0x34],AX
00722ca1  FLD float ptr [EDI + 0x18]
00722ca4  FMUL float ptr [0x008b2a38]
00722caa  CALL 0x007c4b80
00722caf  MOV word ptr [ESI + 0x36],AX
00722cb3  FLD float ptr [EDI + 0x20]
00722cb6  FMUL float ptr [0x008b2a38]
00722cbc  CALL 0x007c4b80
00722cc1  MOV word ptr [ESI + 0x38],AX
00722cc5  FLD float ptr [EDI + 0x24]
00722cc8  FMUL float ptr [0x008b2a38]
00722cce  CALL 0x007c4b80
00722cd3  MOV word ptr [ESI + 0x3a],AX
00722cd7  FLD float ptr [EDI + 0x28]
00722cda  FMUL float ptr [0x008b2a38]
00722ce0  CALL 0x007c4b80
00722ce5  MOV word ptr [ESI + 0x3c],AX
00722ce9  MOV EAX,dword ptr [EDI + 0x30]
00722cec  MOV dword ptr [ESI + 0x20],EAX
00722cef  MOV ECX,dword ptr [EDI + 0x34]
00722cf2  MOV dword ptr [ESI + 0x24],ECX
00722cf5  MOV EDX,dword ptr [EDI + 0x38]
00722cf8  POP EDI
00722cf9  MOV dword ptr [ESI + 0x28],EDX
00722cfc  POP ESI
00722cfd  RET 0x4
