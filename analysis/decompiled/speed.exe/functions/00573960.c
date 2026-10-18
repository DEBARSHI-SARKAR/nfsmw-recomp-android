/* speed.exe 00573960 FUN_00573960; analysis pseudocode, not buildable source.
 * calls 00515b90 FUN_00515b90
 */

void __thiscall FUN_00573960(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_2);
  FUN_00515b90(uVar1,*(undefined4 *)(param_2 + 0xc));
  return;
}

