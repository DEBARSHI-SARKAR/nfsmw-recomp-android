/* speed.exe 0075f010 FUN_0075f010; analysis pseudocode, not buildable source.
 * calls 0042e340 FUN_0042e340
 * calls 0075ede0 FUN_0075ede0
 * calls 0075da90 FUN_0075da90
 * calls 005d8660 FUN_005d8660
 */

undefined4 * __fastcall FUN_0075f010(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0088160e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(1);
  local_4 = 0;
  FUN_0042e340(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2));
  *param_1 = &PTR_FUN_008b50d8;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0xb] = &DAT_00890978;
  param_1[0xc] = &DAT_00890978;
  FUN_0075da90(0x20);
  FUN_0075ede0();
  DAT_009b08fc = 1;
  ExceptionList = local_c;
  return param_1;
}

