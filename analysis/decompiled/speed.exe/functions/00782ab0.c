/* speed.exe 00782ab0 FUN_00782ab0; analysis pseudocode, not buildable source.
 * calls 00781580 FUN_00781580
 * calls 00780ba0 FUN_00780ba0
 * calls 00781f70 FUN_00781f70
 * calls 00780a20 FUN_00780a20
 */

void FUN_00782ab0(byte param_1)

{
  if ((param_1 & 8) != 0) {
    FUN_00780ba0(0,0);
    FUN_00781580();
  }
  if ((param_1 & 4) != 0) {
    FUN_00781f70(0);
  }
  if ((param_1 & 0x10) != 0) {
    FUN_00780a20(0,0);
  }
  return;
}

