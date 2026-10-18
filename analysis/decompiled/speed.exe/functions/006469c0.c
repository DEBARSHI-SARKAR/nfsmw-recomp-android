/* speed.exe 006469c0 FUN_006469c0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 00635150 FUN_00635150
 */

undefined4 * __thiscall FUN_006469c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879e3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_008a7f30;
  param_1[10] = 1000;
  piVar4 = param_1 + 2;
  *piVar4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      local_4 = 0xffffffff;
      iVar1 = FUN_005d29d0(0xc,0);
      local_4 = 0;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        uVar2 = FUN_00635150();
        *(undefined4 *)(iVar1 + 4) = uVar2;
        *(undefined4 *)(iVar1 + 8) = 0;
      }
      *piVar4 = iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  ExceptionList = local_c;
  return param_1;
}

