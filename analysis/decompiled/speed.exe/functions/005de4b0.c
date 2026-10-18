/* speed.exe 005de4b0 FUN_005de4b0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 00641c20 FUN_00641c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005de4b0(int param_1,float param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874eff;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 8) == '\x02') {
    param_2 = *(float *)(param_1 + 0xc) - param_2;
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      param_2 = param_2 * _DAT_00890da8;
    }
    if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
      ExceptionList = &local_c;
      iVar1 = FUN_00627400(0xc);
      local_4 = 0;
      if (iVar1 != 0) {
        FUN_00641c20(param_1);
      }
      *(undefined1 *)(param_1 + 8) = 3;
    }
  }
  ExceptionList = local_c;
  return;
}

