/* speed.exe 00515830 FUN_00515830; analysis pseudocode, not buildable source.
 * calls 005b2d50 FUN_005b2d50
 */

undefined4 * FUN_00515830(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)(param_2 + 0x2c);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[3] = puVar1[3];
    return param_1;
  }
  FUN_005b2d50(0);
  return param_1;
}

