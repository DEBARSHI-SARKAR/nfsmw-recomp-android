/* speed.exe 005e9a90 FUN_005e9a90; analysis pseudocode, not buildable source.
 * calls 005e74c0 FUN_005e74c0
 */

void FUN_005e9a90(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
    FUN_005e74c0(0xc64bc341,&param_1,0);
    return;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  FUN_005e74c0(0xc64bc341,&param_1,0);
  return;
}

