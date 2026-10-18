0064c1d0  MOV EAX,dword ptr [ESP + 0x4]
0064c1d4  FLD float ptr [EAX + 0x4]
0064c1d7  MOV EDX,dword ptr [ESP + 0xc]
0064c1db  FLD float ptr [EAX + 0x8]
0064c1de  FLD float ptr [EAX]
0064c1e0  MOV EAX,dword ptr [ESP + 0x8]
0064c1e4  FMUL float ptr [0x00890da8]
0064c1ea  MOV dword ptr [ECX + 0x10],0x8f83d0
0064c1f1  MOV dword ptr [ECX + 0x14],0x0
0064c1f8  MOV dword ptr [ECX + 0x18],EAX
0064c1fb  FSTP float ptr [ECX]
0064c1fd  MOV dword ptr [ECX + 0x1c],EDX
0064c200  FXCH
0064c202  FMUL float ptr [0x00890da8]
0064c208  FSTP float ptr [ECX + 0x4]
0064c20b  FMUL float ptr [0x00890da8]
0064c211  FSTP float ptr [ECX + 0x8]
0064c214  RET 0xc
