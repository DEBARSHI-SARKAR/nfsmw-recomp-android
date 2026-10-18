/* speed.exe 00628410 FUN_00628410; analysis pseudocode, not buildable source.
 * calls 007f1889 FUN_007f1889
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628410(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  ppuVar2 = &PTR_s_GAME_ACTION_GAS_008f6d80;
  puVar3 = &DAT_0091f418;
  for (iVar1 = 0x3dc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_0091f150 = 0;
  _DAT_0091f154 = 0;
  _DAT_0091f158 = 0;
  _DAT_0091f15c = 0;
  _DAT_0091f160 = 0;
  _DAT_0091f164 = 0;
  _DAT_0091f168 = 0;
  _DAT_0091f16c = 0;
  local_14 = 0;
  local_c = 0;
  local_4 = 0;
  local_8 = 0x20;
  local_18 = DAT_00910ef4;
  local_10 = &LAB_006283d0;
  DAT_009203b4 = (undefined4 *)FUN_007f1889(&local_18);
  (**(code **)*DAT_009203b4)();
  return;
}

