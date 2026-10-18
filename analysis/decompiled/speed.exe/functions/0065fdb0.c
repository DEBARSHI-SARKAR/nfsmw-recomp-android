/* speed.exe 0065fdb0 FUN_0065fdb0; analysis pseudocode, not buildable source.
 * calls 0065f9a0 FUN_0065f9a0
 */

void __fastcall FUN_0065fdb0(int *param_1)

{
  if (0 < *param_1 - param_1[3]) {
    FUN_0065f9a0(param_1 + 5,param_1 + 0x46,*param_1 - param_1[3]);
    param_1[3] = *param_1;
    param_1[1] = 0;
  }
  return;
}

