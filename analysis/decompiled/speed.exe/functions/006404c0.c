/* speed.exe 006404c0 FUN_006404c0; analysis pseudocode, not buildable source.
 * calls 0064c590 FUN_0064c590
 */

void __fastcall FUN_006404c0(undefined4 *param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_008796f8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = &PTR_FUN_008a6904;
  local_14 = 0;
  if (((DAT_0092d854 < 2) && (DAT_0092d884 != 0)) && (*DAT_0092d87c != 0)) {
    local_30 = 0x3e4ccccd;
    local_2c = 0;
    local_28 = 0x3e99999a;
    FUN_0064c590(0,&local_30);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_1c;
  return;
}

