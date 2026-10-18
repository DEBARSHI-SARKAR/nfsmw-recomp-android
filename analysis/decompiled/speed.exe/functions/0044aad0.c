/* speed.exe 0044aad0 FUN_0044aad0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_0044aad0(undefined4 *param_1)

{
  *param_1 = 0;
  if (param_1[1] != 0) {
    thunk_FUN_007c7250(param_1[1]);
    param_1[1] = 0;
  }
  param_1[2] = 0;
  if (param_1[3] != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1[3],0x40);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  return;
}

