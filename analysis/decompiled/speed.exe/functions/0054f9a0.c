/* speed.exe 0054f9a0 FUN_0054f9a0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7580 FUN_005b7580
 * calls 005b1360 FUN_005b1360
 * calls 00543920 FUN_00543920
 * calls 00591d90 FUN_00591d90
 * calls 005b8400 FUN_005b8400
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_0054f9a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  *(undefined1 *)(param_1 + 0x77) = 0;
  iVar3 = 0;
  do {
    FUN_00543920(iVar3,0,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pcVar4 = *(char **)(param_1 + 0x10);
  if (pcVar4 == (char *)0x0) {
    return;
  }
  pcVar2 = pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == pcVar4 + 1) {
    return;
  }
  if (DAT_0091d218 < 1) {
    iVar3 = FUN_005b5b70(pcVar4);
    if (iVar3 != 0) goto LAB_0054fa29;
    iVar3 = FUN_005b7580(pcVar4);
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    FUN_00572070();
    iVar3 = FUN_00591d90(pcVar4);
  }
  if (iVar3 == 0) {
    return;
  }
LAB_0054fa29:
  iVar3 = FUN_005b8550(0x7f9dca9);
  if ((iVar3 != 0) && (iVar3 = FUN_005b1360(0x16a259), iVar3 != 0)) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  return;
}

