/* speed.exe 006f44e0 FUN_006f44e0; analysis pseudocode, not buildable source.
 * calls 006f2540 FUN_006f2540
 */

void __thiscall
FUN_006f44e0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            char param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087eae8;
  local_c = ExceptionList;
  if ((param_6 != '\0') && (*(int *)(param_1 + 0x50) == 0)) {
    param_6 = '\0';
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (param_2 == 0) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((char)piVar1[3] != '\x01') {
      ExceptionList = &local_c;
      *(undefined1 *)(piVar1 + 3) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    ExceptionList = &local_c;
    if ((piVar1 != (int *)0x0) &&
       (((param_2 != *(int *)(param_1 + 0x48) || (param_5 != *(int *)(param_1 + 0x44))) ||
        (ExceptionList = &local_c, param_7 != *(int *)(param_1 + 0x54))))) {
      ExceptionList = &local_c;
      if ((char)piVar1[3] != '\x01') {
        ExceptionList = &local_c;
        *(undefined1 *)(piVar1 + 3) = 1;
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = *param_3;
    *(undefined4 *)(param_1 + 0x24) = param_3[1];
    *(undefined4 *)(param_1 + 0x28) = param_3[2];
    *(undefined4 *)(param_1 + 0x30) = *param_4;
    *(undefined4 *)(param_1 + 0x34) = param_4[1];
    *(undefined4 *)(param_1 + 0x38) = param_4[2];
    *(int *)(param_1 + 0x48) = param_2;
    *(int *)(param_1 + 0x44) = param_5;
    *(char *)(param_1 + 0x4d) = param_6;
    *(int *)(param_1 + 0x54) = param_7;
    if (*(int *)(param_1 + 0x3c) != 0) {
      ExceptionList = local_c;
      return;
    }
    uStack_4 = 0;
    uVar2 = FUN_006f2540();
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  ExceptionList = local_c;
  return;
}

