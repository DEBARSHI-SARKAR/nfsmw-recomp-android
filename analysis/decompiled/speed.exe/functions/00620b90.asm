00620b90  SUB ESP,0x14
00620b93  PUSH ESI
00620b94  MOV ESI,ECX
00620b96  MOVSX EAX,word ptr [ESI]
00620b99  MOVSX ECX,word ptr [ESI + 0x2]
00620b9d  MOVSX EDX,word ptr [ESI + 0x4]
00620ba1  MOV dword ptr [ESP + 0x4],EAX
00620ba5  MOVSX EAX,word ptr [ESI + 0x6]
00620ba9  FILD dword ptr [ESP + 0x4]
00620bad  MOV dword ptr [ESP + 0x4],ECX
00620bb1  PUSH EDI
00620bb2  FMUL float ptr [0x00896ab8]
00620bb8  MOV EDI,dword ptr [ESP + 0x20]
00620bbc  LEA ECX,[ESP + 0xc]
00620bc0  PUSH EDI
00620bc1  FSTP float ptr [ESP + 0x10]
00620bc5  PUSH ECX
00620bc6  FILD dword ptr [ESP + 0x10]
00620bca  MOV dword ptr [ESP + 0x10],EDX
00620bce  FMUL float ptr [0x00896ab8]
00620bd4  FSTP float ptr [ESP + 0x18]
00620bd8  FILD dword ptr [ESP + 0x10]
00620bdc  MOV dword ptr [ESP + 0x10],EAX
00620be0  FMUL float ptr [0x00896ab8]
00620be6  FSTP float ptr [ESP + 0x1c]
00620bea  FILD dword ptr [ESP + 0x10]
00620bee  FMUL float ptr [0x00896ab8]
00620bf4  FSTP float ptr [ESP + 0x20]
00620bf8  CALL 0x005ca910
00620bfd  MOVSX EDX,word ptr [ESI + 0x8]
00620c01  MOV dword ptr [ESP + 0x28],EDX
00620c05  ADD ESP,0x8
00620c08  FILD dword ptr [ESP + 0x20]
00620c0c  FMUL float ptr [0x00890d60]
00620c12  FSTP float ptr [EDI + 0x30]
00620c15  MOVSX EAX,word ptr [ESI + 0xa]
00620c19  MOV dword ptr [ESP + 0x20],EAX
00620c1d  FILD dword ptr [ESP + 0x20]
00620c21  FMUL float ptr [0x00890d60]
00620c27  FSTP float ptr [EDI + 0x34]
00620c2a  MOVSX ECX,word ptr [ESI + 0xc]
00620c2e  MOV dword ptr [ESP + 0x20],ECX
00620c32  FILD dword ptr [ESP + 0x20]
00620c36  FMUL float ptr [0x00890d60]
00620c3c  FSTP float ptr [EDI + 0x38]
00620c3f  MOV dword ptr [EDI + 0x3c],0x3f800000
00620c46  POP EDI
00620c47  POP ESI
00620c48  ADD ESP,0x14
00620c4b  RET 0x4
