/* speed.exe 00605420 FUN_00605420; analysis pseudocode, not buildable source.
 * calls 005dad50 FUN_005dad50
 * calls 00654af0 FUN_00654af0
 * calls 00604820 FUN_00604820
 */

void FUN_00605420(undefined4 param_1)

{
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&uStack_20;
  local_1c = 0x20d60dbf;
  FUN_005dad50(param_1);
  FUN_00604820();
  uStack_20 = 0x605451;
  FUN_00654af0();
  return;
}

