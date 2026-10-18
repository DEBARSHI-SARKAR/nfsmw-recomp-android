/* speed.exe 0048b190 FUN_0048b190; analysis pseudocode, not buildable source.
 * calls 004866c0 FUN_004866c0
 * calls 004884a0 FUN_004884a0
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b190(int param_1,undefined4 param_2,float *param_3,undefined4 param_4,float param_5)

{
  int *piVar1;
  undefined4 uVar2;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 auStack_10 [16];
  
  piVar1 = *(int **)(param_1 + 0x10);
  fVar3 = (float10)param_5 * (float10)_DAT_008933d4 * (float10)_DAT_008953ec;
  fVar4 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos((float10)(float)fVar3);
  local_14 = (float)fVar3;
  local_20 = (float)((float10)_DAT_00890968 * fVar4);
  local_1c = (float)fVar4;
  local_18 = (float)((float10)_DAT_00890968 * fVar4);
  uVar2 = (**(code **)(*piVar1 + 0x20))();
  FUN_004866c0(uVar2,param_3,auStack_10);
  FUN_004866c0(auStack_10,&local_20,&fStack_30);
  FUN_004866c0(&fStack_30,param_2,auStack_10);
  FUN_004884a0(auStack_10,auStack_10);
  (**(code **)(*piVar1 + 0x24))(auStack_10);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
  FUN_00401670(param_1 + 4,uVar2,&stack0xffffffcc);
  fStack_24 = *param_3 - unaff_ESI;
  local_20 = param_3[1] - fStack_30;
  fStack_2c = param_3[2] - fStack_2c;
  local_1c = fStack_2c;
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(&fStack_24);
  return;
}

