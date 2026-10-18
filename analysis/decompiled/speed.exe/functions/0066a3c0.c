/* speed.exe 0066a3c0 FUN_0066a3c0; analysis pseudocode, not buildable source.
 * calls 00699b00 FUN_00699b00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0066a3c0(int param_1)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  undefined2 uVar6;
  
  uVar4 = (**(code **)(*(int *)(param_1 + 0x50) + 0x5c))();
  if ((char)uVar4 == '\0') {
    cVar3 = (**(code **)(*(int *)(param_1 + 0x50) + 0x40))();
    if (cVar3 == '\0') {
      pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x48) + 0x24))();
      fVar2 = pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5;
      uVar6 = (undefined2)((uint)pfVar5 >> 0x10);
      if (fVar2 < _DAT_00890e98) {
        uVar4 = CONCAT31((int3)(CONCAT22(uVar6,(ushort)(fVar2 < _DAT_00890e98) << 8 |
                                               (ushort)(NAN(fVar2) || NAN(_DAT_00890e98)) << 10 |
                                               (ushort)(fVar2 == _DAT_00890e98) << 0xe) >> 8),
                         *(byte *)(param_1 + 0x144));
        bVar1 = *(byte *)(param_1 + 0x144) & 3;
      }
      else {
        uVar4 = CONCAT22(uVar6,(ushort)(fVar2 < _DAT_008911a0) << 8 |
                               (ushort)(NAN(fVar2) || NAN(_DAT_008911a0)) << 10 |
                               (ushort)(fVar2 == _DAT_008911a0) << 0xe);
        if (fVar2 >= _DAT_008911a0) goto LAB_0066a439;
        bVar1 = *(byte *)(param_1 + 0x144) & 1;
      }
      if (bVar1 != 0) goto LAB_0066a41e;
    }
LAB_0066a439:
    uVar4 = FUN_00699b00();
    return uVar4;
  }
LAB_0066a41e:
  return uVar4 & 0xffffff00;
}

