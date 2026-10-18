/* speed.exe 00455c40 FUN_00455c40; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00454db0 FUN_00454db0
 * calls 004517c0 FUN_004517c0
 * calls 007c6100 _sprintf
 */

int FUN_00455c40(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char local_40 [64];
  
  iVar7 = *(int *)(DAT_0090dcbc + 4);
  if (param_1 != 0) {
    uVar5 = FUN_00454db0(param_1);
    if (uVar5 < *(uint *)(iVar7 + 0xc)) {
      uVar5 = *(int *)(iVar7 + 8) + uVar5 * 0xc;
      uVar8 = *(uint *)(uVar5 + 4);
      if (uVar8 != uVar5) {
        uVar8 = (uVar8 == uVar5) - 1 & uVar8;
        goto LAB_00455c86;
      }
    }
  }
  uVar8 = 0;
LAB_00455c86:
  while( true ) {
    do {
      iVar7 = DAT_0090dcec;
      DAT_0090dcec = DAT_0090dcec + 1;
      _sprintf(local_40,"%s_%08x",param_2,iVar7);
      cVar2 = local_40[0];
      if (local_40[0] == '\0') {
        iVar7 = 0;
      }
      else {
        pcVar6 = local_40;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar7 = FUN_004517c0((int)pcVar6 - (int)(local_40 + 1));
      }
      iVar3 = *(int *)(uVar8 + 8);
    } while (iVar7 == 0);
    uVar5 = FUN_00454cc0(iVar7);
    if (*(uint *)(iVar3 + 0x20) <= uVar5) break;
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar4 = *(int *)(iVar3 + 4 + uVar5 * 0xc);
    iVar3 = iVar3 + uVar5 * 0xc;
    if (((iVar4 == iVar3) || (iVar4 == iVar3)) || (iVar4 == 0)) break;
  }
  if (param_3 == '\0') {
    return iVar7;
  }
  if (cVar2 != '\0') {
    pcVar6 = local_40;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar7 = FUN_004517c0((int)pcVar6 - (int)(local_40 + 1));
    return iVar7;
  }
  return 0;
}

