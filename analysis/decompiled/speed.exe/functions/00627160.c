/* speed.exe 00627160 FUN_00627160; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00627160(int *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x14))();
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    pfVar5 = (float *)param_1[8];
    do {
      fVar1 = *pfVar5;
      uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                       (ushort)(fVar1 < _DAT_00890968) << 8 |
                       (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                       (ushort)(fVar1 == _DAT_00890968) << 0xe);
      if (fVar1 != _DAT_00890968) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3 & 0xffffff00;
}

