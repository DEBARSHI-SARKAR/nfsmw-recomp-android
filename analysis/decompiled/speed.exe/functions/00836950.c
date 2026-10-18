/* speed.exe 00836950 FUN_00836950; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e220 FUN_0083e220
 * calls 007c64e0 _strncpy
 * calls 0083e3b0 FUN_0083e3b0
 * calls 008367d0 FUN_008367d0
 * calls 0083e2f0 FUN_0083e2f0
 */

void FUN_00836950(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *_Dest;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *unaff_EDI;
  bool bVar8;
  
  if (unaff_EDI != (undefined4 *)0x0) {
    if (unaff_EDI[0x33] == 0) {
      uVar2 = FUN_008367d0();
      unaff_EDI[0x33] = uVar2;
    }
    iVar3 = FUN_0083e390(unaff_EDI[0x33]);
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        _Dest = (byte *)FUN_0083e3b0(unaff_EDI[0x33],iVar6);
        pbVar4 = _Dest;
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_008369ca:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_008369cf;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_008369ca;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_008369cf:
        if (iVar5 == 0) {
          if (iVar6 != iVar3) {
            FUN_0083e2f0(unaff_EDI[0x33],iVar6);
            goto LAB_00836a2b;
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    _Dest = (byte *)(*(code *)*unaff_EDI)(0x28);
    _Dest[0] = 0;
    _Dest[1] = 0;
    _Dest[2] = 0;
    _Dest[3] = 0;
    _Dest[4] = 0;
    _Dest[5] = 0;
    _Dest[6] = 0;
    _Dest[7] = 0;
    _Dest[8] = 0;
    _Dest[9] = 0;
    _Dest[10] = 0;
    _Dest[0xb] = 0;
    _Dest[0xc] = 0;
    _Dest[0xd] = 0;
    _Dest[0xe] = 0;
    _Dest[0xf] = 0;
    _Dest[0x10] = 0;
    _Dest[0x11] = 0;
    _Dest[0x12] = 0;
    _Dest[0x13] = 0;
    _Dest[0x14] = 0;
    _Dest[0x15] = 0;
    _Dest[0x16] = 0;
    _Dest[0x17] = 0;
    _Dest[0x18] = 0;
    _Dest[0x19] = 0;
    _Dest[0x1a] = 0;
    _Dest[0x1b] = 0;
    _Dest[0x1c] = 0;
    _Dest[0x1d] = 0;
    _Dest[0x1e] = 0;
    _Dest[0x1f] = 0;
    _Dest[0x20] = 0;
    _Dest[0x21] = 0;
    _Dest[0x22] = 0;
    _Dest[0x23] = 0;
    _Dest[0x24] = 0;
    _Dest[0x25] = 0;
    _Dest[0x26] = 0;
    _Dest[0x27] = 0;
    _strncpy((char *)_Dest,(char *)param_1,0x21);
LAB_00836a2b:
    *(uint *)(_Dest + 0x24) = *(uint *)(_Dest + 0x24) | param_2;
    if (unaff_EDI[0x33] != 0) {
      FUN_0083e220(unaff_EDI[0x33],_Dest);
    }
    iVar3 = FUN_0083e390(unaff_EDI[0x33]);
    while (9 < iVar3) {
      uVar2 = FUN_0083e2f0(unaff_EDI[0x33],0);
      (*(code *)unaff_EDI[1])(uVar2);
      iVar3 = FUN_0083e390(unaff_EDI[0x33]);
    }
  }
  return;
}

