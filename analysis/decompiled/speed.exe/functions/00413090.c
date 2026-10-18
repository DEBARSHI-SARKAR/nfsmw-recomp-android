/* speed.exe 00413090 FUN_00413090; analysis pseudocode, not buildable source.
 * calls 00412f30 FUN_00412f30
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00413090(int param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  fStack_10 = pfVar3[2];
  fVar2 = fStack_10 - *(float *)(param_1 + 0x7c);
  pfVar1 = (float *)(param_1 + 0x74);
  fVar4 = (float10)FUN_005c5e80(fVar2 * fVar2 + (*pfVar3 - *pfVar1) * (*pfVar3 - *pfVar1));
  if (fVar4 < (float10)_DAT_00890614) {
    FUN_00412f30();
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x38))(0x428c0000);
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x54) + 0x24))();
  fStack_10 = *pfVar3;
  fStack_c = pfVar3[1];
  fStack_8 = pfVar3[2];
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(&fStack_10);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(pfVar1);
  (**(code **)(**(int **)(param_1 + 0x58) + 0xc))
            (*pfVar1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(7);
  return;
}

