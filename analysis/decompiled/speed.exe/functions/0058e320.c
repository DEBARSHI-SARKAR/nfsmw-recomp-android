/* speed.exe 0058e320 FUN_0058e320; analysis pseudocode, not buildable source.
 * calls 00568f40 FUN_00568f40
 * calls 00654af0 FUN_00654af0
 * calls 0052a680 FUN_0052a680
 */

void __fastcall FUN_0058e320(undefined4 *param_1)

{
  undefined4 local_34;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1730;
  param_1[0xb] = &PTR_LAB_008a1724;
  local_4 = 0;
  local_24 = param_1;
  if (DAT_0091d3fc != 0) {
    local_28 = (undefined1 *)&local_34;
    DAT_0091d3fc = 0;
    local_34 = 0x20d60dbf;
    FUN_00568f40(&local_28);
    local_20 = local_28;
    local_1c = 0;
    local_18 = 0x14;
    local_14 = 0;
    local_10 = "safehouse";
    FUN_00654af0();
  }
  local_4 = 0xffffffff;
  local_34 = 0x58e3b4;
  FUN_0052a680();
  ExceptionList = local_c;
  return;
}

