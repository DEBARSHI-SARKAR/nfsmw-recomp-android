/* speed.exe 00510360 FUN_00510360; analysis pseudocode, not buildable source.
 * calls 0056d640 FUN_0056d640
 * calls 0056e2e0 FUN_0056e2e0
 * calls 0056d460 FUN_0056d460
 * calls 0056d580 FUN_0056d580
 */

uint __fastcall FUN_00510360(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  switch(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24)) {
  case 0:
    uVar2 = FUN_0056d640(*(undefined4 *)(param_1 + 0x130));
    return uVar2;
  case 1:
    iVar3 = 0x21;
    bVar6 = true;
    piVar4 = *(int **)(param_1 + 0x14c);
    piVar5 = *(int **)(param_1 + 0x144);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0;
    }
    bVar6 = *(int *)(param_1 + 0x150) == *(int *)(param_1 + 0x148);
    break;
  default:
    return param_1 & 0xffffff00;
  case 3:
    uVar2 = FUN_0056d580(*(undefined4 *)(param_1 + 0x138));
    return uVar2;
  case 4:
    uVar2 = FUN_0056d460(*(undefined4 *)(param_1 + 0x13c));
    return uVar2;
  case 9:
    cVar1 = FUN_0056e2e0(*(undefined4 *)(param_1 + 0x140));
    if (cVar1 == '\0') {
      return 0;
    }
    bVar6 = DAT_0091ca28 == *(char *)(DAT_0091cf90 + 0x176);
  }
  if (!bVar6) {
    return 0;
  }
  return 1;
}

