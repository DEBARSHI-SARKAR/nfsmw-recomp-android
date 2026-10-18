/* speed.exe 007831e0 FUN_007831e0; analysis pseudocode, not buildable source.
 * calls 00781e10 FUN_00781e10
 */

void __fastcall FUN_007831e0(int *param_1)

{
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    FUN_00781e10(*param_1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  DAT_009b391c = DAT_009b391c + -1;
  return;
}

