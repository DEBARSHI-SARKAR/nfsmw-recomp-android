/* speed.exe 006d67b0 FUN_006d67b0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_006d67b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_008af1f8;
  thunk_FUN_007c7250(param_1[0x11]);
  piVar1 = (int *)param_1[0x12];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x114))(piVar1);
    (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  piVar1 = (int *)param_1[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x13] = 0;
  }
  return;
}

