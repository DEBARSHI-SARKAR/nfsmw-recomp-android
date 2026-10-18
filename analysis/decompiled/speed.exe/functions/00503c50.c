/* speed.exe 00503c50 FUN_00503c50; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00503c50(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[6] = puVar1[6] & 0xffffffef;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffef;
  return;
}

