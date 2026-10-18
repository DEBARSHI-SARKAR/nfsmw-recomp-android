/* speed.exe 004058e0 FUN_004058e0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004058e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008676ce;
  local_c = ExceptionList;
  if ((_DAT_0090d92c & 1) == 0) {
    _DAT_0090d92c = _DAT_0090d92c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d928 = FUN_005cc240("MNotifyPlayerRep");
    *param_1 = DAT_0090d928;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d928;
  return param_1;
}

