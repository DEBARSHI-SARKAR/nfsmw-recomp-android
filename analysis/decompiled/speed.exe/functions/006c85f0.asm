006c85f0  SUB ESP,0x18
006c85f3  MOV EDX,dword ptr [ESP + 0x1c]
006c85f7  FLD float ptr [EDX]
006c85f9  MOV EAX,ECX
006c85fb  FADD float ptr [EDX + 0xc]
006c85fe  PUSH ESI
006c85ff  FLD float ptr [EDX + 0x10]
006c8602  FADD float ptr [EDX + 0x4]
006c8605  FLD float ptr [EDX + 0x14]
006c8608  FADD float ptr [EDX + 0x8]
006c860b  FSTP float ptr [ESP + 0x18]
006c860f  FXCH
006c8611  FMUL float ptr [0x008933d4]
006c8617  FSTP float ptr [ESP + 0x4]
006c861b  MOV ESI,dword ptr [ESP + 0x4]
006c861f  MOV dword ptr [ECX],ESI
006c8621  FMUL float ptr [0x008933d4]
006c8627  FSTP float ptr [ESP + 0x8]
006c862b  MOV ESI,dword ptr [ESP + 0x8]
006c862f  FLD float ptr [ESP + 0x18]
006c8633  MOV dword ptr [ECX + 0x4],ESI
006c8636  FMUL float ptr [0x008933d4]
006c863c  FSTP float ptr [ESP + 0xc]
006c8640  MOV ESI,dword ptr [ESP + 0xc]
006c8644  MOV dword ptr [ECX + 0x8],ESI
006c8647  FLD float ptr [EDX + 0xc]
006c864a  FSUB float ptr [EAX]
006c864c  POP ESI
006c864d  FSTP float ptr [ESP + 0xc]
006c8651  FLD float ptr [EDX + 0x10]
006c8654  FSUB float ptr [EAX + 0x4]
006c8657  FSTP float ptr [ESP + 0x10]
006c865b  MOV ECX,dword ptr [ESP + 0x10]
006c865f  FLD float ptr [EDX + 0x14]
006c8662  MOV EDX,dword ptr [ESP + 0xc]
006c8666  FSUB float ptr [EAX + 0x8]
006c8669  MOV dword ptr [ESP],EDX
006c866c  MOV dword ptr [ESP + 0x4],ECX
006c8670  FSTP float ptr [ESP + 0x14]
006c8674  MOV EDX,dword ptr [ESP + 0x14]
006c8678  MOV dword ptr [ESP + 0x8],EDX
006c867c  FLD float ptr [ESP + 0x8]
006c8680  FMUL float ptr [ESP + 0x8]
006c8684  FLD float ptr [ESP + 0x4]
006c8688  FMUL float ptr [ESP + 0x4]
006c868c  FADDP
006c868e  FLD float ptr [ESP]
006c8691  FMUL float ptr [ESP]
006c8694  FADDP
006c8696  FSQRT
006c8698  FSTP float ptr [EAX + 0xc]
006c869b  ADD ESP,0x18
006c869e  RET 0x4
