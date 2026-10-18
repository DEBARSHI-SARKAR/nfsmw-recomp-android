/* speed.exe 005d59d0 thunk_FUN_005d4760; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_005d4760(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (*(int *)(param_1 + 0xc) - (int)puVar1 >> 3) * 8;
    if (uVar2 < 0x401) {
      uVar2 = uVar2 - 1 >> 4;
      *puVar1 = (&DAT_00925b30)[uVar2];
      (&DAT_00925b30)[uVar2] = puVar1;
    }
    else {
      FUN_004655f0(puVar1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

