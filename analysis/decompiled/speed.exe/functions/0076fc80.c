/* speed.exe 0076fc80 FUN_0076fc80; analysis pseudocode, not buildable source.
 * calls 00765450 FUN_00765450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0076fc80(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *local_8 [2];
  
  uVar3 = FUN_00765450(*(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0,local_8);
  if ((char)uVar3 != '\0') {
    iVar4 = (int)*(char *)(param_1 + 0x8c);
    if (iVar4 == 0) {
      iVar6 = *local_8[0] - 1;
      iVar5 = 0;
    }
    else {
      iVar6 = 0;
      iVar5 = *local_8[iVar4] - 1;
    }
    iVar6 = *(int *)(local_8[iVar4] + iVar6 * 4 + 4);
    fVar2 = ((float)(iVar6 >> 0x12) * _DAT_009b3a68 +
            (float)((iVar6 << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4) * _DAT_00890da8;
    fVar1 = *(float *)(param_1 + 0x2c4);
    uVar3 = CONCAT22((short)(iVar6 >> 0x1f),
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1) {
      iVar4 = *(int *)(local_8[iVar4] + iVar5 * 4 + 4);
      fVar2 = (float)(iVar4 >> 0x12) * _DAT_009b3a68 +
              (float)((iVar4 << 0xe) >> 0x12) * _DAT_009b3a68 * _DAT_008933d4;
      fVar1 = *(float *)(param_1 + 0x2c4);
      uVar3 = CONCAT22((short)(iVar4 >> 0x1f),
                       (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                       (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) goto LAB_0076fd5d;
    }
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_0076fd5d:
  return uVar3 & 0xffffff00;
}

