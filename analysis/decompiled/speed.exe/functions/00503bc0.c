/* speed.exe 00503bc0 FUN_00503bc0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 */

void __thiscall FUN_00503bc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_00444fe0(param_1 + 0x20,param_2);
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
      puVar1 = (undefined4 *)*puVar1) {
    FUN_00444fe0(puVar1 + 8,param_2);
  }
  return;
}

