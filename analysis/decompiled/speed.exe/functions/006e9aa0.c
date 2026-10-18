/* speed.exe 006e9aa0 FUN_006e9aa0; analysis pseudocode, not buildable source.
 * calls 00641670 FUN_00641670
 * calls 00627400 FUN_00627400
 */

void __thiscall FUN_006e9aa0(int param_1,char param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e82f;
  local_c = ExceptionList;
  if (param_2 != *(char *)(param_1 + 0x80)) {
    ExceptionList = &local_c;
    iVar1 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar1 != 0) {
      FUN_00641670(param_2 != '\0');
    }
    *(char *)(param_1 + 0x80) = param_2;
  }
  ExceptionList = local_c;
  return;
}

