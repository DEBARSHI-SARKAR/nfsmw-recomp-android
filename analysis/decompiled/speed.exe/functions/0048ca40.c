/* speed.exe 0048ca40 FUN_0048ca40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0048ca40(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086ad8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0089542c;
  piVar2 = *(int **)param_1[0x11];
  local_4 = 0;
  if (piVar2 != (int *)param_1[0x11]) {
    do {
      if (piVar2[2] != 0) {
        FUN_005d0370(piVar2[2],0x68,0);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0x11]);
  }
  piVar2 = (int *)param_1[0x11];
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(undefined4 *)(param_1[0x11] + 4) = param_1[0x11];
  local_4 = 0xffffffff;
  param_1[0x12] = 0;
  if (piVar1 != (int *)param_1[0x11]) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_005d0370(piVar1,0xc,0);
      piVar1 = piVar2;
    } while (piVar2 != (int *)param_1[0x11]);
  }
  if (param_1[0x11] != 0) {
    FUN_005d0370(param_1[0x11],0xc,0);
  }
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return;
}

