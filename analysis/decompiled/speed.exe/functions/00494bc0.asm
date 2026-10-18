00494bc0  PUSH ECX
00494bc1  MOVZX EAX,word ptr [ECX + 0x4]
00494bc5  MOV dword ptr [ESP],EAX
00494bc8  MOV EAX,dword ptr [ESP + 0x8]
00494bcc  FILD dword ptr [ESP]
00494bcf  FMUL float ptr [0x008957bc]
00494bd5  FSUB float ptr [0x0089096c]
00494bdb  FSTP float ptr [EAX + 0x8]
00494bde  MOVZX EDX,word ptr [ECX + 0x6]
00494be2  MOV dword ptr [ESP + 0x8],EDX
00494be6  FILD dword ptr [ESP + 0x8]
00494bea  FMUL float ptr [0x008957bc]
00494bf0  FSUB float ptr [0x0089096c]
00494bf6  FSTP float ptr [EAX + 0xc]
00494bf9  MOVZX EDX,word ptr [ECX + 0x8]
00494bfd  MOV dword ptr [ESP + 0x8],EDX
00494c01  FILD dword ptr [ESP + 0x8]
00494c05  FMUL float ptr [0x008957bc]
00494c0b  FSTP float ptr [EAX + 0x10]
00494c0e  MOVZX EDX,word ptr [ECX + 0xa]
00494c12  MOV dword ptr [ESP + 0x8],EDX
00494c16  FILD dword ptr [ESP + 0x8]
00494c1a  FMUL float ptr [0x008957bc]
00494c20  FSTP float ptr [EAX + 0x14]
00494c23  MOV DL,byte ptr [ECX + 0xc]
00494c26  MOV byte ptr [EAX + 0x18],DL
00494c29  MOVZX EDX,word ptr [ECX]
00494c2c  MOV dword ptr [ESP + 0x8],EDX
00494c30  FILD dword ptr [ESP + 0x8]
00494c34  FMUL float ptr [0x009117fc]
00494c3a  FMUL float ptr [0x00895500]
00494c40  FSUB float ptr [0x00895444]
00494c46  FSTP float ptr [EAX]
00494c48  MOVZX ECX,word ptr [ECX + 0x2]
00494c4c  MOV dword ptr [ESP + 0x8],ECX
00494c50  FILD dword ptr [ESP + 0x8]
00494c54  FMUL float ptr [0x009117fc]
00494c5a  FMUL float ptr [0x00895500]
00494c60  FSUB float ptr [0x00895444]
00494c66  FSTP float ptr [EAX + 0x4]
00494c69  POP ECX
00494c6a  RET 0x4
