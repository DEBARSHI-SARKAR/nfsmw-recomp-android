/* speed.exe 0081c218 FUN_0081c218; analysis pseudocode, not buildable source.
 * calls 0081bed4 FUN_0081bed4
 * calls 00862b92 FUN_00862b92
 * calls 00821c7c FUN_00821c7c
 * calls 0081c0cf FUN_0081c0cf
 */

undefined4 FUN_0081c218(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_34 [7];
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(&DAT_009c1b68)[param_1];
  piVar4 = (int *)puVar1[0x4e];
  if (piVar4 == (int *)0x0) {
    iVar3 = puVar1[0x48];
  }
  else {
    iVar3 = *piVar4;
  }
  puVar1[0x4e] = iVar3;
  FUN_00821c7c(0,param_2 + 8,puVar1 + 6,puVar1 + 0x21,local_34,iVar3 + 0x25);
  *(undefined4 *)(iVar3 + 0x18) = local_34[0];
  *(undefined1 *)(iVar3 + 0x24) = 0;
  piVar4 = puVar1 + 0x33;
  while (*piVar4 != 0) {
    local_18 = 3;
    local_14 = *piVar4;
    local_10 = piVar4[4];
    local_8 = *(undefined4 *)(iVar3 + 0xc);
    *piVar4 = 0;
    piVar4[4] = 0;
    piVar4 = piVar4 + 1;
    param_1 = 0;
    if ('\0' < DAT_009c218e) {
      do {
        (*(code *)(&DAT_009c21c4)[param_1])(&local_18);
        param_1 = param_1 + 1;
      } while (param_1 < DAT_009c218e);
    }
  }
  FUN_00862b92(*puVar1,param_2);
  uVar2 = FUN_0081c0cf(puVar1 + 6);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  if (puVar1[5] == puVar1[6]) {
    iVar3 = 0x1a;
    bVar8 = true;
    piVar4 = puVar1 + 7;
    piVar6 = puVar1 + 0x21;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *piVar4 == *piVar6;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if ((bVar8) && (puVar1[0x27] == 0)) goto LAB_0081c32d;
  }
  if (*(short *)(puVar1 + 5) != 0) {
    *(undefined1 *)(puVar1 + 4) = 2;
    return 0;
  }
  uVar2 = puVar1[6];
  puVar5 = puVar1 + 0x21;
  puVar7 = puVar1 + 7;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar1[0x27] = 0;
  puVar1[5] = uVar2;
LAB_0081c32d:
  if (*(char *)(puVar1 + 4) != '\x01') {
    FUN_0081bed4(puVar1);
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  return 0;
}

