/* speed.exe 0066a3a0 FUN_0066a3a0; analysis pseudocode, not buildable source.
 * calls 00698240 FUN_00698240
 */

uint __fastcall FUN_0066a3a0(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 0x5c))();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00698240();
  return uVar1;
}

