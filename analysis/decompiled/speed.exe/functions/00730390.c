/* speed.exe 00730390 FUN_00730390; analysis pseudocode, not buildable source.
 * calls 006626b0 FUN_006626b0
 * calls 0064cf00 thunk_FUN_007ec298
 * calls 0072fd70 FUN_0072fd70
 */

void __fastcall FUN_00730390(int param_1)

{
  while ((*(int *)(param_1 + 0x188) != 0 ||
         (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x2c0)))) {
    FUN_0072fd70();
    FUN_006626b0();
    thunk_FUN_007ec298(8);
  }
  return;
}

