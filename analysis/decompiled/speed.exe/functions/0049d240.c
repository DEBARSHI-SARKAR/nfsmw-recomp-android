/* speed.exe 0049d240 FUN_0049d240; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0049a400 FUN_0049a400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049d240(int param_1,float *param_2,float *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint3 uVar8;
  int iVar9;
  int iVar10;
  int local_c;
  
  iVar6 = FUN_0049a400();
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x20) == 0) {
        local_c = (-(uint)((bVar1 & 0x40) != 0) & 7) + 1;
      }
      else {
        local_c = 4;
      }
    }
    else {
      local_c = 2;
    }
  }
  else {
    local_c = 1;
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  if ((_DAT_00890968 < param_2[2]) && (param_2[2] < (float)(local_c * iVar6))) {
    iVar6 = FUN_007c4b80();
    iVar6 = iVar6 + 1;
  }
  bVar1 = *(byte *)(param_1 + 9);
  uVar7 = (uint)bVar1;
  if (bVar1 < 2) {
    uVar7 = 2;
  }
  iVar9 = 1;
  param_2 = (float *)((float)*(byte *)(uVar7 + 10 + param_1) * _DAT_00895b18 - _DAT_00895b14);
  if (1 < iVar6) {
    do {
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 2;
      }
      fVar4 = (float)*(byte *)(uVar7 + iVar9 + 10 + param_1) * _DAT_00895b18 - _DAT_00895b14;
      if ((((float)param_2 < fVar2 != ((float)param_2 == fVar2)) &&
          (fVar2 < fVar4 != (fVar2 == fVar4))) &&
         (fVar5 = fVar4 - (float)param_2, _DAT_00890968 <= fVar5 * fVar3)) {
        uVar8 = (uint3)(byte)(fVar5 < _DAT_00890968 |
                              (byte)((ushort)((ushort)(NAN(fVar5) || NAN(_DAT_00890968)) << 10) >> 8
                                    ) |
                             (byte)((ushort)((ushort)(fVar5 == _DAT_00890968) << 0xe) >> 8));
        if (fVar5 != _DAT_00890968) {
          *param_3 = ((fVar2 - (float)param_2) / fVar5 + (float)(iVar9 + -1)) * (float)local_c;
          return CONCAT31(uVar8,1);
        }
        *param_3 = ((float)(iVar9 + -1) + _DAT_008933d4) * (float)local_c;
        return CONCAT31(uVar8,1);
      }
      iVar9 = iVar9 + 1;
      param_2 = (float *)fVar4;
    } while (iVar9 < iVar6);
  }
  iVar9 = 0;
  uVar7 = (uint)bVar1;
  if (bVar1 < 2) {
    uVar7 = 2;
  }
  fVar3 = fVar2 - ((float)*(byte *)(uVar7 + 10 + param_1) * _DAT_00895b18 - _DAT_00895b14);
  if (fVar3 < _DAT_00890968) {
    fVar3 = fVar3 * _DAT_00890da8;
  }
  uVar7 = iVar6 - 1;
  iVar10 = 1;
  if (3 < (int)uVar7) {
    do {
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 2;
      }
      fVar4 = fVar2 - ((float)*(byte *)(uVar7 + iVar10 + 10 + param_1) * _DAT_00895b18 -
                      _DAT_00895b14);
      if (fVar4 < _DAT_00890968) {
        fVar4 = fVar4 * _DAT_00890da8;
      }
      if (fVar4 < fVar3) {
        iVar9 = iVar10;
        fVar3 = fVar4;
      }
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 2;
      }
      fVar4 = fVar2 - ((float)*(byte *)(uVar7 + iVar10 + 0xb + param_1) * _DAT_00895b18 -
                      _DAT_00895b14);
      if (fVar4 < _DAT_00890968) {
        fVar4 = fVar4 * _DAT_00890da8;
      }
      if (fVar4 < fVar3) {
        iVar9 = iVar10 + 1;
        fVar3 = fVar4;
      }
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 2;
      }
      fVar4 = fVar2 - ((float)*(byte *)(uVar7 + iVar10 + 0xc + param_1) * _DAT_00895b18 -
                      _DAT_00895b14);
      if (fVar4 < _DAT_00890968) {
        fVar4 = fVar4 * _DAT_00890da8;
      }
      if (fVar4 < fVar3) {
        iVar9 = iVar10 + 2;
        fVar3 = fVar4;
      }
      uVar7 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar7 = 2;
      }
      fVar4 = fVar2 - ((float)*(byte *)(uVar7 + iVar10 + 0xd + param_1) * _DAT_00895b18 -
                      _DAT_00895b14);
      if (fVar4 < _DAT_00890968) {
        fVar4 = fVar4 * _DAT_00890da8;
      }
      uVar7 = (uint)(ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10
                            | (ushort)(fVar4 == fVar3) << 0xe);
      if (fVar4 < fVar3) {
        iVar9 = iVar10 + 3;
        fVar3 = fVar4;
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < iVar6 + -3);
  }
  for (; iVar10 < iVar6; iVar10 = iVar10 + 1) {
    uVar7 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar7 = 2;
    }
    fVar4 = fVar2 - ((float)*(byte *)(uVar7 + iVar10 + 10 + param_1) * _DAT_00895b18 - _DAT_00895b14
                    );
    if (fVar4 < _DAT_00890968) {
      fVar4 = fVar4 * _DAT_00890da8;
    }
    uVar7 = (uint)(ushort)((ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                          (ushort)(fVar4 == fVar3) << 0xe);
    if (fVar4 < fVar3) {
      iVar9 = iVar10;
      fVar3 = fVar4;
    }
  }
  *param_3 = (float)(iVar9 * local_c);
  return CONCAT31((int3)(uVar7 >> 8),1);
}

