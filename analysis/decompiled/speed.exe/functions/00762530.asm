00762530  MOV EAX,dword ptr [ESP + 0x4]
00762534  MOV EDX,dword ptr [ESP + 0x8]
00762538  LEA EAX,[ECX + EAX*0x8]
0076253b  MOVSX ECX,word ptr [EAX]
0076253e  MOV dword ptr [ESP + 0x4],ECX
00762542  MOV ECX,dword ptr [ESP + 0xc]
00762546  FILD dword ptr [ESP + 0x4]
0076254a  PUSH ESI
0076254b  ADD EAX,0x8
0076254e  PUSH EDI
0076254f  FMUL float ptr [0x00905cf4]
00762555  ADD EAX,0x8
00762558  FADD float ptr [EDX]
0076255a  FSTP float ptr [ECX]
0076255c  MOVSX ESI,word ptr [EAX + -0xe]
00762560  MOV dword ptr [ESP + 0xc],ESI
00762564  FILD dword ptr [ESP + 0xc]
00762568  FMUL float ptr [0x00905cf4]
0076256e  FADD float ptr [EDX + 0x4]
00762571  FSTP float ptr [ECX + 0x4]
00762574  MOVSX ESI,word ptr [EAX + -0xc]
00762578  MOV dword ptr [ESP + 0xc],ESI
0076257c  XOR ESI,ESI
0076257e  FILD dword ptr [ESP + 0xc]
00762582  FMUL float ptr [0x00905cf4]
00762588  FADD float ptr [EDX + 0x8]
0076258b  MOV dword ptr [ECX + 0xc],ESI
0076258e  FSTP float ptr [ECX + 0x8]
00762591  MOVSX EDI,word ptr [EAX + -0x8]
00762595  MOV dword ptr [ESP + 0xc],EDI
00762599  FILD dword ptr [ESP + 0xc]
0076259d  FMUL float ptr [0x00905cf4]
007625a3  FADD float ptr [EDX]
007625a5  FSTP float ptr [ECX + 0x10]
007625a8  MOVSX EDI,word ptr [EAX + -0x6]
007625ac  MOV dword ptr [ESP + 0xc],EDI
007625b0  FILD dword ptr [ESP + 0xc]
007625b4  FMUL float ptr [0x00905cf4]
007625ba  FADD float ptr [EDX + 0x4]
007625bd  FSTP float ptr [ECX + 0x14]
007625c0  MOVSX EDI,word ptr [EAX + -0x4]
007625c4  MOV dword ptr [ESP + 0xc],EDI
007625c8  POP EDI
007625c9  FILD dword ptr [ESP + 0x8]
007625cd  FMUL float ptr [0x00905cf4]
007625d3  FADD float ptr [EDX + 0x8]
007625d6  MOV dword ptr [ECX + 0x1c],ESI
007625d9  FSTP float ptr [ECX + 0x18]
007625dc  MOVSX ESI,word ptr [EAX]
007625df  MOV dword ptr [ESP + 0x8],ESI
007625e3  FILD dword ptr [ESP + 0x8]
007625e7  FMUL float ptr [0x00905cf4]
007625ed  FADD float ptr [EDX]
007625ef  FSTP float ptr [ECX + 0x20]
007625f2  MOVSX ESI,word ptr [EAX + 0x2]
007625f6  MOV dword ptr [ESP + 0x8],ESI
007625fa  FILD dword ptr [ESP + 0x8]
007625fe  FMUL float ptr [0x00905cf4]
00762604  FADD float ptr [EDX + 0x4]
00762607  FSTP float ptr [ECX + 0x24]
0076260a  MOVSX ESI,word ptr [EAX + 0x4]
0076260e  MOV dword ptr [ESP + 0x8],ESI
00762612  POP ESI
00762613  FILD dword ptr [ESP + 0x4]
00762617  FMUL float ptr [0x00905cf4]
0076261d  FADD float ptr [EDX + 0x8]
00762620  FSTP float ptr [ECX + 0x28]
00762623  MOV DL,byte ptr [EAX + 0x6]
00762626  MOV AL,byte ptr [EAX + 0x7]
00762629  MOV byte ptr [ESP + 0x4],DL
0076262d  MOV byte ptr [ESP + 0x5],AL
00762631  MOV DX,word ptr [ESP + 0x4]
00762636  MOV word ptr [ECX + 0x2c],DX
0076263a  RET 0xc
