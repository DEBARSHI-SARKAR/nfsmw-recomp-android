/* speed.exe 005d5f50 FUN_005d5f50; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005d5470 FUN_005d5470
 */

void __fastcall FUN_005d5f50(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d5470(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1,param_1);
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = (*(int *)(param_1 + 0xc) - (int)puVar1 >> 2) * 4;
      if (uVar2 < 0x401) {
        uVar2 = uVar2 - 1 >> 4;
        *puVar1 = (&DAT_00925b30)[uVar2];
        (&DAT_00925b30)[uVar2] = puVar1;
      }
      else {
        FUN_004655f0(puVar1);
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

