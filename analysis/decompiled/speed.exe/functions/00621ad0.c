/* speed.exe 00621ad0 FUN_00621ad0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_00621ad0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876e0e;
  local_c = ExceptionList;
  if ((DAT_0092049c & 1) == 0) {
    DAT_0092049c = DAT_0092049c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00920498 = FUN_005cc240("MEnterRaceOverFlow");
    *param_1 = DAT_00920498;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00920498;
  return param_1;
}

