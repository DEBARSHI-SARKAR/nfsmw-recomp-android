/* speed.exe 00600730 FUN_00600730; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 005fbd90 FUN_005fbd90
 * calls 004647e0 FUN_004647e0
 * calls 005dcea0 FUN_005dcea0
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 __fastcall FUN_00600730(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_20 [32];
  
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1964) == 2)) &&
     (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    cVar1 = FUN_005fbd90();
    if (cVar1 != '\0') {
      uVar2 = FUN_005dcea0();
      FUN_004647e0(local_20,0x20,"BLACKLIST_RIVAL_%02d_LEADERBOARD",uVar2);
      uVar2 = FUN_00460bf0(local_20);
      uVar2 = FUN_0056bc10(uVar2);
      *(undefined4 *)(param_1 + 8) = uVar2;
      return 1;
    }
  }
  return 0;
}

