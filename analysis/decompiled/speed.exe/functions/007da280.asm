007da280  PUSH EBP
007da281  MOV EBP,ESP
007da283  SUB ESP,0x18
007da286  MOV EAX,dword ptr [EBP + 0x8]
007da289  MOV dword ptr [EAX + 0x4],0x0
007da290  MOV ECX,dword ptr [EBP + 0x8]
007da293  MOV dword ptr [ECX + 0x8],0x0
007da29a  MOV EDX,dword ptr [EBP + 0x8]
007da29d  MOV dword ptr [EDX + 0xc],0x0
007da2a4  MOV EAX,dword ptr [EBP + 0x10]
007da2a7  AND EAX,0x10
007da2aa  JZ 0x007da2c2
007da2ac  MOV dword ptr [EBP + -0x4],0xc000008f
007da2b3  MOV ECX,dword ptr [EBP + 0x8]
007da2b6  MOV EDX,dword ptr [ECX + 0x4]
007da2b9  OR EDX,0x1
007da2bc  MOV EAX,dword ptr [EBP + 0x8]
007da2bf  MOV dword ptr [EAX + 0x4],EDX
007da2c2  MOV ECX,dword ptr [EBP + 0x10]
007da2c5  AND ECX,0x2
007da2c8  JZ 0x007da2e0
007da2ca  MOV dword ptr [EBP + -0x4],0xc0000093
007da2d1  MOV EDX,dword ptr [EBP + 0x8]
007da2d4  MOV EAX,dword ptr [EDX + 0x4]
007da2d7  OR EAX,0x2
007da2da  MOV ECX,dword ptr [EBP + 0x8]
007da2dd  MOV dword ptr [ECX + 0x4],EAX
007da2e0  MOV EDX,dword ptr [EBP + 0x10]
007da2e3  AND EDX,0x1
007da2e6  JZ 0x007da2fe
007da2e8  MOV dword ptr [EBP + -0x4],0xc0000091
007da2ef  MOV EAX,dword ptr [EBP + 0x8]
007da2f2  MOV ECX,dword ptr [EAX + 0x4]
007da2f5  OR ECX,0x4
007da2f8  MOV EDX,dword ptr [EBP + 0x8]
007da2fb  MOV dword ptr [EDX + 0x4],ECX
007da2fe  MOV EAX,dword ptr [EBP + 0x10]
007da301  AND EAX,0x4
007da304  JZ 0x007da31c
007da306  MOV dword ptr [EBP + -0x4],0xc000008e
007da30d  MOV ECX,dword ptr [EBP + 0x8]
007da310  MOV EDX,dword ptr [ECX + 0x4]
007da313  OR EDX,0x8
007da316  MOV EAX,dword ptr [EBP + 0x8]
007da319  MOV dword ptr [EAX + 0x4],EDX
007da31c  MOV ECX,dword ptr [EBP + 0x10]
007da31f  AND ECX,0x8
007da322  JZ 0x007da33a
007da324  MOV dword ptr [EBP + -0x4],0xc0000090
007da32b  MOV EDX,dword ptr [EBP + 0x8]
007da32e  MOV EAX,dword ptr [EDX + 0x4]
007da331  OR EAX,0x10
007da334  MOV ECX,dword ptr [EBP + 0x8]
007da337  MOV dword ptr [ECX + 0x4],EAX
007da33a  MOV EDX,dword ptr [EBP + 0xc]
007da33d  MOV EAX,dword ptr [EDX]
007da33f  AND EAX,0x1
007da342  NEG EAX
007da344  SBB EAX,EAX
007da346  INC EAX
007da347  AND EAX,0x1
007da34a  SHL EAX,0x4
007da34d  MOV ECX,dword ptr [EBP + 0x8]
007da350  MOV EDX,dword ptr [ECX + 0x8]
007da353  AND EDX,0xffffffef
007da356  OR EDX,EAX
007da358  MOV EAX,dword ptr [EBP + 0x8]
007da35b  MOV dword ptr [EAX + 0x8],EDX
007da35e  MOV ECX,dword ptr [EBP + 0xc]
007da361  MOV EDX,dword ptr [ECX]
007da363  AND EDX,0x4
007da366  NEG EDX
007da368  SBB EDX,EDX
007da36a  INC EDX
007da36b  AND EDX,0x1
007da36e  SHL EDX,0x3
007da371  MOV EAX,dword ptr [EBP + 0x8]
007da374  MOV ECX,dword ptr [EAX + 0x8]
007da377  AND ECX,0xfffffff7
007da37a  OR ECX,EDX
007da37c  MOV EDX,dword ptr [EBP + 0x8]
007da37f  MOV dword ptr [EDX + 0x8],ECX
007da382  MOV EAX,dword ptr [EBP + 0xc]
007da385  MOV ECX,dword ptr [EAX]
007da387  AND ECX,0x8
007da38a  NEG ECX
007da38c  SBB ECX,ECX
007da38e  INC ECX
007da38f  AND ECX,0x1
007da392  SHL ECX,0x2
007da395  MOV EDX,dword ptr [EBP + 0x8]
007da398  MOV EAX,dword ptr [EDX + 0x8]
007da39b  AND EAX,0xfffffffb
007da39e  OR EAX,ECX
007da3a0  MOV ECX,dword ptr [EBP + 0x8]
007da3a3  MOV dword ptr [ECX + 0x8],EAX
007da3a6  MOV EDX,dword ptr [EBP + 0xc]
007da3a9  MOV EAX,dword ptr [EDX]
007da3ab  AND EAX,0x10
007da3ae  NEG EAX
007da3b0  SBB EAX,EAX
007da3b2  INC EAX
007da3b3  AND EAX,0x1
007da3b6  SHL EAX,0x1
007da3b8  MOV ECX,dword ptr [EBP + 0x8]
007da3bb  MOV EDX,dword ptr [ECX + 0x8]
007da3be  AND EDX,0xfffffffd
007da3c1  OR EDX,EAX
007da3c3  MOV EAX,dword ptr [EBP + 0x8]
007da3c6  MOV dword ptr [EAX + 0x8],EDX
007da3c9  MOV ECX,dword ptr [EBP + 0xc]
007da3cc  MOV EDX,dword ptr [ECX]
007da3ce  AND EDX,0x20
007da3d1  NEG EDX
007da3d3  SBB EDX,EDX
007da3d5  INC EDX
007da3d6  AND EDX,0x1
007da3d9  MOV EAX,dword ptr [EBP + 0x8]
007da3dc  MOV ECX,dword ptr [EAX + 0x8]
007da3df  AND ECX,0xfffffffe
007da3e2  OR ECX,EDX
007da3e4  MOV EDX,dword ptr [EBP + 0x8]
007da3e7  MOV dword ptr [EDX + 0x8],ECX
007da3ea  CALL 0x007dabe0
007da3ef  MOV dword ptr [EBP + -0x8],EAX
007da3f2  MOV EAX,dword ptr [EBP + -0x8]
007da3f5  AND EAX,0x1
007da3f8  JZ 0x007da409
007da3fa  MOV ECX,dword ptr [EBP + 0x8]
007da3fd  MOV EDX,dword ptr [ECX + 0xc]
007da400  OR EDX,0x10
007da403  MOV EAX,dword ptr [EBP + 0x8]
007da406  MOV dword ptr [EAX + 0xc],EDX
007da409  MOV ECX,dword ptr [EBP + -0x8]
007da40c  AND ECX,0x4
007da40f  JZ 0x007da420
007da411  MOV EDX,dword ptr [EBP + 0x8]
007da414  MOV EAX,dword ptr [EDX + 0xc]
007da417  OR EAX,0x8
007da41a  MOV ECX,dword ptr [EBP + 0x8]
007da41d  MOV dword ptr [ECX + 0xc],EAX
007da420  MOV EDX,dword ptr [EBP + -0x8]
007da423  AND EDX,0x8
007da426  JZ 0x007da437
007da428  MOV EAX,dword ptr [EBP + 0x8]
007da42b  MOV ECX,dword ptr [EAX + 0xc]
007da42e  OR ECX,0x4
007da431  MOV EDX,dword ptr [EBP + 0x8]
007da434  MOV dword ptr [EDX + 0xc],ECX
007da437  MOV EAX,dword ptr [EBP + -0x8]
007da43a  AND EAX,0x10
007da43d  JZ 0x007da44e
007da43f  MOV ECX,dword ptr [EBP + 0x8]
007da442  MOV EDX,dword ptr [ECX + 0xc]
007da445  OR EDX,0x2
007da448  MOV EAX,dword ptr [EBP + 0x8]
007da44b  MOV dword ptr [EAX + 0xc],EDX
007da44e  MOV ECX,dword ptr [EBP + -0x8]
007da451  AND ECX,0x20
007da454  JZ 0x007da465
007da456  MOV EDX,dword ptr [EBP + 0x8]
007da459  MOV EAX,dword ptr [EDX + 0xc]
007da45c  OR EAX,0x1
007da45f  MOV ECX,dword ptr [EBP + 0x8]
007da462  MOV dword ptr [ECX + 0xc],EAX
007da465  MOV EDX,dword ptr [EBP + 0xc]
007da468  MOV EAX,dword ptr [EDX]
007da46a  AND EAX,0xc00
007da46f  MOV dword ptr [EBP + -0xc],EAX
007da472  CMP dword ptr [EBP + -0xc],0x800
007da479  JA 0x007da495
007da47b  CMP dword ptr [EBP + -0xc],0x800
007da482  JZ 0x007da4af
007da484  CMP dword ptr [EBP + -0xc],0x0
007da488  JZ 0x007da4d3
007da48a  CMP dword ptr [EBP + -0xc],0x400
007da491  JZ 0x007da4c1
007da493  JMP 0x007da4e0
007da495  CMP dword ptr [EBP + -0xc],0xc00
007da49c  JZ 0x007da4a0
007da49e  JMP 0x007da4e0
007da4a0  MOV ECX,dword ptr [EBP + 0x8]
007da4a3  MOV EDX,dword ptr [ECX]
007da4a5  OR EDX,0x3
007da4a8  MOV EAX,dword ptr [EBP + 0x8]
007da4ab  MOV dword ptr [EAX],EDX
007da4ad  JMP 0x007da4e0
007da4af  MOV ECX,dword ptr [EBP + 0x8]
007da4b2  MOV EDX,dword ptr [ECX]
007da4b4  AND EDX,0xfffffffc
007da4b7  OR EDX,0x2
007da4ba  MOV EAX,dword ptr [EBP + 0x8]
007da4bd  MOV dword ptr [EAX],EDX
007da4bf  JMP 0x007da4e0
007da4c1  MOV ECX,dword ptr [EBP + 0x8]
007da4c4  MOV EDX,dword ptr [ECX]
007da4c6  AND EDX,0xfffffffc
007da4c9  OR EDX,0x1
007da4cc  MOV EAX,dword ptr [EBP + 0x8]
007da4cf  MOV dword ptr [EAX],EDX
007da4d1  JMP 0x007da4e0
007da4d3  MOV ECX,dword ptr [EBP + 0x8]
007da4d6  MOV EDX,dword ptr [ECX]
007da4d8  AND EDX,0xfffffffc
007da4db  MOV EAX,dword ptr [EBP + 0x8]
007da4de  MOV dword ptr [EAX],EDX
007da4e0  MOV ECX,dword ptr [EBP + 0xc]
007da4e3  MOV EDX,dword ptr [ECX]
007da4e5  AND EDX,0x300
007da4eb  MOV dword ptr [EBP + -0x10],EDX
007da4ee  JZ 0x007da525
007da4f0  CMP dword ptr [EBP + -0x10],0x200
007da4f7  JZ 0x007da513
007da4f9  CMP dword ptr [EBP + -0x10],0x300
007da500  JZ 0x007da504
007da502  JMP 0x007da535
007da504  MOV EAX,dword ptr [EBP + 0x8]
007da507  MOV ECX,dword ptr [EAX]
007da509  AND ECX,0xffffffe3
007da50c  MOV EDX,dword ptr [EBP + 0x8]
007da50f  MOV dword ptr [EDX],ECX
007da511  JMP 0x007da535
007da513  MOV EAX,dword ptr [EBP + 0x8]
007da516  MOV ECX,dword ptr [EAX]
007da518  AND ECX,0xffffffe3
007da51b  OR ECX,0x4
007da51e  MOV EDX,dword ptr [EBP + 0x8]
007da521  MOV dword ptr [EDX],ECX
007da523  JMP 0x007da535
007da525  MOV EAX,dword ptr [EBP + 0x8]
007da528  MOV ECX,dword ptr [EAX]
007da52a  AND ECX,0xffffffe3
007da52d  OR ECX,0x8
007da530  MOV EDX,dword ptr [EBP + 0x8]
007da533  MOV dword ptr [EDX],ECX
007da535  MOV EAX,dword ptr [EBP + 0x14]
007da538  AND EAX,0xfff
007da53d  SHL EAX,0x5
007da540  MOV ECX,dword ptr [EBP + 0x8]
007da543  MOV EDX,dword ptr [ECX]
007da545  AND EDX,0xfffe001f
007da54b  OR EDX,EAX
007da54d  MOV EAX,dword ptr [EBP + 0x8]
007da550  MOV dword ptr [EAX],EDX
007da552  MOV ECX,dword ptr [EBP + 0x8]
007da555  MOV EDX,dword ptr [ECX + 0x20]
007da558  OR EDX,0x1
007da55b  MOV EAX,dword ptr [EBP + 0x8]
007da55e  MOV dword ptr [EAX + 0x20],EDX
007da561  MOV ECX,dword ptr [EBP + 0x8]
007da564  MOV EDX,dword ptr [ECX + 0x20]
007da567  AND EDX,0xffffffe1
007da56a  OR EDX,0x2
007da56d  MOV EAX,dword ptr [EBP + 0x8]
007da570  MOV dword ptr [EAX + 0x20],EDX
007da573  MOV ECX,dword ptr [EBP + 0x8]
007da576  MOV EDX,dword ptr [EBP + 0x18]
007da579  FLD double ptr [EDX]
007da57b  FSTP double ptr [ECX + 0x10]
007da57e  MOV EAX,dword ptr [EBP + 0x8]
007da581  MOV ECX,dword ptr [EAX + 0x60]
007da584  OR ECX,0x1
007da587  MOV EDX,dword ptr [EBP + 0x8]
007da58a  MOV dword ptr [EDX + 0x60],ECX
007da58d  MOV EAX,dword ptr [EBP + 0x8]
007da590  MOV ECX,dword ptr [EAX + 0x60]
007da593  AND ECX,0xffffffe1
007da596  OR ECX,0x2
007da599  MOV EDX,dword ptr [EBP + 0x8]
007da59c  MOV dword ptr [EDX + 0x60],ECX
007da59f  MOV EAX,dword ptr [EBP + 0x8]
007da5a2  MOV ECX,dword ptr [EBP + 0x1c]
007da5a5  FLD double ptr [ECX]
007da5a7  FSTP double ptr [EAX + 0x50]
007da5aa  CALL 0x007dabf0
007da5af  LEA EDX,[EBP + 0x8]
007da5b2  PUSH EDX
007da5b3  PUSH 0x1
007da5b5  PUSH 0x0
007da5b7  MOV EAX,dword ptr [EBP + -0x4]
007da5ba  PUSH EAX
007da5bb  CALL dword ptr [0x008901ac]
007da5c1  MOV ECX,dword ptr [EBP + 0x8]
007da5c4  MOV EDX,dword ptr [ECX + 0x8]
007da5c7  SHR EDX,0x4
007da5ca  AND EDX,0x1
007da5cd  JZ 0x007da5dc
007da5cf  MOV EAX,dword ptr [EBP + 0xc]
007da5d2  MOV ECX,dword ptr [EAX]
007da5d4  AND ECX,0xfffffffe
007da5d7  MOV EDX,dword ptr [EBP + 0xc]
007da5da  MOV dword ptr [EDX],ECX
007da5dc  MOV EAX,dword ptr [EBP + 0x8]
007da5df  MOV ECX,dword ptr [EAX + 0x8]
007da5e2  SHR ECX,0x3
007da5e5  AND ECX,0x1
007da5e8  JZ 0x007da5f7
007da5ea  MOV EDX,dword ptr [EBP + 0xc]
007da5ed  MOV EAX,dword ptr [EDX]
007da5ef  AND EAX,0xfffffffb
007da5f2  MOV ECX,dword ptr [EBP + 0xc]
007da5f5  MOV dword ptr [ECX],EAX
007da5f7  MOV EDX,dword ptr [EBP + 0x8]
007da5fa  MOV EAX,dword ptr [EDX + 0x8]
007da5fd  SHR EAX,0x2
007da600  AND EAX,0x1
007da603  JZ 0x007da612
007da605  MOV ECX,dword ptr [EBP + 0xc]
007da608  MOV EDX,dword ptr [ECX]
007da60a  AND EDX,0xfffffff7
007da60d  MOV EAX,dword ptr [EBP + 0xc]
007da610  MOV dword ptr [EAX],EDX
007da612  MOV ECX,dword ptr [EBP + 0x8]
007da615  MOV EDX,dword ptr [ECX + 0x8]
007da618  SHR EDX,0x1
007da61a  AND EDX,0x1
007da61d  JZ 0x007da62c
007da61f  MOV EAX,dword ptr [EBP + 0xc]
007da622  MOV ECX,dword ptr [EAX]
007da624  AND ECX,0xffffffef
007da627  MOV EDX,dword ptr [EBP + 0xc]
007da62a  MOV dword ptr [EDX],ECX
007da62c  MOV EAX,dword ptr [EBP + 0x8]
007da62f  MOV ECX,dword ptr [EAX + 0x8]
007da632  AND ECX,0x1
007da635  JZ 0x007da644
007da637  MOV EDX,dword ptr [EBP + 0xc]
007da63a  MOV EAX,dword ptr [EDX]
007da63c  AND EAX,0xffffffdf
007da63f  MOV ECX,dword ptr [EBP + 0xc]
007da642  MOV dword ptr [ECX],EAX
007da644  MOV EDX,dword ptr [EBP + 0x8]
007da647  MOV EAX,dword ptr [EDX]
007da649  AND EAX,0x3
007da64c  MOV dword ptr [EBP + -0x14],EAX
007da64f  CMP dword ptr [EBP + -0x14],0x3
007da653  JA 0x007da6b0
007da655  MOV ECX,dword ptr [EBP + -0x14]
007da658  JMP dword ptr [ECX*0x4 + 0x7da71d]
007da65f  MOV EDX,dword ptr [EBP + 0xc]
007da662  MOV EAX,dword ptr [EDX]
007da664  AND EAX,0xfffff3ff
007da669  OR EAX,0xc00
007da66e  MOV ECX,dword ptr [EBP + 0xc]
007da671  MOV dword ptr [ECX],EAX
007da673  JMP 0x007da6b0
007da675  MOV EDX,dword ptr [EBP + 0xc]
007da678  MOV EAX,dword ptr [EDX]
007da67a  AND EAX,0xfffff3ff
007da67f  OR EAX,0x800
007da684  MOV ECX,dword ptr [EBP + 0xc]
007da687  MOV dword ptr [ECX],EAX
007da689  JMP 0x007da6b0
007da68b  MOV EDX,dword ptr [EBP + 0xc]
007da68e  MOV EAX,dword ptr [EDX]
007da690  AND EAX,0xfffff3ff
007da695  OR EAX,0x400
007da69a  MOV ECX,dword ptr [EBP + 0xc]
007da69d  MOV dword ptr [ECX],EAX
007da69f  JMP 0x007da6b0
007da6a1  MOV EDX,dword ptr [EBP + 0xc]
007da6a4  MOV EAX,dword ptr [EDX]
007da6a6  AND EAX,0xfffff3ff
007da6ab  MOV ECX,dword ptr [EBP + 0xc]
007da6ae  MOV dword ptr [ECX],EAX
007da6b0  MOV EDX,dword ptr [EBP + 0x8]
007da6b3  MOV EAX,dword ptr [EDX]
007da6b5  SHR EAX,0x2
007da6b8  AND EAX,0x7
007da6bb  MOV dword ptr [EBP + -0x18],EAX
007da6be  JZ 0x007da6ce
007da6c0  CMP dword ptr [EBP + -0x18],0x1
007da6c4  JZ 0x007da6e6
007da6c6  CMP dword ptr [EBP + -0x18],0x2
007da6ca  JZ 0x007da6fe
007da6cc  JMP 0x007da70e
007da6ce  MOV ECX,dword ptr [EBP + 0xc]
007da6d1  MOV EDX,dword ptr [ECX]
007da6d3  AND EDX,0xfffff3ff
007da6d9  OR EDX,0x300
007da6df  MOV EAX,dword ptr [EBP + 0xc]
007da6e2  MOV dword ptr [EAX],EDX
007da6e4  JMP 0x007da70e
007da6e6  MOV ECX,dword ptr [EBP + 0xc]
007da6e9  MOV EDX,dword ptr [ECX]
007da6eb  AND EDX,0xfffff3ff
007da6f1  OR EDX,0x200
007da6f7  MOV EAX,dword ptr [EBP + 0xc]
007da6fa  MOV dword ptr [EAX],EDX
007da6fc  JMP 0x007da70e
007da6fe  MOV ECX,dword ptr [EBP + 0xc]
007da701  MOV EDX,dword ptr [ECX]
007da703  AND EDX,0xfffff3ff
007da709  MOV EAX,dword ptr [EBP + 0xc]
007da70c  MOV dword ptr [EAX],EDX
007da70e  MOV ECX,dword ptr [EBP + 0x1c]
007da711  MOV EDX,dword ptr [EBP + 0x8]
007da714  FLD double ptr [EDX + 0x50]
007da717  FSTP double ptr [ECX]
007da719  MOV ESP,EBP
007da71b  POP EBP
007da71c  RET
