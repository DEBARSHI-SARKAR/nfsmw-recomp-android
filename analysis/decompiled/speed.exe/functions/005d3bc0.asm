005d3bc0  SUB ESP,0xc
005d3bc3  MOV ECX,dword ptr [ESP + 0x14]
005d3bc7  MOV EAX,dword ptr [ESP + 0x10]
005d3bcb  FLD float ptr [ECX + 0x8]
005d3bce  FMUL float ptr [EAX + 0x4]
005d3bd1  FLD float ptr [ECX + 0x4]
005d3bd4  FMUL float ptr [EAX + 0x8]
005d3bd7  FSUBP
005d3bd9  FSTP float ptr [ESP]
005d3bdc  MOV EDX,dword ptr [ESP]
005d3bdf  FLD float ptr [ECX]
005d3be1  FMUL float ptr [EAX + 0x8]
005d3be4  FLD float ptr [EAX]
005d3be6  FMUL float ptr [ECX + 0x8]
005d3be9  FSUBP
005d3beb  FSTP float ptr [ESP + 0x4]
005d3bef  FLD float ptr [EAX]
005d3bf1  FMUL float ptr [ECX + 0x4]
005d3bf4  FLD float ptr [ECX]
005d3bf6  FMUL float ptr [EAX + 0x4]
005d3bf9  MOV EAX,dword ptr [ESP + 0x18]
005d3bfd  MOV ECX,EAX
005d3bff  MOV dword ptr [ECX],EDX
005d3c01  MOV EDX,dword ptr [ESP + 0x4]
005d3c05  FSUBP
005d3c07  MOV dword ptr [ECX + 0x4],EDX
005d3c0a  PUSH EAX
005d3c0b  FSTP float ptr [ESP + 0xc]
005d3c0f  MOV EDX,dword ptr [ESP + 0xc]
005d3c13  PUSH EAX
005d3c14  MOV dword ptr [ECX + 0x8],EDX
005d3c17  CALL 0x0040fe20
005d3c1c  ADD ESP,0x14
005d3c1f  RET
