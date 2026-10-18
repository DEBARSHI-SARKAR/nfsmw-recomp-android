/* speed.exe 00603220 FUN_00603220; analysis pseudocode, not buildable source.
 * calls 00602840 FUN_00602840
 * calls 005fbd90 FUN_005fbd90
 * calls 00601020 FUN_00601020
 * calls 005dcbb0 FUN_005dcbb0
 * calls 005d97a0 FUN_005d97a0
 * calls 005fc560 FUN_005fc560
 */

void __fastcall FUN_00603220(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 0x1964) == 2) && (*(int *)(param_1 + 0x196c) != 0)) &&
      (*(int *)(param_1 + 0x1968) != 0)) &&
     ((cVar1 = FUN_005fbd90(), cVar1 != '\0' && (cVar1 = FUN_005fc560(), cVar1 == '\0')))) {
    uVar2 = FUN_005d97a0();
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar3 = FUN_00601020(uVar4);
        FUN_005dcbb0(uVar3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    FUN_00602840();
    return;
  }
  return;
}

