0066a890  PUSH -0x1
0066a892  PUSH 0x87a626
0066a897  MOV EAX,FS:[0x0]
0066a89d  PUSH EAX
0066a89e  MOV dword ptr FS:[0x0],ESP
0066a8a5  SUB ESP,0x19c
0066a8ab  PUSH EBX
0066a8ac  PUSH EBP
0066a8ad  MOV EBP,dword ptr [ESP + 0x1b8]
0066a8b4  MOVSX EAX,word ptr [EBP + 0x10]
0066a8b8  MOVSX EDX,word ptr [EBP + 0x14]
0066a8bc  MOV dword ptr [ESP + 0x8],EAX
0066a8c0  MOVSX EAX,word ptr [EBP + 0x8]
0066a8c4  FILD dword ptr [ESP + 0x8]
0066a8c8  MOV EBX,ECX
0066a8ca  MOVSX ECX,word ptr [EBP + 0x12]
0066a8ce  FMUL float ptr [0x00890d60]
0066a8d4  MOV dword ptr [ESP + 0x8],ECX
0066a8d8  FSTP float ptr [ESP + 0x58]
0066a8dc  MOVSX ECX,word ptr [EBP + 0xa]
0066a8e0  FILD dword ptr [ESP + 0x8]
0066a8e4  MOV dword ptr [ESP + 0x8],EDX
0066a8e8  MOVSX EDX,word ptr [EBP + 0xc]
0066a8ec  FMUL float ptr [0x00890d60]
0066a8f2  PUSH ESI
0066a8f3  FSTP float ptr [ESP + 0x60]
0066a8f7  PUSH EDI
0066a8f8  FILD dword ptr [ESP + 0x10]
0066a8fc  MOV dword ptr [ESP + 0x10],EAX
0066a900  MOVSX EAX,word ptr [EBP]
0066a904  FMUL float ptr [0x00890d60]
0066a90a  MOV ESI,0x8a3028
0066a90f  LEA EDI,[ESP + 0x6c]
0066a913  FSTP float ptr [ESP + 0x68]
0066a917  PUSH 0x0
0066a919  FILD dword ptr [ESP + 0x14]
0066a91d  MOV dword ptr [ESP + 0x14],ECX
0066a921  MOVSX ECX,word ptr [EBP + 0x2]
0066a925  FMUL float ptr [0x00890d60]
0066a92b  PUSH 0x0
0066a92d  MOV byte ptr [ESP + 0x1f],0x0
0066a932  FSTP float ptr [ESP + 0x24]
0066a936  FILD dword ptr [ESP + 0x18]
0066a93a  MOV dword ptr [ESP + 0x18],EDX
0066a93e  MOVSX EDX,word ptr [EBP + 0x4]
0066a942  FMUL float ptr [0x00890d60]
0066a948  FSTP float ptr [ESP + 0x28]
0066a94c  FILD dword ptr [ESP + 0x18]
0066a950  MOV dword ptr [ESP + 0x18],EAX
0066a954  MOVSX EAX,word ptr [EBP + 0x6]
0066a958  FMUL float ptr [0x00890d60]
0066a95e  FSTP float ptr [ESP + 0x2c]
0066a962  FILD dword ptr [ESP + 0x18]
0066a966  MOV dword ptr [ESP + 0x18],ECX
0066a96a  MOV ECX,0x10
0066a96f  MOVSD.REP ES:EDI,ESI
0066a971  FMUL float ptr [0x00896ab8]
0066a977  FSTP float ptr [ESP + 0x44]
0066a97b  FILD dword ptr [ESP + 0x18]
0066a97f  FMUL float ptr [0x00896ab8]
0066a985  MOV ESI,dword ptr [ESP + 0x1cc]
0066a98c  FSTP float ptr [ESP + 0x48]
0066a990  MOV dword ptr [ESP + 0x18],EDX
0066a994  LEA ECX,[ESP + 0x54]
0066a998  FILD dword ptr [ESP + 0x18]
0066a99c  MOV dword ptr [ESP + 0x18],EAX
0066a9a0  MOV EAX,dword ptr [ESI + 0x4]
0066a9a3  PUSH EAX
0066a9a4  FMUL float ptr [0x00896ab8]
0066a9aa  FSTP float ptr [ESP + 0x50]
0066a9ae  FILD dword ptr [ESP + 0x1c]
0066a9b2  FMUL float ptr [0x00896ab8]
0066a9b8  FSTP float ptr [ESP + 0x54]
0066a9bc  CALL 0x00467c30
0066a9c1  MOV ECX,dword ptr [EBP + 0x24]
0066a9c4  TEST ECX,ECX
0066a9c6  LEA EAX,[EBP + 0x24]
0066a9c9  MOV dword ptr [ESP + 0x1b4],0x0
0066a9d4  JZ 0x0066aa28
0066a9d6  PUSH EAX
0066a9d7  CALL 0x006e95e0
0066a9dc  ADD ESP,0x4
0066a9df  PUSH EAX
0066a9e0  LEA ECX,[ESP + 0x2c]
0066a9e4  CALL 0x006e9660
0066a9e9  MOV EAX,dword ptr [EAX + 0x4]
0066a9ec  PUSH EAX
0066a9ed  LEA ECX,[ESP + 0x50]
0066a9f1  MOV byte ptr [ESP + 0x1b8],0x1
0066a9f9  CALL 0x0045a760
0066a9fe  LEA ECX,[ESP + 0x28]
0066aa02  MOV byte ptr [ESP + 0x1b4],0x0
0066aa0a  CALL 0x0045a430
0066aa0f  MOV ECX,dword ptr [ESP + 0x50]
0066aa13  CMP ECX,dword ptr [0x00988e84]
0066aa19  JNZ 0x0066aa28
0066aa1b  MOV ESI,dword ptr [ESI + 0x4]
0066aa1e  PUSH ESI
0066aa1f  LEA ECX,[ESP + 0x50]
0066aa23  CALL 0x0045a760
0066aa28  MOV AL,byte ptr [ESP + 0x1c8]
0066aa2f  CMP AL,0x1
0066aa31  JNZ 0x0066aa58
0066aa33  TEST byte ptr [EBP + 0xe],0x20
0066aa37  JZ 0x0066aaff
0066aa3d  LEA ECX,[ESP + 0x4c]
0066aa41  MOV dword ptr [ESP + 0x1b4],0xffffffff
0066aa4c  CALL 0x0045a430
0066aa51  XOR AL,AL
0066aa53  JMP 0x0066ac33
0066aa58  TEST AL,AL
0066aa5a  JNZ 0x0066aaff
0066aa60  LEA EDX,[ESP + 0x6c]
0066aa64  PUSH EDX
0066aa65  LEA EAX,[ESP + 0x40]
0066aa69  PUSH EAX
0066aa6a  CALL 0x005ca910
0066aa6f  MOV EDX,dword ptr [ESP + 0x28]
0066aa73  MOV ECX,dword ptr [ESP + 0x24]
0066aa77  MOV EAX,dword ptr [ESP + 0x2c]
0066aa7b  MOV dword ptr [ESP + 0x34],EDX
0066aa7f  MOV dword ptr [ESP + 0xa8],EDX
0066aa86  MOV dword ptr [ESP + 0x30],ECX
0066aa8a  MOV dword ptr [ESP + 0xa4],ECX
0066aa91  LEA EDX,[ESP + 0x74]
0066aa95  MOV dword ptr [ESP + 0x3c],0x3f800000
0066aa9d  MOV ECX,dword ptr [ESP + 0x3c]
0066aaa1  PUSH EDX
0066aaa2  MOV dword ptr [ESP + 0x3c],EAX
0066aaa6  MOV dword ptr [ESP + 0xb0],EAX
0066aaad  MOV dword ptr [ESP + 0xb4],ECX
0066aab4  CALL 0x005c8cc0
0066aab9  MOV EAX,[0x008a2fb4]
0066aabe  MOV ECX,dword ptr [0x008a2fb8]
0066aac4  MOV EDX,dword ptr [0x008a2fbc]
0066aaca  MOV dword ptr [ESP + 0x28],EAX
0066aace  MOV EAX,[0x008a2fd0]
0066aad3  MOV dword ptr [ESP + 0x2c],ECX
0066aad7  MOV ECX,dword ptr [0x008a2fd4]
0066aadd  MOV dword ptr [ESP + 0x30],EDX
0066aae1  MOV EDX,dword ptr [0x008a2fd8]
0066aae7  MOV dword ptr [ESP + 0x48],EAX
0066aaeb  MOV EAX,[0x008a2fdc]
0066aaf0  ADD ESP,0xc
0066aaf3  MOV dword ptr [ESP + 0x40],ECX
0066aaf7  MOV dword ptr [ESP + 0x44],EDX
0066aafb  MOV dword ptr [ESP + 0x48],EAX
0066aaff  MOV AX,word ptr [EBP + 0xe]
0066ab03  TEST AL,0xe
0066ab05  MOV EDI,dword ptr [ESP + 0x1bc]
0066ab0c  JZ 0x0066ab46
0066ab0e  MOVZX ECX,AX
0066ab11  PUSH ECX
0066ab12  LEA EDX,[ESP + 0x40]
0066ab16  PUSH EDX
0066ab17  MOV EDX,dword ptr [EBP + 0x20]
0066ab1a  LEA EAX,[ESP + 0x54]
0066ab1e  PUSH EAX
0066ab1f  LEA ECX,[ESP + 0x28]
0066ab23  PUSH ECX
0066ab24  PUSH EDX
0066ab25  LEA EAX,[ESP + 0x74]
0066ab29  PUSH EAX
0066ab2a  PUSH ECX
0066ab2b  MOV ECX,dword ptr [EBP + 0x28]
0066ab2e  MOV EAX,ESP
0066ab30  MOV dword ptr [EAX],ECX
0066ab32  MOV EDX,dword ptr [EDI]
0066ab34  MOV ECX,EDI
0066ab36  MOV dword ptr [ESP + 0x34],ESP
0066ab3a  CALL dword ptr [EDX + 0x8]
0066ab3d  TEST AL,AL
0066ab3f  JZ 0x0066ab46
0066ab41  MOV byte ptr [ESP + 0x17],0x1
0066ab46  TEST byte ptr [EBP + 0xe],0x10
0066ab4a  JZ 0x0066ac1b
0066ab50  PUSH EBP
0066ab51  MOV ECX,EBX
0066ab53  CALL 0x0066a730
0066ab58  TEST EAX,EAX
0066ab5a  JZ 0x0066ac1b
0066ab60  MOV EBX,dword ptr [EAX]
0066ab62  TEST EBX,EBX
0066ab64  JLE 0x0066ac1b
0066ab6a  MOV CL,byte ptr [ESP + 0x1c8]
0066ab71  TEST CL,CL
0066ab73  JNZ 0x0066abf2
0066ab75  TEST EBX,EBX
0066ab77  JLE 0x0066abdb
0066ab79  MOV EAX,dword ptr [EAX + 0xc]
0066ab7c  LEA ESI,[ESP + 0xac]
0066ab83  MOV ECX,ESI
0066ab85  SUB EAX,ECX
0066ab87  MOV dword ptr [ESP + 0x18],EAX
0066ab8b  MOV dword ptr [ESP + 0x10],EBX
0066ab8f  JMP 0x0066ab95
0066ab91  MOV EAX,dword ptr [ESP + 0x18]
0066ab95  ADD EAX,ESI
0066ab97  MOV EDX,dword ptr [EAX]
0066ab99  MOV ECX,dword ptr [EAX + 0x4]
0066ab9c  MOV dword ptr [ESP + 0x28],EDX
0066aba0  MOV EDX,dword ptr [EAX + 0x8]
0066aba3  MOV EAX,dword ptr [EAX + 0xc]
0066aba6  MOV dword ptr [ESP + 0x2c],ECX
0066abaa  PUSH ESI
0066abab  LEA ECX,[ESP + 0x70]
0066abaf  MOV dword ptr [ESP + 0x34],EDX
0066abb3  PUSH ECX
0066abb4  LEA EDX,[ESP + 0x30]
0066abb8  MOV dword ptr [ESP + 0x3c],EAX
0066abbc  PUSH EDX
0066abbd  MOV dword ptr [ESP + 0x40],0x3f800000
0066abc5  CALL 0x004fa510
0066abca  MOV EAX,dword ptr [ESP + 0x1c]
0066abce  ADD ESP,0xc
0066abd1  ADD ESI,0x10
0066abd4  DEC EAX
0066abd5  MOV dword ptr [ESP + 0x10],EAX
0066abd9  JNZ 0x0066ab91
0066abdb  MOVZX EAX,word ptr [EBP + 0xe]
0066abdf  PUSH 0x0
0066abe1  PUSH EAX
0066abe2  LEA ECX,[ESP + 0x54]
0066abe6  PUSH ECX
0066abe7  PUSH EBX
0066abe8  LEA EDX,[ESP + 0xbc]
0066abef  PUSH EDX
0066abf0  JMP 0x0066ac03
0066abf2  MOVZX ECX,word ptr [EBP + 0xe]
0066abf6  MOV EAX,dword ptr [EAX + 0xc]
0066abf9  PUSH 0x1
0066abfb  PUSH ECX
0066abfc  LEA EDX,[ESP + 0x54]
0066ac00  PUSH EDX
0066ac01  PUSH EBX
0066ac02  PUSH EAX
0066ac03  PUSH ECX
0066ac04  MOV ECX,dword ptr [EBP + 0x28]
0066ac07  MOV EAX,ESP
0066ac09  MOV dword ptr [EAX],ECX
0066ac0b  MOV EDX,dword ptr [EDI]
0066ac0d  MOV ECX,EDI
0066ac0f  MOV dword ptr [ESP + 0x30],ESP
0066ac13  CALL dword ptr [EDX + 0xc]
0066ac16  MOV byte ptr [ESP + 0x17],0x1
0066ac1b  LEA ECX,[ESP + 0x4c]
0066ac1f  MOV dword ptr [ESP + 0x1b4],0xffffffff
0066ac2a  CALL 0x0045a430
0066ac2f  MOV AL,byte ptr [ESP + 0x17]
0066ac33  MOV ECX,dword ptr [ESP + 0x1ac]
0066ac3a  POP EDI
0066ac3b  POP ESI
0066ac3c  POP EBP
0066ac3d  MOV dword ptr FS:[0x0],ECX
0066ac44  POP EBX
0066ac45  ADD ESP,0x1a8
0066ac4b  RET 0x10
