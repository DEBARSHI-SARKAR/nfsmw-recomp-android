/* speed.exe 00599570 FUN_00599570; analysis pseudocode, not buildable source.
 * calls 0058fd10 FUN_0058fd10
 * calls 00634370 FUN_00634370
 * calls 004655f0 FUN_004655f0
 * calls 00628cc0 FUN_00628cc0
 * calls 00465a70 FUN_00465a70
 */

undefined1 __fastcall FUN_00599570(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 local_5;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    return 0;
  }
  FUN_00634370();
  iVar1 = FUN_00628cc0();
  pcVar2 = (char *)FUN_00465a70(iVar1 * 0x13 + 0xf4b8,0x40);
  local_5 = 1;
  FUN_00634370();
  iVar1 = FUN_00628cc0();
  FUN_0058fd10(pcVar2,iVar1 * 0x13 + 0xf4b8);
  if (DAT_0091cf95 == '\0') {
    FUN_00634370();
    iVar1 = FUN_00628cc0();
    iVar1 = iVar1 * 0x13 + 0xf4b8;
    bVar6 = true;
    pcVar4 = pcVar2;
    pcVar5 = *(char **)(param_1 + 0x128);
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      local_5 = 0;
    }
  }
  else {
    iVar1 = 0;
    while( true ) {
      FUN_00634370();
      iVar3 = FUN_00628cc0();
      if (iVar3 * 0x13 + 0xf4b8 <= iVar1) break;
      FUN_00634370();
      iVar3 = FUN_00628cc0();
      iVar3 = (iVar3 * 0x13 - iVar1) + 0xf4b8;
      if (8 < iVar3) {
        iVar3 = 8;
      }
      bVar6 = true;
      pcVar4 = pcVar2 + iVar1;
      pcVar5 = (char *)(*(int *)(param_1 + 0x128) + iVar1);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        local_5 = 1;
        break;
      }
      local_5 = 0;
      iVar1 = iVar1 + 8;
    }
  }
  FUN_004655f0(pcVar2);
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_004655f0(*(int *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return local_5;
}

