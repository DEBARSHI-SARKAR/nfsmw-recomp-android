/* speed.exe 00511740 FUN_00511740; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_00511740(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e27e;
  local_c = ExceptionList;
  if ((DAT_0091cc58 & 1) == 0) {
    DAT_0091cc58 = DAT_0091cc58 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091cc54 = FUN_005cc240("MFlowReadyForOutro");
    *param_1 = DAT_0091cc54;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091cc54;
  return param_1;
}

