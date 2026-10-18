/* speed.exe 006a7bd0 FUN_006a7bd0; analysis pseudocode, not buildable source.
 * calls 004560d0 FUN_004560d0
 * calls 0041ad40 FUN_0041ad40
 * calls 006a7820 FUN_006a7820
 * calls 00401ae0 FUN_00401ae0
 * calls 006f4430 FUN_006f4430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall
FUN_006a7bd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5,
            float *param_6,undefined4 param_7,int param_8)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (param_5[2] * param_5[2] + param_5[1] * param_5[1] + *param_5 * *param_5 <= _DAT_0089096c) {
    return 0;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(param_7);
  FUN_006a7820(param_2,uVar3,param_7);
  iVar4 = FUN_004560d0();
  if (iVar4 != 0) {
    fVar7 = (float10)FUN_00401ae0(param_3,*(undefined4 *)(param_1 + 0x68),
                                  *(undefined4 *)(param_1 + 0x6c));
    fVar1 = (float)fVar7;
    if (fVar7 < (float10)_DAT_00890968 == (fVar7 == (float10)_DAT_00890968)) {
      uVar3 = 0;
      if (param_8 != 0) {
        piVar5 = (int *)FUN_0041ad40(param_8);
        if (piVar5 != (int *)0x0) {
          uVar3 = (**(code **)(*piVar5 + 0x70))();
        }
      }
      fStack_c = fVar1 * *param_6;
      piVar5 = *(int **)(param_1 + 0x34);
      fStack_8 = fVar1 * param_6[1];
      fStack_4 = fVar1 * param_6[2];
      uVar2 = *(undefined4 *)(param_2 + 4);
      iVar6 = (**(code **)(*piVar5 + 0x44))();
      uVar3 = (**(code **)(*piVar5 + 0x70))(*(undefined4 *)(iVar6 + 4),uVar2,uVar3);
      FUN_006f4430(iVar4,param_4,&fStack_c,uVar3);
      return 1;
    }
  }
  return 0;
}

