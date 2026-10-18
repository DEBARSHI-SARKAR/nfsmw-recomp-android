/* speed.exe 0047a590 FUN_0047a590; analysis pseudocode, not buildable source.
 * calls 005dbef0 FUN_005dbef0
 * calls 005d51f0 FUN_005d51f0
 * calls 005dbed0 FUN_005dbed0
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0047a590(void)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar7;
  float fVar6;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined1 auStack_4c [12];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
  iVar8 = 0;
  iVar9 = 0;
  local_80 = 0;
  uVar3 = FUN_005dbef0();
  if (0 < (int)uVar3) {
    do {
      piVar4 = (int *)FUN_005dbed0(iVar8);
      if ((*piVar4 == 0) ||
         (iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4), iVar5 == 0)) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = *(int **)(iVar5 + 4);
      }
      (**(code **)(*piVar10 + 100))(&local_40);
      (**(code **)(*piVar10 + 0x68))(&local_80);
      cVar2 = (**(code **)(*piVar10 + 0x24))();
      fVar6 = fStack_78 * fStack_78 + fStack_74 * fStack_74 + fStack_7c * fStack_7c;
      if (cVar2 == '\0') {
        local_80 = piVar4[4];
        if (_DAT_00890cd4 < fVar6) {
          FUN_0040fe20(&fStack_7c,auStack_4c);
        }
        fStack_64 = fStack_10;
        uStack_60 = uStack_c;
        fStack_5c = fStack_8;
      }
      else {
        iVar9 = piVar4[4];
        if (fVar6 <= _DAT_00890cd4) {
          fStack_70 = local_40;
          fStack_6c = fStack_3c;
          fStack_68 = fStack_38;
        }
        else {
          FUN_0040fe20(&fStack_7c,&fStack_70);
        }
        fStack_58 = fStack_10;
        uStack_54 = uStack_c;
        fStack_50 = fStack_8;
      }
      iVar8 = iVar8 + 1;
      uVar3 = FUN_005dbef0();
    } while (iVar8 < (int)uVar3);
    if ((iVar9 != 0) && (uVar3 = 0, local_80 != 0)) {
      fStack_78 = 0.0;
      fStack_7c = fStack_64 - fStack_58;
      fStack_74 = fStack_5c - fStack_50;
      fVar6 = fStack_7c * fStack_7c + fStack_74 * fStack_74;
      uVar3 = CONCAT22((short)((uint)local_80 >> 0x10),
                       (ushort)(fVar6 < _DAT_00895018) << 8 |
                       (ushort)(NAN(fVar6) || NAN(_DAT_00895018)) << 10 |
                       (ushort)(fVar6 == _DAT_00895018) << 0xe);
      if (fVar6 < _DAT_00895018 || (fVar6 == _DAT_00895018) != 0) {
        FUN_0040fe20(&fStack_7c,&fStack_7c);
        fVar6 = fStack_6c * _DAT_00890968 - fStack_70;
        fVar1 = (fStack_70 * _DAT_00890968 - fStack_68 * _DAT_00890968) * fStack_78 +
                fStack_7c * (fStack_68 - fStack_6c * _DAT_00890968) + fVar6 * fStack_74;
        uVar7 = (undefined2)((uint)fVar6 >> 0x10);
        if (iVar9 == 1) {
          fVar6 = (float)CONCAT22(uVar7,(ushort)(fVar1 < _DAT_00890968) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                                        (ushort)(fVar1 == _DAT_00890968) << 0xe);
          if (fVar1 < _DAT_00890968 || (fVar1 == _DAT_00890968) != 0) {
            return fVar6;
          }
        }
        else if ((iVar9 != 2) ||
                (fVar6 = (float)CONCAT22(uVar7,(ushort)(fVar1 < _DAT_00890968) << 8 |
                                               (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                                               (ushort)(fVar1 == _DAT_00890968) << 0xe),
                fVar1 >= _DAT_00890968)) {
          return (float)((uint)fVar6 & 0xffffff00);
        }
        return (float)CONCAT31((int3)((uint)fVar6 >> 8),1);
      }
    }
  }
  return (float)(uVar3 & 0xffffff00);
}

