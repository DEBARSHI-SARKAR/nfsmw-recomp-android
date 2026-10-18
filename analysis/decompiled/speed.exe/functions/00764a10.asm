00764a10  SUB ESP,0x10
00764a13  MOVSX EAX,byte ptr [ECX + 0x13]
00764a17  MOVSX EDX,byte ptr [ECX + 0x14]
00764a1b  MOV dword ptr [ESP],EAX
00764a1e  MOVSX EAX,byte ptr [ECX + 0x15]
00764a22  FILD dword ptr [ESP]
00764a25  MOV ECX,dword ptr [ESP + 0x14]
00764a29  FMUL float ptr [0x00890bf0]
00764a2f  MOV dword ptr [ESP],EDX
00764a32  FSTP float ptr [ESP + 0x4]
00764a36  MOV EDX,dword ptr [ESP + 0x4]
00764a3a  FILD dword ptr [ESP]
00764a3d  MOV dword ptr [ESP],EAX
00764a40  MOV dword ptr [ECX],EDX
00764a42  FMUL float ptr [0x00890bf0]
00764a48  FSTP float ptr [ESP + 0x8]
00764a4c  MOV EAX,dword ptr [ESP + 0x8]
00764a50  FILD dword ptr [ESP]
00764a53  MOV dword ptr [ECX + 0x4],EAX
00764a56  FMUL float ptr [0x00890bf0]
00764a5c  FSTP float ptr [ESP + 0xc]
00764a60  MOV EDX,dword ptr [ESP + 0xc]
00764a64  MOV dword ptr [ECX + 0x8],EDX
00764a67  ADD ESP,0x10
00764a6a  RET 0x4
