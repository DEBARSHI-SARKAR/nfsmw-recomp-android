/* speed.exe 00473cd0 FUN_00473cd0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 0046aa30 FUN_0046aa30
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005d59e0 FUN_005d59e0
 * calls 005d5a50 FUN_005d5a50
 * calls 007831e0 FUN_007831e0
 * calls 006466b0 FUN_006466b0
 * calls 00460bf0 FUN_00460bf0
 * calls 00460ca0 FUN_00460ca0
 * calls 006fc060 FUN_006fc060
 */

void __fastcall FUN_00473cd0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086a338;
  pvStack_c = ExceptionList;
  piVar1 = param_1 + 6;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00894ca0;
  *piVar1 = (int)&PTR_LAB_00894c84;
  local_4 = 3;
  DAT_008ee380 = FUN_00460bf0(&DAT_00890978);
  FUN_00460ca0(&DAT_008ee384,&DAT_00890978,0xd);
  DAT_008ee391 = 0;
  DAT_008f9b28 = 1;
  if (param_1[0xb6] != 0) {
    FUN_006fc060(param_1[0xb6]);
  }
  if (param_1[0xb8] != 0) {
    (**(code **)(*piVar1 + 8))(param_1[0xb8]);
    param_1[0xb8] = 0;
  }
  FUN_007869c0(0);
  if ((int *)param_1[0xb1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb1] + 4))(1);
  }
  thunk_FUN_007c7250(param_1[0xb0]);
  if ((undefined4 *)param_1[0xb7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb7])(1);
  }
  local_4._0_1_ = 2;
  FUN_007831e0();
  local_4._0_1_ = 1;
  FUN_006466b0();
  *piVar1 = (int)&PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(piVar1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00894bac;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

