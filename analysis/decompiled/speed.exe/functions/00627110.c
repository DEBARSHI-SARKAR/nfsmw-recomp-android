/* speed.exe 00627110 FUN_00627110; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00627110(int *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x14))();
  iVar5 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    pfVar4 = (float *)param_1[7];
    iVar6 = param_1[8] - (int)pfVar4;
    do {
      fVar1 = ABS(*(float *)(iVar6 + (int)pfVar4) - *pfVar4);
      uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                       (ushort)(fVar1 < _DAT_00890eac) << 8 |
                       (ushort)(NAN(fVar1) || NAN(_DAT_00890eac)) << 10 |
                       (ushort)(fVar1 == _DAT_00890eac) << 0xe);
      if (fVar1 >= _DAT_00890eac && (fVar1 == _DAT_00890eac) == 0) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return uVar3 & 0xffffff00;
}

