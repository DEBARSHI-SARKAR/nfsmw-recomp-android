/* speed.exe 005c4120 FUN_005c4120; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 */

undefined4 * __thiscall
FUN_005c4120(undefined4 *param_1,int param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874713;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c31a0(param_2,param_4);
  *param_1 = &PTR_FUN_008a2e24;
  param_1[0x17] = &PTR_LAB_008a2c18;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  local_4 = 1;
  if (param_3 != '\0') {
    for (piVar1 = *(int **)(param_2 + 100); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar4 = (**(code **)(*piVar1 + 4))(param_4);
      iVar2 = param_1[0x1a];
      if (iVar4 != 0) {
        if (iVar2 == 0) {
          iVar3 = param_1[0x19];
          *(int *)(iVar4 + 4) = iVar3;
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar4;
          }
          *(undefined4 *)(iVar4 + 8) = 0;
          param_1[0x19] = iVar4;
        }
        else {
          iVar3 = *(int *)(iVar2 + 4);
          *(int *)(iVar4 + 4) = iVar3;
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar4;
          }
          *(int *)(iVar4 + 8) = iVar2;
          *(int *)(iVar2 + 4) = iVar4;
        }
        if (param_1[0x1a] == iVar2) {
          param_1[0x1a] = iVar4;
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

