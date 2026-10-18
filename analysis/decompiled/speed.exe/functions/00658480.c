/* speed.exe 00658480 FUN_00658480; analysis pseudocode, not buildable source.
 * calls 00649380 FUN_00649380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00658480(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint3 uVar4;
  uint3 extraout_var;
  uint uVar3;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = (uint3)((uint)in_EAX >> 8);
  uVar8 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00649380();
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar4 = extraout_var;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x1e);
  uVar7 = uVar6 + 3;
  if (2 < uVar7) {
    uVar3 = uVar6 + 1;
    iVar9 = 2;
    if (3 < uVar3) {
      pfVar5 = (float *)(*(int *)(param_1 + 0x20) + 0x14);
      iVar10 = (uVar6 - 3 >> 2) + 1;
      iVar9 = iVar10 * 4 + 2;
      do {
        if ((pfVar5[4] - *pfVar5) * (*pfVar5 - pfVar5[-4]) +
            (pfVar5[3] - pfVar5[-1]) * (pfVar5[-1] - pfVar5[-5]) +
            (pfVar5[1] - pfVar5[-3]) * (pfVar5[5] - pfVar5[1]) < _DAT_00890968) {
          uVar8 = 1;
        }
        fVar1 = pfVar5[9] - pfVar5[5];
        if ((pfVar5[8] - pfVar5[4]) * (pfVar5[4] - *pfVar5) +
            (pfVar5[7] - pfVar5[3]) * (pfVar5[3] - pfVar5[-1]) + (pfVar5[5] - pfVar5[1]) * fVar1 <
            _DAT_00890968) {
          uVar8 = 1;
        }
        if ((pfVar5[0xc] - pfVar5[8]) * (pfVar5[8] - pfVar5[4]) +
            (pfVar5[0xb] - pfVar5[7]) * (pfVar5[7] - pfVar5[3]) + fVar1 * (pfVar5[0xd] - pfVar5[9])
            < _DAT_00890968) {
          uVar8 = 1;
        }
        fVar2 = (pfVar5[0x10] - pfVar5[0xc]) * (pfVar5[0xc] - pfVar5[8]) +
                (pfVar5[0xf] - pfVar5[0xb]) * (pfVar5[0xb] - pfVar5[7]) +
                (pfVar5[0x11] - pfVar5[0xd]) * (pfVar5[0xd] - pfVar5[9]);
        uVar3 = CONCAT22((short)((uint)fVar1 >> 0x10),
                         (ushort)(fVar2 < _DAT_00890968) << 8 |
                         (ushort)(NAN(fVar2) || NAN(_DAT_00890968)) << 10 |
                         (ushort)(fVar2 == _DAT_00890968) << 0xe);
        if (fVar2 < _DAT_00890968) {
          uVar8 = 1;
        }
        pfVar5 = pfVar5 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (iVar9 < (int)uVar7) {
      uVar3 = iVar9 * 0x10;
      pfVar5 = (float *)((uVar3 - 0xc) + *(int *)(param_1 + 0x20));
      iVar9 = uVar7 - iVar9;
      do {
        fVar1 = (pfVar5[4] - *pfVar5) * (*pfVar5 - pfVar5[-4]) +
                (pfVar5[3] - pfVar5[-1]) * (pfVar5[-1] - pfVar5[-5]) +
                (pfVar5[5] - pfVar5[1]) * (pfVar5[1] - pfVar5[-3]);
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                         (ushort)(fVar1 < _DAT_00890968) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                         (ushort)(fVar1 == _DAT_00890968) << 0xe);
        if (fVar1 < _DAT_00890968) {
          uVar8 = 1;
        }
        pfVar5 = pfVar5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    return CONCAT31((int3)(uVar3 >> 8),uVar8);
  }
  return (uint)uVar4 << 8;
}

