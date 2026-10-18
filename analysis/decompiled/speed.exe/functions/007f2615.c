/* speed.exe 007f2615 FUN_007f2615; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007f2615(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 4);
  iVar3 = 4;
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c048c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 1;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c047c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 2;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c03dc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x1000;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c046c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 4;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c045c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 8;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c044c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x10;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c043c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x20;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c042c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x40;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c041c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x100;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c040c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x200;
  }
  bVar6 = true;
  iVar2 = iVar3;
  piVar4 = piVar1;
  piVar5 = &DAT_008c03fc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x400;
  }
  bVar6 = true;
  piVar4 = &DAT_008c03ec;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar1 == *piVar4;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_009bb41c = DAT_009bb41c | 0x800;
  }
  return 1;
}

