/* speed.exe 00414b30 FUN_00414b30; analysis pseudocode, not buildable source.
 * calls 00401930 FUN_00401930
 * calls 00401ce0 FUN_00401ce0
 * calls 00410220 FUN_00410220
 * calls 005faa20 FUN_005faa20
 * calls 005db5e0 FUN_005db5e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00414b30(int param_1,float param_2,float param_3,char param_4,char param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float unaff_retaddr;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [16];
  
  uVar2 = 0;
  if (((*(int *)(param_1 + 0x74) != 0) &&
      (uVar2 = DAT_0091e000, *(char *)(DAT_0091e000 + 0x198a) != '\0')) &&
     (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    uVar2 = FUN_005faa20();
    if (uVar2 == 5) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x50))();
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar5 = (undefined2)((uint)iVar3 >> 0x10);
        uVar2 = CONCAT22(uVar5,(ushort)(param_2 < _DAT_00890bf8) << 8 |
                               (ushort)(NAN(param_2) || NAN(_DAT_00890bf8)) << 10 |
                               (ushort)(param_2 == _DAT_00890bf8) << 0xe);
        if (param_2 >= _DAT_00890bf8) {
          if (param_5 == '\0') {
            fVar1 = *(float *)(param_1 + 0x58) - _DAT_00890da4;
            uVar2 = CONCAT22(uVar5,(ushort)(fVar1 < param_2) << 8 |
                                   (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                                   (ushort)(fVar1 == param_2) << 0xe);
            if (fVar1 < param_2) goto LAB_00414b99;
          }
          uVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
          (**(code **)(**(int **)(param_1 + 0x48) + 0x34))(&fStack_18);
          iVar3 = *(int *)(DAT_0091e000 + 0x4504);
          iVar7 = 0;
          uVar2 = DAT_0091e000;
          if (0 < iVar3) {
            iVar6 = 0x4508;
            do {
              uVar2 = 0;
              if (*(int *)(*(int *)(DAT_0091e000 + iVar6) + 0x74) != 0) {
                FUN_005db5e0(auStack_10);
                fVar1 = (param_2 + param_2 + _DAT_0089096c) * unaff_retaddr;
                fVar8 = (float10)FUN_00401930(auStack_10,uVar4);
                fVar9 = (float10)fVar1 * (float10)fVar1;
                uVar2 = CONCAT22(extraout_var,
                                 (ushort)(fVar9 < fVar8) << 8 |
                                 (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                                 (ushort)(fVar9 == fVar8) << 0xe);
                if (fVar9 >= fVar8 && (fVar9 == fVar8) == 0) {
                  FUN_00401ce0(auStack_10,uVar4,&fStack_28);
                  fVar9 = (float10)FUN_00410220(&fStack_28);
                  fVar9 = fVar9 / (float10)unaff_retaddr;
                  fVar8 = (float10)param_3;
                  uVar2 = CONCAT22(extraout_var_00,
                                   (ushort)(fVar9 < fVar8) << 8 |
                                   (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                                   (ushort)(fVar9 == fVar8) << 0xe);
                  if ((fVar9 < fVar8) ||
                     (uVar2 = CONCAT31((int3)(uVar2 >> 8),param_4), param_4 != '\0')) {
                    fVar1 = fStack_18 * fStack_24 + fStack_28 * fStack_1c + fStack_20 * fStack_14;
                    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                                     (ushort)(fVar1 < _DAT_00890634) << 8 |
                                     (ushort)(NAN(fVar1) || NAN(_DAT_00890634)) << 10 |
                                     (ushort)(fVar1 == _DAT_00890634) << 0xe);
                    if (fVar1 >= _DAT_00890634 && (fVar1 == _DAT_00890634) == 0) {
                      return CONCAT31((int3)(uVar2 >> 8),1);
                    }
                  }
                }
              }
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 4;
            } while (iVar7 < iVar3);
          }
          return uVar2 & 0xffffff00;
        }
      }
    }
  }
LAB_00414b99:
  return uVar2 & 0xffffff00;
}

