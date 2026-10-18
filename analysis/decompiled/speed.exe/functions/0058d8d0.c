/* speed.exe 0058d8d0 FUN_0058d8d0; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 00586290 FUN_00586290
 * calls 00525220 FUN_00525220
 * calls 00515e90 FUN_00515e90
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 * __thiscall FUN_0058d8d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008724f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0ef0;
  piVar1 = param_1 + 0xc;
  *piVar1 = 0;
  puVar5 = param_1 + 0xd;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  piVar2 = *(int **)(param_2 + 8);
  local_4 = 0;
  piVar4 = piVar2;
  piVar6 = piVar1;
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  thunk_FUN_007c7250(piVar2);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  if (*piVar1 == 0) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_005252d0(param_1[4],0x1e2640fa,param_1 + 0xd);
    }
  }
  else {
    FUN_00525220(param_1[4],0x1e2640fa,*piVar1);
  }
  FUN_00525220(param_1[4],0xb8a7c6cc,param_1[0x4d]);
  FUN_00525220(param_1[4],0xb8a7c6cd,param_1[0x4f]);
  FUN_00515e90(param_1[4],param_1[0x52]);
  ExceptionList = local_c;
  return param_1;
}

