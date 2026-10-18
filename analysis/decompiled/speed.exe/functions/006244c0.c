/* speed.exe 006244c0 FUN_006244c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006244c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087733e;
  local_c = ExceptionList;
  if ((_DAT_009204c0 & 1) == 0) {
    _DAT_009204c0 = _DAT_009204c0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009204bc = FUN_005cc240("ExplosionParams");
    *param_1 = DAT_009204bc;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009204bc;
  return param_1;
}

