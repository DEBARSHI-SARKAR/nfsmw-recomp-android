/* speed.exe 00696e00 FUN_00696e00; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 * calls 00486bd0 FUN_00486bd0
 */

void __thiscall FUN_00696e00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 0x30);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  FUN_005ca910(puVar1,puVar1 + 0x1c);
  FUN_00486bd0(puVar1 + 0x1c,param_1 + 0x48);
  return;
}

