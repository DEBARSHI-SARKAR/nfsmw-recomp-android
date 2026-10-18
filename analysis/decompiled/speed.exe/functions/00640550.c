/* speed.exe 00640550 FUN_00640550; analysis pseudocode, not buildable source.
 * calls 00479eb0 FUN_00479eb0
 * calls 0046e2d0 FUN_0046e2d0
 */

void __fastcall FUN_00640550(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6958;
  local_4 = 0;
  if (((DAT_0092d854 < 2) && (DAT_0092d884 != 0)) && (*DAT_0092d87c != 0)) {
    FUN_0046e2d0(param_1[2],param_1[3]);
    FUN_00479eb0(1,"CDActionIce");
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

