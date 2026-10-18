/* speed.exe 00781e70 FUN_00781e70; analysis pseudocode, not buildable source.
 * calls 00781e10 FUN_00781e10
 */

void __fastcall FUN_00781e70(int *param_1)

{
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    FUN_00781e10(*param_1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

