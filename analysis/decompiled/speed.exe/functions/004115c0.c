/* speed.exe 004115c0 FUN_004115c0; analysis pseudocode, not buildable source.
 * calls 004100a0 FUN_004100a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004115c0(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar9 = *(uint *)(param_1 + 0x3c);
  if (((uVar9 != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) &&
     (uVar9 = 0, *(int *)(param_1 + 0x58) != 0)) {
    uVar9 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))();
    if ((char)uVar9 == '\0') {
      puVar10 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x30) + 0x60))();
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uStack_c = uVar2;
      uStack_8 = uVar3;
      uStack_4 = uVar4;
      iVar11 = (**(code **)(**(int **)(param_1 + 0x58) + 8))();
      if (*(float *)(iVar11 + 0x14) < _DAT_00890634) {
        iVar11 = (**(code **)(**(int **)(param_1 + 0x58) + 8))();
        fVar1 = *(float *)(iVar11 + 8);
        bVar5 = NAN(_DAT_00890634);
        bVar6 = fVar1 < _DAT_00890634;
        bVar7 = fVar1 == _DAT_00890634;
        if (bVar6) {
          *(undefined4 *)(param_1 + 0x54) = 0;
          return (uint)(ushort)((ushort)bVar6 << 8 | (ushort)(NAN(fVar1) || bVar5) << 10 |
                               (ushort)bVar7 << 0xe);
        }
      }
      uVar9 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))();
      if ((char)uVar9 == '\0') {
        fVar1 = *(float *)(param_1 + 0x54);
        uVar9 = (uint)(ushort)((ushort)(fVar1 < _DAT_00890968) << 8 |
                               (ushort)(NAN(fVar1) || NAN(_DAT_00890968)) << 10 |
                              (ushort)(fVar1 == _DAT_00890968) << 0xe);
        if (fVar1 < _DAT_00890968 == (fVar1 == _DAT_00890968)) {
          param_2 = param_2 + *(float *)(param_1 + 0x54);
          *(float *)(param_1 + 0x54) = param_2;
          uVar9 = (uint)(ushort)((ushort)(param_2 < _DAT_00890604) << 8 |
                                 (ushort)(NAN(param_2) || NAN(_DAT_00890604)) << 10 |
                                (ushort)(param_2 == _DAT_00890604) << 0xe);
          if (param_2 < _DAT_00890604 == 0) {
            fVar12 = (float10)FUN_004100a0(param_1 + 0x48,&uStack_c);
            fVar8 = (float10)_DAT_00890604;
            *(undefined4 *)(param_1 + 0x54) = 0;
            uVar9 = (uint)(ushort)((ushort)(fVar12 < fVar8) << 8 |
                                   (ushort)(NAN(fVar12) || NAN(fVar8)) << 10 |
                                  (ushort)(fVar12 == fVar8) << 0xe);
            if (fVar12 < fVar8) {
              (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(0x40000000);
              *(undefined4 *)(param_1 + 0x54) = 0;
              uVar9 = (**(code **)(**(int **)(param_1 + 0x40) + 0x50))(0);
            }
          }
          return uVar9 & 0xffffff00;
        }
      }
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      *(float *)(param_1 + 0x54) = param_2;
      return uVar9 & 0xffffff00;
    }
  }
  return uVar9 & 0xffffff00;
}

