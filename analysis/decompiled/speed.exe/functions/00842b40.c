/* speed.exe 00842b40 FUN_00842b40; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 00842690 FUN_00842690
 * calls 0083b110 FUN_0083b110
 * calls 008421c0 FUN_008421c0
 */

int FUN_00842b40(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  param_1 = 0;
  while( true ) {
    if (*(int *)(iVar4 + 0x1210) == 0) {
      return 0;
    }
    uVar5 = FUN_008421c0(iVar4,*(int *)(iVar4 + 0x1210),"$head");
    *(undefined4 *)(iVar4 + 0x1214) = uVar5;
    iVar6 = FUN_008421c0(iVar4,uVar5,"$tail");
    *(int *)(iVar4 + 0x1218) = iVar6;
    if (*(int *)(iVar4 + 0x1214) == 0) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
    puVar11 = (undefined4 *)(*(int *)(iVar4 + 0x1214) + 2);
    uVar7 = iVar6 - (int)puVar11;
    *(undefined4 **)(iVar4 + 0x1214) = puVar11;
    if ((int)uVar7 < 1) break;
    if (0xfff < (int)uVar7) {
      return 0;
    }
    puVar1 = (undefined4 *)(iVar4 + 0x210);
    puVar12 = puVar1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined1 *)((int)puVar1 + uVar7) = 0;
    uVar5 = FUN_0083a670(puVar1,&PTR_LAB_008c6b60,0);
    iVar6 = FUN_0083b110(uVar5);
    *(int *)(iVar4 + 0x20c) = iVar6;
    if (iVar6 == 0) {
      return 0;
    }
    pcVar8 = (char *)FUN_008421c0(iVar4,*(int *)(iVar4 + 0x1214) + -2,"$next");
    pcVar10 = (char *)(*(int *)(iVar4 + 0x1218) + 2);
    *(char **)(iVar4 + 0x1210) = pcVar8;
    cVar3 = *pcVar10;
    while (('\0' < cVar3 && (cVar3 < '!'))) {
      pcVar2 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar2;
    }
    *(char **)(iVar4 + 0x121c) = pcVar10;
    *(char **)(iVar4 + 0x1220) = pcVar8;
    if ((pcVar10 == pcVar8) || (pcVar8 == (char *)0x0)) {
      *(undefined4 *)(iVar4 + 0x1220) = 0;
      *(undefined4 *)(iVar4 + 0x121c) = 0;
    }
    else {
      *pcVar8 = '\0';
    }
    if (*(int *)(iVar4 + 0x20c) != 0x676f746f) {
      return iVar4 + 0x20c;
    }
    FUN_00842690(iVar4,&DAT_008c6b48,&DAT_00890978,"DEFAULT-GOTO");
    param_1 = param_1 + 1;
    if (4 < param_1) {
      return 0;
    }
  }
  return 0;
}

