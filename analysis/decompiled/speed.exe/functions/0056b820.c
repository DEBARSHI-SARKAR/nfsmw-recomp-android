/* speed.exe 0056b820 FUN_0056b820; analysis pseudocode, not buildable source.
 * calls 00465240 FUN_00465240
 * calls 00507dc0 FUN_00507dc0
 * calls 00465a70 FUN_00465a70
 * calls 0064a100 FUN_0064a100
 * calls 00503380 FUN_00503380
 * calls 00460a10 FUN_00460a10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056b820(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_0064a100();
  iVar5 = 0;
  piVar2 = &DAT_008f40f8;
  if (cVar1 == '\0') {
    do {
      if (*piVar2 == 0) goto LAB_0056b875;
      piVar2 = piVar2 + 5;
      iVar5 = iVar5 + 1;
    } while ((int)piVar2 < 0x8f41c0);
  }
  else {
    do {
      if (*piVar2 == 8) goto LAB_0056b875;
      piVar2 = piVar2 + 5;
      iVar5 = iVar5 + 1;
    } while ((int)piVar2 < 0x8f41c0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0056b842:
  piVar2 = (int *)puVar3[3];
  iVar5 = *piVar2;
  iVar6 = 0;
  do {
    if (iVar5 == 0) {
      DAT_0091cf70 = iVar6 + 0x37fc8U & 0xffffffc0;
      if (DAT_008f4004 != 0) {
        DAT_008f4004 = FUN_00460a10();
        _DAT_0091cf6c = FUN_00465a70(DAT_0091cf70,0);
        FUN_00465240(DAT_008f4004,_DAT_0091cf6c,DAT_0091cf70,"LanguageMemoryPool");
      }
      FUN_00507dc0("LANGUAGES\\LANGUAGETEXTURES.BIN",0,0,0);
      FUN_00503380("LANGUAGES\\LANGUAGETEXTURES.BIN");
      return;
    }
    iVar4 = 0;
    do {
      if ((&DAT_008f4008)[iVar4 * 2] == iVar5) {
        if (-1 < (int)(&DAT_008f400c)[iVar4 * 2]) {
          iVar6 = iVar6 + (&DAT_008f400c)[iVar4 * 2];
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xb);
    iVar5 = piVar2[1];
    piVar2 = piVar2 + 1;
  } while( true );
LAB_0056b875:
  puVar3 = &DAT_008f40f8 + iVar5 * 5;
  goto LAB_0056b842;
}

