/* speed.exe 006b06d0 FUN_006b06d0; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 * calls 00727480 FUN_00727480
 * calls 006a45f0 FUN_006a45f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006b06d0(int param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float afStack_18 [3];
  float afStack_c [3];
  
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0xe8) + 4))();
  fVar1 = *pfVar3;
  iVar4 = (**(code **)(**(int **)(param_1 + 0xe8) + 4))();
  uStack_2c = *(undefined4 *)(iVar4 + 8);
  fStack_28 = -fVar1;
  iVar4 = FUN_00727480(&uStack_2c,param_2,0);
  uVar5 = 0;
  if (iVar4 != 0) {
    afStack_c[2] = *(float *)(iVar4 + 4);
    afStack_c[0] = -*(float *)(iVar4 + 8);
    uStack_1c = *(undefined4 *)(iVar4 + 0xc);
    fStack_24 = -*(float *)(iVar4 + 0x10);
    afStack_c[1] = 0.0;
    uStack_20 = 0;
    afStack_18[1] = 0.0;
    afStack_18[0] = fStack_24;
    afStack_18[2] = (float)uStack_1c;
    fVar6 = (float10)FUN_00410220(afStack_18);
    fVar2 = (float10)_DAT_008aabe0;
    uVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar6 < fVar2) << 8 | (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
                     (ushort)(fVar6 == fVar2) << 0xe);
    if (fVar6 >= fVar2 && (fVar6 == fVar2) == 0) {
      uVar5 = FUN_006a45f0(afStack_c,afStack_18,0);
      return uVar5;
    }
  }
  return uVar5;
}

