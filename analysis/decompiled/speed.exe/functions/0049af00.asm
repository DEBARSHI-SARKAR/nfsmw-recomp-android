0049af00  MOV EAX,dword ptr [ESP + 0xc]
0049af04  MOV EDX,dword ptr [ECX + 0x14]
0049af07  SUB ESP,0xac
0049af0d  CMP EAX,EDX
0049af0f  JZ 0x0049af14
0049af11  MOV dword ptr [ECX + 0x14],EAX
0049af14  PUSH EBX
0049af15  MOV EBX,dword ptr [ECX + 0xc]
0049af18  MOV ECX,dword ptr [EBX + 0xc]
0049af1b  PUSH EBP
0049af1c  MOVZX EBP,byte ptr [EBX + 0x12]
0049af20  MOV EAX,EBP
0049af22  SHL EAX,0x5
0049af25  LEA EDX,[EAX + EBX*0x1 + 0x18]
0049af29  MOV EAX,EBP
0049af2b  IMUL EAX,dword ptr [ESP + 0xc8]
0049af33  PUSH ESI
0049af34  MOV dword ptr [ESP + 0x28],ECX
0049af38  MOVZX ECX,byte ptr [EBX + 0x12]
0049af3c  PUSH EDI
0049af3d  LEA EAX,[EAX + EAX*0x2]
0049af40  XOR EDI,EDI
0049af42  TEST ECX,ECX
0049af44  MOV dword ptr [ESP + 0x1c],EBX
0049af48  MOV dword ptr [ESP + 0x30],EBP
0049af4c  MOV dword ptr [ESP + 0x40],EDX
0049af50  LEA ESI,[EDX + EAX*0x2]
0049af53  JLE 0x0049af7f
0049af55  JMP 0x0049af60
0049af60  MOV EDX,dword ptr [ESP + 0x2c]
0049af64  MOVZX EDX,word ptr [EDX + EDI*0x2]
0049af68  MOV EAX,0xaaaaaaab
0049af6d  MUL EDX
0049af6f  SHR EDX,0x3
0049af72  MOV byte ptr [ESP + EDI*0x1 + 0x44],DL
0049af76  INC EDI
0049af77  CMP EDI,ECX
0049af79  JL 0x0049af60
0049af7b  MOV EDX,dword ptr [ESP + 0x40]
0049af7f  MOV AL,byte ptr [ESP + 0xcc]
0049af86  TEST AL,AL
0049af88  JZ 0x0049b44a
0049af8e  MOV EAX,dword ptr [ESP + 0xd0]
0049af95  INC EAX
0049af96  IMUL EAX,ECX
0049af99  LEA EAX,[EAX + EAX*0x2]
0049af9c  XOR ECX,ECX
0049af9e  CMP EBP,0x4
0049afa1  LEA EDI,[EDX + EAX*0x2]
0049afa4  MOV EDX,dword ptr [ESP + 0xc4]
0049afab  MOV dword ptr [ESP + 0x18],ECX
0049afaf  JL 0x0049b342
0049afb5  MOV EAX,dword ptr [ESP + 0x2c]
0049afb9  ADD EAX,0x4
0049afbc  MOV dword ptr [ESP + 0x14],EAX
0049afc0  LEA EAX,[EBX + 0x4c]
0049afc3  MOVZX EBX,byte ptr [ESP + ECX*0x1 + 0x44]
0049afc8  MOV ECX,EBX
0049afca  AND ECX,0x1f
0049afcd  MOV EBP,0x1
0049afd2  SHL EBP,CL
0049afd4  MOV ECX,dword ptr [ESP + 0xc8]
0049afdb  SAR EBX,0x5
0049afde  TEST dword ptr [ECX + EBX*0x4],EBP
0049afe1  JZ 0x0049b095
0049afe7  MOVSX ECX,word ptr [ESI]
0049afea  MOV dword ptr [ESP + 0x10],ECX
0049afee  MOVSX ECX,word ptr [ESI + 0x2]
0049aff2  FILD dword ptr [ESP + 0x10]
0049aff6  MOV dword ptr [ESP + 0x10],ECX
0049affa  MOVSX ECX,word ptr [ESI + 0x4]
0049affe  FMUL float ptr [EAX + -0x24]
0049b001  FILD dword ptr [ESP + 0x10]
0049b005  MOV dword ptr [ESP + 0x10],ECX
0049b009  MOVSX ECX,word ptr [EDI]
0049b00c  FMUL float ptr [EAX + -0x20]
0049b00f  FILD dword ptr [ESP + 0x10]
0049b013  MOV dword ptr [ESP + 0x10],ECX
0049b017  MOVSX ECX,word ptr [EDI + 0x2]
0049b01b  FMUL float ptr [EAX + -0x1c]
0049b01e  ADD ESI,0x6
0049b021  FSTP float ptr [ESP + 0x3c]
0049b025  ADD EDI,0x6
0049b028  FILD dword ptr [ESP + 0x10]
0049b02c  MOV dword ptr [ESP + 0x10],ECX
0049b030  MOVSX ECX,word ptr [EDI + -0x2]
0049b034  FMUL float ptr [EAX + -0x24]
0049b037  FILD dword ptr [ESP + 0x10]
0049b03b  MOV dword ptr [ESP + 0x10],ECX
0049b03f  MOV ECX,dword ptr [ESP + 0x14]
0049b043  MOVZX ECX,word ptr [ECX + -0x4]
0049b047  FMUL float ptr [EAX + -0x20]
0049b04a  FSTP float ptr [ESP + 0x24]
0049b04e  FILD dword ptr [ESP + 0x10]
0049b052  FMUL float ptr [EAX + -0x1c]
0049b055  FSTP float ptr [ESP + 0x28]
0049b059  FSUB ST0,ST2
0049b05b  FMUL float ptr [ESP + 0xd4]
0049b062  FADD ST0,ST2
0049b064  FSTP float ptr [EDX + ECX*0x4]
0049b067  FLD float ptr [ESP + 0x24]
0049b06b  FSUB ST0,ST1
0049b06d  FMUL float ptr [ESP + 0xd4]
0049b074  FADD ST0,ST1
0049b076  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b07a  FSTP ST0
0049b07c  FSTP ST0
0049b07e  FLD float ptr [ESP + 0x28]
0049b082  FSUB float ptr [ESP + 0x3c]
0049b086  FMUL float ptr [ESP + 0xd4]
0049b08d  FADD float ptr [ESP + 0x3c]
0049b091  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b095  MOV ECX,dword ptr [ESP + 0x18]
0049b099  MOVZX EBX,byte ptr [ESP + ECX*0x1 + 0x45]
0049b09e  MOV ECX,EBX
0049b0a0  AND ECX,0x1f
0049b0a3  MOV EBP,0x1
0049b0a8  SHL EBP,CL
0049b0aa  MOV ECX,dword ptr [ESP + 0xc8]
0049b0b1  SAR EBX,0x5
0049b0b4  TEST dword ptr [ECX + EBX*0x4],EBP
0049b0b7  JZ 0x0049b169
0049b0bd  MOVSX ECX,word ptr [ESI]
0049b0c0  MOV dword ptr [ESP + 0x10],ECX
0049b0c4  MOVSX ECX,word ptr [ESI + 0x2]
0049b0c8  FILD dword ptr [ESP + 0x10]
0049b0cc  MOV dword ptr [ESP + 0x10],ECX
0049b0d0  MOVSX ECX,word ptr [ESI + 0x4]
0049b0d4  FMUL float ptr [EAX + -0x4]
0049b0d7  FILD dword ptr [ESP + 0x10]
0049b0db  MOV dword ptr [ESP + 0x10],ECX
0049b0df  MOVSX ECX,word ptr [EDI]
0049b0e2  FMUL float ptr [EAX]
0049b0e4  FILD dword ptr [ESP + 0x10]
0049b0e8  MOV dword ptr [ESP + 0x10],ECX
0049b0ec  MOVSX ECX,word ptr [EDI + 0x2]
0049b0f0  FMUL float ptr [EAX + 0x4]
0049b0f3  ADD ESI,0x6
0049b0f6  FSTP float ptr [ESP + 0x3c]
0049b0fa  ADD EDI,0x6
0049b0fd  FILD dword ptr [ESP + 0x10]
0049b101  MOV dword ptr [ESP + 0x10],ECX
0049b105  MOVSX ECX,word ptr [EDI + -0x2]
0049b109  FMUL float ptr [EAX + -0x4]
0049b10c  FILD dword ptr [ESP + 0x10]
0049b110  MOV dword ptr [ESP + 0x10],ECX
0049b114  MOV ECX,dword ptr [ESP + 0x14]
0049b118  MOVZX ECX,word ptr [ECX + -0x2]
0049b11c  FMUL float ptr [EAX]
0049b11e  FSTP float ptr [ESP + 0x24]
0049b122  FILD dword ptr [ESP + 0x10]
0049b126  FMUL float ptr [EAX + 0x4]
0049b129  FSTP float ptr [ESP + 0x28]
0049b12d  FSUB ST0,ST2
0049b12f  FMUL float ptr [ESP + 0xd4]
0049b136  FADD ST0,ST2
0049b138  FSTP float ptr [EDX + ECX*0x4]
0049b13b  FLD float ptr [ESP + 0x24]
0049b13f  FSUB ST0,ST1
0049b141  FMUL float ptr [ESP + 0xd4]
0049b148  FADD ST0,ST1
0049b14a  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b14e  FSTP ST0
0049b150  FSTP ST0
0049b152  FLD float ptr [ESP + 0x28]
0049b156  FSUB float ptr [ESP + 0x3c]
0049b15a  FMUL float ptr [ESP + 0xd4]
0049b161  FADD float ptr [ESP + 0x3c]
0049b165  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b169  MOV ECX,dword ptr [ESP + 0x18]
0049b16d  MOVZX EBX,byte ptr [ESP + ECX*0x1 + 0x46]
0049b172  MOV ECX,EBX
0049b174  AND ECX,0x1f
0049b177  MOV EBP,0x1
0049b17c  SHL EBP,CL
0049b17e  MOV ECX,dword ptr [ESP + 0xc8]
0049b185  SAR EBX,0x5
0049b188  TEST dword ptr [ECX + EBX*0x4],EBP
0049b18b  JZ 0x0049b23e
0049b191  MOVSX ECX,word ptr [ESI]
0049b194  MOV dword ptr [ESP + 0x10],ECX
0049b198  MOVSX ECX,word ptr [ESI + 0x2]
0049b19c  FILD dword ptr [ESP + 0x10]
0049b1a0  MOV dword ptr [ESP + 0x10],ECX
0049b1a4  MOVSX ECX,word ptr [ESI + 0x4]
0049b1a8  FMUL float ptr [EAX + 0x1c]
0049b1ab  FILD dword ptr [ESP + 0x10]
0049b1af  MOV dword ptr [ESP + 0x10],ECX
0049b1b3  MOVSX ECX,word ptr [EDI]
0049b1b6  FMUL float ptr [EAX + 0x20]
0049b1b9  FILD dword ptr [ESP + 0x10]
0049b1bd  MOV dword ptr [ESP + 0x10],ECX
0049b1c1  MOVSX ECX,word ptr [EDI + 0x2]
0049b1c5  FMUL float ptr [EAX + 0x24]
0049b1c8  ADD ESI,0x6
0049b1cb  FSTP float ptr [ESP + 0x3c]
0049b1cf  ADD EDI,0x6
0049b1d2  FILD dword ptr [ESP + 0x10]
0049b1d6  MOV dword ptr [ESP + 0x10],ECX
0049b1da  MOVSX ECX,word ptr [EDI + -0x2]
0049b1de  FMUL float ptr [EAX + 0x1c]
0049b1e1  FILD dword ptr [ESP + 0x10]
0049b1e5  MOV dword ptr [ESP + 0x10],ECX
0049b1e9  MOV ECX,dword ptr [ESP + 0x14]
0049b1ed  MOVZX ECX,word ptr [ECX]
0049b1f0  FMUL float ptr [EAX + 0x20]
0049b1f3  FSTP float ptr [ESP + 0x24]
0049b1f7  FILD dword ptr [ESP + 0x10]
0049b1fb  FMUL float ptr [EAX + 0x24]
0049b1fe  FSTP float ptr [ESP + 0x28]
0049b202  FSUB ST0,ST2
0049b204  FMUL float ptr [ESP + 0xd4]
0049b20b  FADD ST0,ST2
0049b20d  FSTP float ptr [EDX + ECX*0x4]
0049b210  FLD float ptr [ESP + 0x24]
0049b214  FSUB ST0,ST1
0049b216  FMUL float ptr [ESP + 0xd4]
0049b21d  FADD ST0,ST1
0049b21f  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b223  FSTP ST0
0049b225  FSTP ST0
0049b227  FLD float ptr [ESP + 0x28]
0049b22b  FSUB float ptr [ESP + 0x3c]
0049b22f  FMUL float ptr [ESP + 0xd4]
0049b236  FADD float ptr [ESP + 0x3c]
0049b23a  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b23e  MOV ECX,dword ptr [ESP + 0x18]
0049b242  MOVZX EBX,byte ptr [ESP + ECX*0x1 + 0x47]
0049b247  MOV ECX,EBX
0049b249  AND ECX,0x1f
0049b24c  MOV EBP,0x1
0049b251  SHL EBP,CL
0049b253  MOV ECX,dword ptr [ESP + 0xc8]
0049b25a  SAR EBX,0x5
0049b25d  TEST dword ptr [ECX + EBX*0x4],EBP
0049b260  JZ 0x0049b314
0049b266  MOVSX ECX,word ptr [ESI]
0049b269  MOV dword ptr [ESP + 0x10],ECX
0049b26d  MOVSX ECX,word ptr [ESI + 0x2]
0049b271  FILD dword ptr [ESP + 0x10]
0049b275  MOV dword ptr [ESP + 0x10],ECX
0049b279  MOVSX ECX,word ptr [ESI + 0x4]
0049b27d  FMUL float ptr [EAX + 0x3c]
0049b280  FILD dword ptr [ESP + 0x10]
0049b284  MOV dword ptr [ESP + 0x10],ECX
0049b288  MOVSX ECX,word ptr [EDI]
0049b28b  FMUL float ptr [EAX + 0x40]
0049b28e  FILD dword ptr [ESP + 0x10]
0049b292  MOV dword ptr [ESP + 0x10],ECX
0049b296  MOVSX ECX,word ptr [EDI + 0x2]
0049b29a  FMUL float ptr [EAX + 0x44]
0049b29d  ADD ESI,0x6
0049b2a0  FSTP float ptr [ESP + 0x3c]
0049b2a4  ADD EDI,0x6
0049b2a7  FILD dword ptr [ESP + 0x10]
0049b2ab  MOV dword ptr [ESP + 0x10],ECX
0049b2af  MOVSX ECX,word ptr [EDI + -0x2]
0049b2b3  FMUL float ptr [EAX + 0x3c]
0049b2b6  FILD dword ptr [ESP + 0x10]
0049b2ba  MOV dword ptr [ESP + 0x10],ECX
0049b2be  MOV ECX,dword ptr [ESP + 0x14]
0049b2c2  MOVZX ECX,word ptr [ECX + 0x2]
0049b2c6  FMUL float ptr [EAX + 0x40]
0049b2c9  FSTP float ptr [ESP + 0x24]
0049b2cd  FILD dword ptr [ESP + 0x10]
0049b2d1  FMUL float ptr [EAX + 0x44]
0049b2d4  FSTP float ptr [ESP + 0x28]
0049b2d8  FSUB ST0,ST2
0049b2da  FMUL float ptr [ESP + 0xd4]
0049b2e1  FADD ST0,ST2
0049b2e3  FSTP float ptr [EDX + ECX*0x4]
0049b2e6  FLD float ptr [ESP + 0x24]
0049b2ea  FSUB ST0,ST1
0049b2ec  FMUL float ptr [ESP + 0xd4]
0049b2f3  FADD ST0,ST1
0049b2f5  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b2f9  FSTP ST0
0049b2fb  FSTP ST0
0049b2fd  FLD float ptr [ESP + 0x28]
0049b301  FSUB float ptr [ESP + 0x3c]
0049b305  FMUL float ptr [ESP + 0xd4]
0049b30c  FADD float ptr [ESP + 0x3c]
0049b310  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b314  MOV EBX,dword ptr [ESP + 0x14]
0049b318  MOV ECX,dword ptr [ESP + 0x18]
0049b31c  MOV EBP,dword ptr [ESP + 0x30]
0049b320  ADD EBX,0x8
0049b323  ADD ECX,0x4
0049b326  MOV dword ptr [ESP + 0x14],EBX
0049b32a  LEA EBX,[EBP + -0x3]
0049b32d  ADD EAX,0x80
0049b332  CMP ECX,EBX
0049b334  MOV dword ptr [ESP + 0x18],ECX
0049b338  JL 0x0049afc3
0049b33e  MOV EBX,dword ptr [ESP + 0x1c]
0049b342  CMP ECX,EBP
0049b344  JGE 0x0049b6ac
0049b34a  MOV EAX,ECX
0049b34c  SHL EAX,0x5
0049b34f  LEA EAX,[EAX + EBX*0x1 + 0x2c]
0049b353  MOVZX EBX,byte ptr [ESP + ECX*0x1 + 0x44]
0049b358  MOV ECX,EBX
0049b35a  AND ECX,0x1f
0049b35d  MOV EBP,0x1
0049b362  SHL EBP,CL
0049b364  MOV ECX,dword ptr [ESP + 0xc8]
0049b36b  SAR EBX,0x5
0049b36e  TEST dword ptr [ECX + EBX*0x4],EBP
0049b371  JZ 0x0049b429
0049b377  MOVSX ECX,word ptr [ESI]
0049b37a  MOV dword ptr [ESP + 0x10],ECX
0049b37e  MOVSX ECX,word ptr [ESI + 0x2]
0049b382  FILD dword ptr [ESP + 0x10]
0049b386  MOV dword ptr [ESP + 0x10],ECX
0049b38a  MOVSX ECX,word ptr [ESI + 0x4]
0049b38e  FMUL float ptr [EAX + -0x4]
0049b391  FILD dword ptr [ESP + 0x10]
0049b395  MOV dword ptr [ESP + 0x10],ECX
0049b399  MOVSX ECX,word ptr [EDI]
0049b39c  FMUL float ptr [EAX]
0049b39e  FILD dword ptr [ESP + 0x10]
0049b3a2  MOV dword ptr [ESP + 0x10],ECX
0049b3a6  MOVSX ECX,word ptr [EDI + 0x2]
0049b3aa  FMUL float ptr [EAX + 0x4]
0049b3ad  MOV EBX,dword ptr [ESP + 0x2c]
0049b3b1  FSTP float ptr [ESP + 0x3c]
0049b3b5  ADD ESI,0x6
0049b3b8  FILD dword ptr [ESP + 0x10]
0049b3bc  MOV dword ptr [ESP + 0x10],ECX
0049b3c0  MOVSX ECX,word ptr [EDI + 0x4]
0049b3c4  FMUL float ptr [EAX + -0x4]
0049b3c7  FILD dword ptr [ESP + 0x10]
0049b3cb  MOV dword ptr [ESP + 0x10],ECX
0049b3cf  MOV ECX,dword ptr [ESP + 0x18]
0049b3d3  MOVZX EBX,word ptr [EBX + ECX*0x2]
0049b3d7  FMUL float ptr [EAX]
0049b3d9  ADD EDI,0x6
0049b3dc  FSTP float ptr [ESP + 0x24]
0049b3e0  FILD dword ptr [ESP + 0x10]
0049b3e4  FMUL float ptr [EAX + 0x4]
0049b3e7  FSTP float ptr [ESP + 0x28]
0049b3eb  FSUB ST0,ST2
0049b3ed  FMUL float ptr [ESP + 0xd4]
0049b3f4  FADD ST0,ST2
0049b3f6  FSTP float ptr [EDX + EBX*0x4]
0049b3f9  FLD float ptr [ESP + 0x24]
0049b3fd  FSUB ST0,ST1
0049b3ff  FMUL float ptr [ESP + 0xd4]
0049b406  FADD ST0,ST1
0049b408  FSTP float ptr [EDX + EBX*0x4 + 0x4]
0049b40c  FSTP ST0
0049b40e  FSTP ST0
0049b410  FLD float ptr [ESP + 0x28]
0049b414  FSUB float ptr [ESP + 0x3c]
0049b418  FMUL float ptr [ESP + 0xd4]
0049b41f  FADD float ptr [ESP + 0x3c]
0049b423  FSTP float ptr [EDX + EBX*0x4 + 0x8]
0049b427  JMP 0x0049b42d
0049b429  MOV ECX,dword ptr [ESP + 0x18]
0049b42d  MOV EBX,dword ptr [ESP + 0x30]
0049b431  INC ECX
0049b432  ADD EAX,0x20
0049b435  CMP ECX,EBX
0049b437  MOV dword ptr [ESP + 0x18],ECX
0049b43b  JL 0x0049b353
0049b441  MOV EBX,dword ptr [ESP + 0x1c]
0049b445  JMP 0x0049b6ac
0049b44a  MOV EDX,dword ptr [ESP + 0xc4]
0049b451  XOR EDI,EDI
0049b453  CMP EBP,0x4
0049b456  JL 0x0049b61c
0049b45c  MOV EAX,dword ptr [ESP + 0x2c]
0049b460  ADD EAX,0x4
0049b463  MOV dword ptr [ESP + 0x14],EAX
0049b467  LEA EAX,[EBX + 0x30]
0049b46a  LEA EBX,[EBX]
0049b470  MOVZX EBX,byte ptr [ESP + EDI*0x1 + 0x44]
0049b475  MOV ECX,EBX
0049b477  AND ECX,0x1f
0049b47a  MOV EBP,0x1
0049b47f  SHL EBP,CL
0049b481  MOV ECX,dword ptr [ESP + 0xc8]
0049b488  SAR EBX,0x5
0049b48b  TEST dword ptr [ECX + EBX*0x4],EBP
0049b48e  JZ 0x0049b4d1
0049b490  MOVSX EBX,word ptr [ESI]
0049b493  MOV ECX,dword ptr [ESP + 0x14]
0049b497  MOVZX ECX,word ptr [ECX + -0x4]
0049b49b  MOV dword ptr [ESP + 0x10],EBX
0049b49f  ADD ESI,0x6
0049b4a2  FILD dword ptr [ESP + 0x10]
0049b4a6  FMUL float ptr [EAX + -0x8]
0049b4a9  FSTP float ptr [EDX + ECX*0x4]
0049b4ac  MOVSX EBX,word ptr [ESI + -0x4]
0049b4b0  MOV dword ptr [ESP + 0x10],EBX
0049b4b4  FILD dword ptr [ESP + 0x10]
0049b4b8  FMUL float ptr [EAX + -0x4]
0049b4bb  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b4bf  MOVSX EBX,word ptr [ESI + -0x2]
0049b4c3  MOV dword ptr [ESP + 0x10],EBX
0049b4c7  FILD dword ptr [ESP + 0x10]
0049b4cb  FMUL float ptr [EAX]
0049b4cd  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b4d1  MOVZX EBX,byte ptr [ESP + EDI*0x1 + 0x45]
0049b4d6  MOV ECX,EBX
0049b4d8  AND ECX,0x1f
0049b4db  MOV EBP,0x1
0049b4e0  SHL EBP,CL
0049b4e2  MOV ECX,dword ptr [ESP + 0xc8]
0049b4e9  SAR EBX,0x5
0049b4ec  TEST dword ptr [ECX + EBX*0x4],EBP
0049b4ef  JZ 0x0049b533
0049b4f1  MOVSX EBX,word ptr [ESI]
0049b4f4  MOV ECX,dword ptr [ESP + 0x14]
0049b4f8  MOVZX ECX,word ptr [ECX + -0x2]
0049b4fc  MOV dword ptr [ESP + 0x10],EBX
0049b500  ADD ESI,0x6
0049b503  FILD dword ptr [ESP + 0x10]
0049b507  FMUL float ptr [EAX + 0x18]
0049b50a  FSTP float ptr [EDX + ECX*0x4]
0049b50d  MOVSX EBX,word ptr [ESI + -0x4]
0049b511  MOV dword ptr [ESP + 0x10],EBX
0049b515  FILD dword ptr [ESP + 0x10]
0049b519  FMUL float ptr [EAX + 0x1c]
0049b51c  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b520  MOVSX EBX,word ptr [ESI + -0x2]
0049b524  MOV dword ptr [ESP + 0x10],EBX
0049b528  FILD dword ptr [ESP + 0x10]
0049b52c  FMUL float ptr [EAX + 0x20]
0049b52f  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b533  MOVZX EBX,byte ptr [ESP + EDI*0x1 + 0x46]
0049b538  MOV ECX,EBX
0049b53a  AND ECX,0x1f
0049b53d  MOV EBP,0x1
0049b542  SHL EBP,CL
0049b544  MOV ECX,dword ptr [ESP + 0xc8]
0049b54b  SAR EBX,0x5
0049b54e  TEST dword ptr [ECX + EBX*0x4],EBP
0049b551  JZ 0x0049b594
0049b553  MOVSX EBX,word ptr [ESI]
0049b556  MOV ECX,dword ptr [ESP + 0x14]
0049b55a  MOVZX ECX,word ptr [ECX]
0049b55d  MOV dword ptr [ESP + 0x10],EBX
0049b561  ADD ESI,0x6
0049b564  FILD dword ptr [ESP + 0x10]
0049b568  FMUL float ptr [EAX + 0x38]
0049b56b  FSTP float ptr [EDX + ECX*0x4]
0049b56e  MOVSX EBX,word ptr [ESI + -0x4]
0049b572  MOV dword ptr [ESP + 0x10],EBX
0049b576  FILD dword ptr [ESP + 0x10]
0049b57a  FMUL float ptr [EAX + 0x3c]
0049b57d  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b581  MOVSX EBX,word ptr [ESI + -0x2]
0049b585  MOV dword ptr [ESP + 0x10],EBX
0049b589  FILD dword ptr [ESP + 0x10]
0049b58d  FMUL float ptr [EAX + 0x40]
0049b590  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b594  MOVZX EBX,byte ptr [ESP + EDI*0x1 + 0x47]
0049b599  MOV ECX,EBX
0049b59b  AND ECX,0x1f
0049b59e  MOV EBP,0x1
0049b5a3  SHL EBP,CL
0049b5a5  MOV ECX,dword ptr [ESP + 0xc8]
0049b5ac  SAR EBX,0x5
0049b5af  TEST dword ptr [ECX + EBX*0x4],EBP
0049b5b2  JZ 0x0049b5f6
0049b5b4  MOVSX EBX,word ptr [ESI]
0049b5b7  MOV ECX,dword ptr [ESP + 0x14]
0049b5bb  MOVZX ECX,word ptr [ECX + 0x2]
0049b5bf  MOV dword ptr [ESP + 0x10],EBX
0049b5c3  ADD ESI,0x6
0049b5c6  FILD dword ptr [ESP + 0x10]
0049b5ca  FMUL float ptr [EAX + 0x58]
0049b5cd  FSTP float ptr [EDX + ECX*0x4]
0049b5d0  MOVSX EBX,word ptr [ESI + -0x4]
0049b5d4  MOV dword ptr [ESP + 0x10],EBX
0049b5d8  FILD dword ptr [ESP + 0x10]
0049b5dc  FMUL float ptr [EAX + 0x5c]
0049b5df  FSTP float ptr [EDX + ECX*0x4 + 0x4]
0049b5e3  MOVSX EBX,word ptr [ESI + -0x2]
0049b5e7  MOV dword ptr [ESP + 0x10],EBX
0049b5eb  FILD dword ptr [ESP + 0x10]
0049b5ef  FMUL float ptr [EAX + 0x60]
0049b5f2  FSTP float ptr [EDX + ECX*0x4 + 0x8]
0049b5f6  MOV ECX,dword ptr [ESP + 0x14]
0049b5fa  MOV EBP,dword ptr [ESP + 0x30]
0049b5fe  ADD ECX,0x8
0049b601  MOV dword ptr [ESP + 0x14],ECX
0049b605  ADD EDI,0x4
0049b608  LEA ECX,[EBP + -0x3]
0049b60b  ADD EAX,0x80
0049b610  CMP EDI,ECX
0049b612  JL 0x0049b470
0049b618  MOV EBX,dword ptr [ESP + 0x1c]
0049b61c  CMP EDI,EBP
0049b61e  JGE 0x0049b6ac
0049b624  MOV EAX,EDI
0049b626  SHL EAX,0x5
0049b629  LEA ECX,[EAX + EBX*0x1 + 0x30]
0049b62d  MOV dword ptr [ESP + 0x1c],ECX
0049b631  MOVZX EAX,byte ptr [ESP + EDI*0x1 + 0x44]
0049b636  MOV ECX,EAX
0049b638  AND ECX,0x1f
0049b63b  MOV EBP,0x1
0049b640  SHL EBP,CL
0049b642  MOV ECX,dword ptr [ESP + 0xc8]
0049b649  SAR EAX,0x5
0049b64c  TEST dword ptr [ECX + EAX*0x4],EBP
0049b64f  JZ 0x0049b698
0049b651  MOVSX ECX,word ptr [ESI]
0049b654  MOV EAX,dword ptr [ESP + 0x2c]
0049b658  MOVZX EAX,word ptr [EAX + EDI*0x2]
0049b65c  MOV dword ptr [ESP + 0x10],ECX
0049b660  MOV ECX,dword ptr [ESP + 0x1c]
0049b664  ADD ESI,0x6
0049b667  FILD dword ptr [ESP + 0x10]
0049b66b  FMUL float ptr [ECX + -0x8]
0049b66e  FSTP float ptr [EDX + EAX*0x4]
0049b671  MOVSX EBP,word ptr [ESI + -0x4]
0049b675  MOV dword ptr [ESP + 0x10],EBP
0049b679  FILD dword ptr [ESP + 0x10]
0049b67d  FMUL float ptr [ECX + -0x4]
0049b680  FSTP float ptr [EDX + EAX*0x4 + 0x4]
0049b684  MOVSX EBP,word ptr [ESI + -0x2]
0049b688  MOV dword ptr [ESP + 0x10],EBP
0049b68c  FILD dword ptr [ESP + 0x10]
0049b690  FMUL float ptr [ECX]
0049b692  FSTP float ptr [EDX + EAX*0x4 + 0x8]
0049b696  JMP 0x0049b69c
0049b698  MOV ECX,dword ptr [ESP + 0x1c]
0049b69c  MOV EAX,dword ptr [ESP + 0x30]
0049b6a0  INC EDI
0049b6a1  ADD ECX,0x20
0049b6a4  CMP EDI,EAX
0049b6a6  MOV dword ptr [ESP + 0x1c],ECX
0049b6aa  JL 0x0049b631
0049b6ac  MOV CL,byte ptr [EBX + 0x13]
0049b6af  TEST CL,CL
0049b6b1  JBE 0x0049b72a
0049b6b7  MOVZX ESI,byte ptr [EBX + 0x12]
0049b6bb  MOV EAX,dword ptr [EBX + 0xc]
0049b6be  LEA EAX,[EAX + ESI*0x2]
0049b6c1  MOV dword ptr [ESP + 0x10],EAX
0049b6c5  MOVZX EAX,word ptr [EBX + 0x10]
0049b6c9  IMUL EAX,ESI
0049b6cc  MOV ESI,dword ptr [ESP + 0x40]
0049b6d0  LEA EAX,[EAX + EAX*0x2]
0049b6d3  LEA EDI,[ESI + EAX*0x2 + 0x3]
0049b6d7  AND EDI,0xfffffffc
0049b6da  XOR ESI,ESI
0049b6dc  TEST CL,CL
0049b6de  JBE 0x0049b72a
0049b6e0  ADD EDI,0x8
0049b6e3  MOVZX EAX,byte ptr [ESP + ESI*0x1 + 0x44]
0049b6e8  MOV ECX,EAX
0049b6ea  AND ECX,0x1f
0049b6ed  MOV EBP,0x1
0049b6f2  SHL EBP,CL
0049b6f4  MOV ECX,dword ptr [ESP + 0xc8]
0049b6fb  SAR EAX,0x5
0049b6fe  TEST dword ptr [ECX + EAX*0x4],EBP
0049b701  JZ 0x0049b71e
0049b703  MOV EAX,dword ptr [ESP + 0x10]
0049b707  MOVZX EAX,word ptr [EAX + ESI*0x2]
0049b70b  MOV ECX,dword ptr [EDI + -0x8]
0049b70e  MOV dword ptr [EDX + EAX*0x4],ECX
0049b711  MOV ECX,dword ptr [EDI + -0x4]
0049b714  MOV dword ptr [EDX + EAX*0x4 + 0x4],ECX
0049b718  MOV ECX,dword ptr [EDI]
0049b71a  MOV dword ptr [EDX + EAX*0x4 + 0x8],ECX
0049b71e  MOVZX EAX,byte ptr [EBX + 0x13]
0049b722  INC ESI
0049b723  ADD EDI,0xc
0049b726  CMP ESI,EAX
0049b728  JL 0x0049b6e3
0049b72a  POP EDI
0049b72b  POP ESI
0049b72c  POP EBP
0049b72d  MOV AL,0x1
0049b72f  POP EBX
0049b730  ADD ESP,0xac
0049b736  RET 0x18
