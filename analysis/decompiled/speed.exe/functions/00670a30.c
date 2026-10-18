/* speed.exe 00670a30 FUN_00670a30; analysis pseudocode, not buildable source.
 * calls 00669f50 FUN_00669f50
 * calls 0066edf0 FUN_0066edf0
 * calls 0066a070 FUN_0066a070
 * calls 00629c40 FUN_00629c40
 * calls 0066a020 FUN_0066a020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00670a30(int param_1,int *param_2)

{
  char cVar1;
  int *unaff_retaddr;
  undefined1 auStack_40 [64];
  
  cVar1 = FUN_0066a020();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xec) = 0x3e000000;
    return;
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0xec)) {
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) - (float)param_2;
    return;
  }
  cVar1 = FUN_00669f50();
  if (cVar1 != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x104) == 0) || (cVar1 = FUN_0066a070(), cVar1 == '\0')) {
    if ((*(int **)(param_1 + 0x104) == (int *)0x0) || (*(char *)(param_1 + 0x111) != '\0'))
    goto LAB_00670b3e;
    (**(code **)(**(int **)(param_1 + 0x104) + 0x60))();
  }
  else if (((*(char *)(param_1 + 0x100) == '\0') || (*(int **)(param_1 + 0x114) == (int *)0x0)) ||
          (cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x5c))(), cVar1 == '\0')) {
    cVar1 = FUN_0066edf0(&param_2);
    if (cVar1 == '\0') goto LAB_00670b3e;
    (**(code **)(*(int *)(param_1 + 0x2c) + 100))(auStack_40);
    (**(code **)(*unaff_retaddr + 4))(&stack0xffffffbc,1);
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))(*(undefined4 *)(param_1 + 0x104));
  }
  else {
    cVar1 = FUN_00629c40(&param_2);
    if (cVar1 == '\0') goto LAB_00670b3e;
    (**(code **)(*param_2 + 8))();
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
LAB_00670b3e:
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  return;
}

