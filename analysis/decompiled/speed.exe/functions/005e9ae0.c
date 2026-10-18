/* speed.exe 005e9ae0 FUN_005e9ae0; analysis pseudocode, not buildable source.
 * calls 005e74c0 FUN_005e74c0
 */

void FUN_005e9ae0(int param_1)

{
  if (param_1 == 0) {
    param_1 = 0x21;
    FUN_005e74c0(0x88a7e3be,&param_1,0);
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      param_1 = 0;
      FUN_005e74c0(0x88a7e3be,&param_1,0);
      return;
    }
    param_1 = 100;
    FUN_005e74c0(0x88a7e3be,&param_1,0);
    return;
  }
  param_1 = 0x42;
  FUN_005e74c0(0x88a7e3be,&param_1,0);
  return;
}

