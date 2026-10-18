/* speed.exe 00851aa0 FUN_00851aa0; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00859ba0 FUN_00859ba0
 */

undefined4 FUN_00851aa0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00859ba0(*param_1);
    *param_1 = 0;
  }
  if (param_1[0x1c] != 0) {
    thunk_FUN_004655f0(param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  param_1[0x17] = 4;
  return 0;
}

