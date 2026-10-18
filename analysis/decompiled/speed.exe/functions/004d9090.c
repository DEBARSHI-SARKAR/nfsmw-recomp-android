/* speed.exe 004d9090 FUN_004d9090; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004d9090(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_108 [65];
  
  piVar4 = local_108;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    piVar4 = local_108;
    do {
      *piVar4 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
      piVar4 = piVar4 + 1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar3 = 0;
  while( true ) {
    bVar1 = false;
    iVar7 = 0;
    iVar5 = 0;
    uVar6 = 0x40;
    if (*(int *)(param_1 + 0x30) < 1) {
      return;
    }
    do {
      if (local_108[iVar5] != 0) {
        uVar2 = *(int *)(local_108[iVar5] + 0x20) >> 4 & 0x7f;
        bVar1 = true;
        if (uVar2 < uVar6) {
          uVar6 = uVar2;
          iVar7 = iVar5;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x30));
    if (!bVar1) break;
    iVar5 = local_108[iVar7];
    if (*(int *)(param_1 + 0x20) == 0) {
      *(int *)(param_1 + 0x20) = iVar5;
      *(undefined4 *)(iVar5 + 4) = 0;
      local_108[iVar7] = 0;
      iVar3 = iVar5;
    }
    else {
      *(int *)(iVar3 + 4) = iVar5;
      *(undefined4 *)(iVar5 + 4) = 0;
      local_108[iVar7] = 0;
      iVar3 = iVar5;
    }
  }
  return;
}

