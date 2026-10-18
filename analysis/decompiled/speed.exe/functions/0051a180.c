/* speed.exe 0051a180 FUN_0051a180; analysis pseudocode, not buildable source.
 * calls 005b2d80 FUN_005b2d80
 * calls 005b2d50 FUN_005b2d50
 */

void FUN_0051a180(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    FUN_005b2d80(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    return;
  }
  FUN_005b2d50(0);
  FUN_005b2d80();
  return;
}

