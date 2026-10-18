007ce3d5  MOV EDX,dword ptr [ESP + 0x4]
007ce3d9  AND EDX,0x300
007ce3df  OR EDX,0x7f
007ce3e2  MOV word ptr [ESP + 0x6],DX
007ce3e7  FLDCW word ptr [ESP + 0x6]
007ce3eb  RET
