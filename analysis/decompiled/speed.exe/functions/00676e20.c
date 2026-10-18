/* speed.exe 00676e20 FUN_00676e20; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 00634f00 FUN_00634f00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00676e20(int param_1,float param_2,float param_3,undefined4 param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_4;
  
  uVar6 = (**(code **)(*param_5 + 0x20))();
  if ((uVar6 & 2) == 0) {
    return 0;
  }
  piVar10 = (int *)(param_1 - 0x90);
  cVar5 = (**(code **)(*(int *)(param_1 + -0x90) + 0x24))();
  if ((cVar5 != '\0') && ((uVar6 & 4) == 0)) {
    return 0;
  }
  iVar7 = (**(code **)(*piVar10 + 0x88))();
  if ((iVar7 == 0) && (iVar7 = (**(code **)(*param_5 + 0x14))(), iVar7 != 0)) {
    uVar8 = (**(code **)(*param_5 + 0x14))();
    piVar9 = (int *)FUN_00634f00(uVar8);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(param_5,-(uint)(param_1 != 0xbc) & (uint)piVar10);
    }
  }
  piVar10 = (int *)(**(code **)(*piVar10 + 0x54))();
  (**(code **)(*piVar10 + 0x18))();
  (**(code **)(*param_5 + 8))();
  (**(code **)(*piVar10 + 0x58))(param_3,&fStack_18);
  fVar4 = fStack_18 * pfStack_4[2] + fStack_1c * pfStack_4[1] + fStack_20 * *pfStack_4;
  if (fVar4 < param_3) {
    fVar4 = param_3 - fVar4;
    fVar1 = *pfStack_4;
    fVar2 = pfStack_4[1];
    fVar3 = pfStack_4[2];
    fVar11 = (float10)(**(code **)(*piVar10 + 0x18))();
    fVar11 = fVar11 / (float10)param_2;
    fStack_14 = (float)((float10)(fVar4 * fVar1) * fVar11);
    fStack_10 = (float)((float10)(fVar4 * fVar2) * fVar11);
    fStack_c = (float)((float10)(fVar4 * fVar3) * fVar11);
    (**(code **)(*piVar10 + 0x88))(&fStack_14,param_3);
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    iVar7 = **(int **)(param_1 + 0x54);
    fVar11 = (float10)FUN_006e8de0(0,2);
    (**(code **)(iVar7 + 0x34))(0xab556d39,(float)fVar11);
    cVar5 = (**(code **)(*param_5 + 0x1c))();
    if (cVar5 != '\0') {
      iVar7 = **(int **)(param_1 + 0x54);
      fVar11 = (float10)FUN_006e8de0(0,2);
      (**(code **)(iVar7 + 0x34))(0xffcd8a63,(float)fVar11);
    }
  }
  return 1;
}

