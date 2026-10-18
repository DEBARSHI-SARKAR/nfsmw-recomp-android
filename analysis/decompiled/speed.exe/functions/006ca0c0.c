/* speed.exe 006ca0c0 FUN_006ca0c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ca0c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x4988);
  do {
    fsin((float10)local_4 * (float10)_DAT_008adfe0 * (float10)_DAT_008af2d0);
    uVar1 = FUN_007c4b80();
    local_4 = local_4 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (local_4 < 0x168);
  return;
}

