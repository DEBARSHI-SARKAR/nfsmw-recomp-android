/* speed.exe 00731d80 FUN_00731d80; analysis pseudocode, not buildable source.
 * calls 00731750 FUN_00731750
 * calls 00652ad0 _malloc
 * calls 00726700 FUN_00726700
 * calls 00460dd0 FUN_00460dd0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0072c8e0 FUN_0072c8e0
 */

void __thiscall FUN_00731d80(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880704;
  local_c = ExceptionList;
  piVar4 = *(int **)(param_1 + 0x48);
  ExceptionList = &local_c;
  if (piVar4 != (int *)(param_1 + 0x48)) {
    while (iVar1 = FUN_00460dd0(piVar4 + 2,param_2), iVar1 != 0) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)(param_1 + 0x48)) {
        ExceptionList = local_c;
        return;
      }
    }
    if (piVar4 != *(int **)(param_1 + 0x58)) {
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        DAT_009a3a70 = DAT_009a3a70 + -1;
        FUN_0072c8e0(*(undefined4 *)(param_1 + 0x5c),0);
        if (*(int *)(param_1 + 0x5c) != 0) {
          thunk_FUN_007c7250(*(int *)(param_1 + 0x5c));
        }
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      DAT_009a3a70 = DAT_009a3a70 + 1;
      *(int **)(param_1 + 0x58) = piVar4;
      pvVar2 = _malloc(0x6034);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00726700(&DAT_008b2b58);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      FUN_0072c8e0(piVar4,uVar3);
      FUN_00731750();
    }
  }
  ExceptionList = local_c;
  return;
}

