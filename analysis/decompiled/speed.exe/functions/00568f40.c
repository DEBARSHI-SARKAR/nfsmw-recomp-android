/* speed.exe 00568f40 FUN_00568f40; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00568f40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087147e;
  local_c = ExceptionList;
  if ((_DAT_0091dc74 & 1) == 0) {
    _DAT_0091dc74 = _DAT_0091dc74 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dc70 = FUN_005cc240("MEnterSafeHouse");
    *param_1 = DAT_0091dc70;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091dc70;
  return param_1;
}

