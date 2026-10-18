/* speed.exe 00626850 FUN_00626850; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00626850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087777e;
  local_c = ExceptionList;
  if ((_DAT_009205c0 & 1) == 0) {
    _DAT_009205c0 = _DAT_009205c0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_009205bc = FUN_005cc240("MSpawnTraffic");
    *param_1 = DAT_009205bc;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_009205bc;
  return param_1;
}

