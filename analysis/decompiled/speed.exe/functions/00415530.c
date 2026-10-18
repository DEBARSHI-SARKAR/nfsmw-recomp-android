/* speed.exe 00415530 FUN_00415530; analysis pseudocode, not buildable source.
 * calls 00401870 FUN_00401870
 * calls 0040fe20 FUN_0040fe20
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00415530(int param_1)

{
  float10 fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  undefined2 extraout_var_01;
  float unaff_EDI;
  float10 fVar8;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  piVar7 = (int *)(param_1 + 0x4c);
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  uVar4 = (**(code **)(*piVar3 + 0x58))();
  if (uVar4 != 3) {
    piVar3 = (int *)(**(code **)(*piVar7 + 8))();
    fVar8 = (float10)(**(code **)(*piVar3 + 0x90))();
    fVar1 = (float10)_DAT_00890968;
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(fVar8 < fVar1) << 8 | (ushort)(NAN(fVar8) || NAN(fVar1)) << 10 |
                     (ushort)(fVar8 == fVar1) << 0xe);
    if ((fVar8 >= fVar1) && (uVar4 = 0, *(int *)(param_1 + 0xd8) != 0)) {
      piVar3 = (int *)(**(code **)(*piVar7 + 4))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
      fVar8 = (float10)(**(code **)(*piVar3 + 0x2c))();
      fVar1 = (float10)_DAT_00890e08;
      uVar4 = CONCAT22(extraout_var_00,
                       (ushort)(fVar8 < fVar1) << 8 | (ushort)(NAN(fVar8) || NAN(fVar1)) << 10 |
                       (ushort)(fVar8 == fVar1) << 0xe);
      if (fVar8 >= fVar1) {
        (**(code **)(**(int **)(param_1 + 0xe0) + 8))();
        (**(code **)(**(int **)(param_1 + 0xd8) + 0x6c))();
        piVar3 = *(int **)(param_1 + 0xd8);
        pfVar5 = (float *)(**(code **)(*piVar3 + 0x48))(1);
        pfVar6 = (float *)(**(code **)(*piVar3 + 0x48))(0);
        fStack_6c = *pfVar6 + *pfVar5;
        fStack_68 = pfVar6[1] + pfVar5[1];
        afStack_64[0] = pfVar6[2] + pfVar5[2];
        FUN_0040fe20(&fStack_6c,&fStack_6c);
        piVar7 = (int *)(**(code **)(*piVar7 + 4))();
        piVar7 = (int *)(**(code **)(*piVar7 + 0x54))();
        (**(code **)(*piVar7 + 0x40))(auStack_48);
        fsin((float10)unaff_EDI * (float10)_DAT_00890510);
        fcos((float10)unaff_EDI * (float10)_DAT_00890510);
        FUN_00401670(&stack0xffffff84,auStack_4c,&stack0xffffff84);
        FUN_0040fe20(&stack0xffffff84,&stack0xffffff84);
        afStack_64[0] = 0.0;
        afStack_64[1] = 1.0;
        afStack_64[2] = 0.0;
        FUN_00401870(afStack_64,&stack0xffffff84,afStack_64 + 3);
        fVar2 = fStack_54 * fStack_6c + afStack_64[3] * fStack_70 + fStack_50 * fStack_68;
        if (fVar2 < _DAT_00890968) {
          fVar2 = -fVar2;
        }
        uVar4 = CONCAT22(extraout_var_01,
                         (ushort)(fVar2 < _DAT_008910ec) << 8 |
                         (ushort)(NAN(fVar2) || NAN(_DAT_008910ec)) << 10 |
                         (ushort)(fVar2 == _DAT_008910ec) << 0xe);
        if (fVar2 >= _DAT_008910ec && (fVar2 == _DAT_008910ec) == 0) {
          return CONCAT31((int3)(uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}

