/* speed.exe 0064c2d0 FUN_0064c2d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064c2d0(float param_1)

{
  if (DAT_00925ab0 != (undefined4 *)0x0) {
    _DAT_00925ab4 = param_1 / _DAT_00925ab8 + _DAT_00925ab4;
    if ((_DAT_00925ab4 < *(float *)*DAT_00925ab0) ||
       (((float *)*DAT_00925ab0)[DAT_00925ab0[1] * 2 + -2] <= _DAT_00925ab4)) {
      DAT_00925ab0 = (undefined4 *)0x0;
    }
  }
  if (DAT_00925ad0 != (undefined4 *)0x0) {
    _DAT_00925ad4 = param_1 / _DAT_00925ad8 + _DAT_00925ad4;
    if (_DAT_00925ad4 < *(float *)*DAT_00925ad0) {
      DAT_00925ad0 = (undefined4 *)0x0;
    }
    else if (((float *)*DAT_00925ad0)[DAT_00925ad0[1] * 2 + -2] <= _DAT_00925ad4) {
      DAT_00925ad0 = (undefined4 *)0x0;
      return;
    }
  }
  return;
}

