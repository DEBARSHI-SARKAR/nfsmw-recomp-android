00494380  MOV ECX,dword ptr [ESP + 0x4]
00494384  MOV EAX,dword ptr [ESP + 0x8]
00494388  FLD float ptr [ECX]
0049438a  FMUL float ptr [EAX]
0049438c  MOV EDX,dword ptr [ESP + 0xc]
00494390  FLD float ptr [EAX + 0x20]
00494393  FMUL float ptr [ECX + 0x8]
00494396  FADDP
00494398  FLD float ptr [ECX + 0x4]
0049439b  FMUL float ptr [EAX + 0x10]
0049439e  FADDP
004943a0  FLD float ptr [ECX + 0xc]
004943a3  FMUL float ptr [EAX + 0x30]
004943a6  FADDP
004943a8  FSTP float ptr [EDX]
004943aa  FLD float ptr [EAX + 0x24]
004943ad  FMUL float ptr [ECX + 0x8]
004943b0  FLD float ptr [ECX]
004943b2  FMUL float ptr [EAX + 0x4]
004943b5  FADDP
004943b7  FLD float ptr [ECX + 0x4]
004943ba  FMUL float ptr [EAX + 0x14]
004943bd  FADDP
004943bf  FLD float ptr [EAX + 0x34]
004943c2  FMUL float ptr [ECX + 0xc]
004943c5  FADDP
004943c7  FSTP float ptr [EDX + 0x4]
004943ca  FLD float ptr [ECX]
004943cc  FMUL float ptr [EAX + 0x8]
004943cf  FLD float ptr [EAX + 0x28]
004943d2  FMUL float ptr [ECX + 0x8]
004943d5  FADDP
004943d7  FLD float ptr [ECX + 0x4]
004943da  FMUL float ptr [EAX + 0x18]
004943dd  FADDP
004943df  FLD float ptr [EAX + 0x38]
004943e2  FMUL float ptr [ECX + 0xc]
004943e5  FADDP
004943e7  FSTP float ptr [EDX + 0x8]
004943ea  FLD float ptr [ECX + 0x4]
004943ed  FMUL float ptr [EAX + 0x1c]
004943f0  FLD float ptr [ECX + 0xc]
004943f3  FMUL float ptr [EAX + 0x3c]
004943f6  FADDP
004943f8  FLD float ptr [EAX + 0xc]
004943fb  FMUL float ptr [ECX]
004943fd  FADDP
004943ff  FLD float ptr [EAX + 0x2c]
00494402  FMUL float ptr [ECX + 0x8]
00494405  FADDP
00494407  FSTP float ptr [EDX + 0xc]
0049440a  FLD float ptr [ECX + 0x14]
0049440d  FMUL float ptr [EAX + 0x10]
00494410  FLD float ptr [EAX + 0x20]
00494413  FMUL float ptr [ECX + 0x18]
00494416  FADDP
00494418  FLD float ptr [ECX + 0x1c]
0049441b  FMUL float ptr [EAX + 0x30]
0049441e  FADDP
00494420  FLD float ptr [ECX + 0x10]
00494423  FMUL float ptr [EAX]
00494425  FADDP
00494427  FSTP float ptr [EDX + 0x10]
0049442a  FLD float ptr [ECX + 0x10]
0049442d  FMUL float ptr [EAX + 0x4]
00494430  FLD float ptr [EAX + 0x14]
00494433  FMUL float ptr [ECX + 0x14]
00494436  FADDP
00494438  FLD float ptr [EAX + 0x24]
0049443b  FMUL float ptr [ECX + 0x18]
0049443e  FADDP
00494440  FLD float ptr [EAX + 0x34]
00494443  FMUL float ptr [ECX + 0x1c]
00494446  FADDP
00494448  FSTP float ptr [EDX + 0x14]
0049444b  FLD float ptr [ECX + 0x14]
0049444e  FMUL float ptr [EAX + 0x18]
00494451  FLD float ptr [EAX + 0x28]
00494454  FMUL float ptr [ECX + 0x18]
00494457  FADDP
00494459  FLD float ptr [EAX + 0x38]
0049445c  FMUL float ptr [ECX + 0x1c]
0049445f  FADDP
00494461  FLD float ptr [ECX + 0x10]
00494464  FMUL float ptr [EAX + 0x8]
00494467  FADDP
00494469  FSTP float ptr [EDX + 0x18]
0049446c  FLD float ptr [ECX + 0x10]
0049446f  FMUL float ptr [EAX + 0xc]
00494472  FLD float ptr [ECX + 0x1c]
00494475  FMUL float ptr [EAX + 0x3c]
00494478  FADDP
0049447a  FLD float ptr [ECX + 0x18]
0049447d  FMUL float ptr [EAX + 0x2c]
00494480  FADDP
00494482  FLD float ptr [ECX + 0x14]
00494485  FMUL float ptr [EAX + 0x1c]
00494488  FADDP
0049448a  FSTP float ptr [EDX + 0x1c]
0049448d  FLD float ptr [ECX + 0x24]
00494490  FMUL float ptr [EAX + 0x10]
00494493  FLD float ptr [EAX + 0x20]
00494496  FMUL float ptr [ECX + 0x28]
00494499  FADDP
0049449b  FLD float ptr [ECX + 0x2c]
0049449e  FMUL float ptr [EAX + 0x30]
004944a1  FADDP
004944a3  FLD float ptr [ECX + 0x20]
004944a6  FMUL float ptr [EAX]
004944a8  FADDP
004944aa  FSTP float ptr [EDX + 0x20]
004944ad  FLD float ptr [ECX + 0x20]
004944b0  FMUL float ptr [EAX + 0x4]
004944b3  FLD float ptr [EAX + 0x14]
004944b6  FMUL float ptr [ECX + 0x24]
004944b9  FADDP
004944bb  FLD float ptr [EAX + 0x34]
004944be  FMUL float ptr [ECX + 0x2c]
004944c1  FADDP
004944c3  FLD float ptr [EAX + 0x24]
004944c6  FMUL float ptr [ECX + 0x28]
004944c9  FADDP
004944cb  FSTP float ptr [EDX + 0x24]
004944ce  FLD float ptr [ECX + 0x24]
004944d1  FMUL float ptr [EAX + 0x18]
004944d4  FLD float ptr [EAX + 0x38]
004944d7  FMUL float ptr [ECX + 0x2c]
004944da  FADDP
004944dc  FLD float ptr [EAX + 0x28]
004944df  FMUL float ptr [ECX + 0x28]
004944e2  FADDP
004944e4  FLD float ptr [ECX + 0x20]
004944e7  FMUL float ptr [EAX + 0x8]
004944ea  FADDP
004944ec  FSTP float ptr [EDX + 0x28]
004944ef  FLD float ptr [ECX + 0x20]
004944f2  FMUL float ptr [EAX + 0xc]
004944f5  FLD float ptr [ECX + 0x2c]
004944f8  FMUL float ptr [EAX + 0x3c]
004944fb  FADDP
004944fd  FLD float ptr [ECX + 0x28]
00494500  FMUL float ptr [EAX + 0x2c]
00494503  FADDP
00494505  FLD float ptr [ECX + 0x24]
00494508  FMUL float ptr [EAX + 0x1c]
0049450b  FADDP
0049450d  FSTP float ptr [EDX + 0x2c]
00494510  FLD float ptr [ECX + 0x34]
00494513  FMUL float ptr [EAX + 0x10]
00494516  FLD float ptr [ECX + 0x3c]
00494519  FMUL float ptr [EAX + 0x30]
0049451c  FADDP
0049451e  FLD float ptr [ECX + 0x38]
00494521  FMUL float ptr [EAX + 0x20]
00494524  FADDP
00494526  FLD float ptr [ECX + 0x30]
00494529  FMUL float ptr [EAX]
0049452b  FADDP
0049452d  FSTP float ptr [EDX + 0x30]
00494530  FLD float ptr [ECX + 0x38]
00494533  FMUL float ptr [EAX + 0x24]
00494536  FLD float ptr [ECX + 0x30]
00494539  FMUL float ptr [EAX + 0x4]
0049453c  FADDP
0049453e  FLD float ptr [EAX + 0x14]
00494541  FMUL float ptr [ECX + 0x34]
00494544  FADDP
00494546  FLD float ptr [EAX + 0x34]
00494549  FMUL float ptr [ECX + 0x3c]
0049454c  FADDP
0049454e  FSTP float ptr [EDX + 0x34]
00494551  FLD float ptr [ECX + 0x34]
00494554  FMUL float ptr [EAX + 0x18]
00494557  FLD float ptr [EAX + 0x38]
0049455a  FMUL float ptr [ECX + 0x3c]
0049455d  FADDP
0049455f  FLD float ptr [ECX + 0x38]
00494562  FMUL float ptr [EAX + 0x28]
00494565  FADDP
00494567  FLD float ptr [ECX + 0x30]
0049456a  FMUL float ptr [EAX + 0x8]
0049456d  FADDP
0049456f  FSTP float ptr [EDX + 0x38]
00494572  FLD float ptr [ECX + 0x38]
00494575  FMUL float ptr [EAX + 0x2c]
00494578  FLD float ptr [ECX + 0x30]
0049457b  FMUL float ptr [EAX + 0xc]
0049457e  FADDP
00494580  FLD float ptr [ECX + 0x3c]
00494583  FMUL float ptr [EAX + 0x3c]
00494586  FADDP
00494588  FLD float ptr [ECX + 0x34]
0049458b  FMUL float ptr [EAX + 0x1c]
0049458e  FADDP
00494590  FSTP float ptr [EDX + 0x3c]
00494593  RET
