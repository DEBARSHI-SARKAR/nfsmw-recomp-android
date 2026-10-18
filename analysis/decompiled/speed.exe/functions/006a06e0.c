/* speed.exe 006a06e0 FUN_006a06e0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00621b60 FUN_00621b60
 */

undefined4 __fastcall FUN_006a06e0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c69f;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 300) == '\0') {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 300) = 1;
    iVar1 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_00621b60(*(undefined4 *)(*(int *)(param_1 + -0x44) + 8));
    }
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}

