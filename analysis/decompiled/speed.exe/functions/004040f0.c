/* speed.exe 004040f0 FUN_004040f0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004040f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008675ee;
  local_c = ExceptionList;
  if ((_DAT_0090d8fc & 1) == 0) {
    _DAT_0090d8fc = _DAT_0090d8fc | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0090d8f8 = FUN_005cc240("VehicleParams");
    *param_1 = DAT_0090d8f8;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0090d8f8;
  return param_1;
}

