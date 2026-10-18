/* speed.exe 005d0560 FUN_005d0560; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005d0560(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    if (0x400 < (uint)(*param_1 * 0x10)) {
      FUN_004655f0(puVar1);
      return;
    }
    uVar2 = *param_1 * 0x10 - 1U >> 4;
    *puVar1 = (&DAT_00925b30)[uVar2];
    (&DAT_00925b30)[uVar2] = puVar1;
  }
  return;
}

