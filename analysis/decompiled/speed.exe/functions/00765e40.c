/* speed.exe 00765e40 FUN_00765e40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00765e40(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    pfVar2 = (float *)(param_1 + 0x48);
    iVar4 = iVar3 * 4;
    do {
      if (((uint)pfVar2[-8] & 1) != 0) {
        pfVar2[-6] = (pfVar2[-0x12] + pfVar2[-0x10]) * _DAT_008933d4;
        pfVar2[-4] = (pfVar2[-0x11] + pfVar2[-0xf]) * _DAT_008933d4;
        fVar1 = (pfVar2[-9] - pfVar2[-10]) * _DAT_008933d4;
        pfVar2[-9] = fVar1;
        pfVar2[-10] = -fVar1;
      }
      if (((uint)pfVar2[8] & 1) != 0) {
        pfVar2[10] = (pfVar2[-2] + *pfVar2) * _DAT_008933d4;
        pfVar2[0xc] = (pfVar2[-1] + pfVar2[1]) * _DAT_008933d4;
        fVar1 = (pfVar2[7] - pfVar2[6]) * _DAT_008933d4;
        pfVar2[7] = fVar1;
        pfVar2[6] = -fVar1;
      }
      if (((uint)pfVar2[0x18] & 1) != 0) {
        pfVar2[0x1a] = (pfVar2[0x10] + pfVar2[0xe]) * _DAT_008933d4;
        pfVar2[0x1c] = (pfVar2[0x11] + pfVar2[0xf]) * _DAT_008933d4;
        fVar1 = (pfVar2[0x17] - pfVar2[0x16]) * _DAT_008933d4;
        pfVar2[0x17] = fVar1;
        pfVar2[0x16] = -fVar1;
      }
      if (((uint)pfVar2[0x28] & 1) != 0) {
        pfVar2[0x2a] = (pfVar2[0x20] + pfVar2[0x1e]) * _DAT_008933d4;
        pfVar2[0x2c] = (pfVar2[0x21] + pfVar2[0x1f]) * _DAT_008933d4;
        fVar1 = (pfVar2[0x27] - pfVar2[0x26]) * _DAT_008933d4;
        pfVar2[0x27] = fVar1;
        pfVar2[0x26] = -fVar1;
      }
      pfVar2 = pfVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    pfVar2 = (float *)(iVar4 * 0x40 + 8 + param_1);
    param_2 = param_2 - iVar4;
    do {
      if (((uint)pfVar2[8] & 1) != 0) {
        pfVar2[10] = (pfVar2[-2] + *pfVar2) * _DAT_008933d4;
        pfVar2[0xc] = (pfVar2[-1] + pfVar2[1]) * _DAT_008933d4;
        fVar1 = (pfVar2[7] - pfVar2[6]) * _DAT_008933d4;
        pfVar2[7] = fVar1;
        pfVar2[6] = -fVar1;
      }
      pfVar2 = pfVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

