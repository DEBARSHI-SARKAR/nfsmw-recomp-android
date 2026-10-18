/* speed.exe 005bec30 FUN_005bec30; analysis pseudocode, not buildable source.
 * calls 005bcb70 FUN_005bcb70
 * calls 005b2b60 FUN_005b2b60
 */

void __thiscall FUN_005bec30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_005b2b60(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = FUN_005bcb70(param_2);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}

