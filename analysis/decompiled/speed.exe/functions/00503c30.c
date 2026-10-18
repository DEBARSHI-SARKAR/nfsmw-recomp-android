/* speed.exe 00503c30 FUN_00503c30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00503c30(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[6] = puVar1[6] | 0x10;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  return;
}

