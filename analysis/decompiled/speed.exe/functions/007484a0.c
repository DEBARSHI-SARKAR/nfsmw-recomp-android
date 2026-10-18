/* speed.exe 007484a0 FUN_007484a0; analysis pseudocode, not buildable source.
 * calls 0075bed0 FUN_0075bed0
 */

void __fastcall FUN_007484a0(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x58); puVar1 != (undefined4 *)(param_1 + 0x58);
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[0xd3] + 8) == 1) {
      *(undefined4 *)(puVar1[0xd3] + 8) = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0075bed0();
  return;
}

