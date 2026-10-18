/* speed.exe 00524230 FUN_00524230; analysis pseudocode, not buildable source.
 * calls 00586130 FUN_00586130
 */

int __thiscall FUN_00524230(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  short local_130 [152];
  
  pcVar3 = param_2;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_2 + 1);
  psVar5 = local_130;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    pcVar3 = param_2;
    while (cVar2 != '\0') {
      *psVar5 = (short)cVar2;
      pcVar1 = pcVar3 + 1;
      psVar5 = psVar5 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
  }
  *psVar5 = 0;
  fVar9 = (float10)FUN_00586130(local_130,*(undefined4 *)(param_1 + 0x1160),0,0);
  fVar10 = (float10)(*(int *)(param_1 + 0x115c) + -0x10);
  iVar8 = iVar4;
  if (fVar10 < fVar9 != (fVar10 == fVar9)) {
    do {
      iVar6 = iVar8;
      iVar8 = iVar6 + -1;
      if (iVar8 < 2) break;
      psVar5 = local_130;
      if (iVar8 != 0) {
        if (param_2 != (char *)0x0) {
          cVar2 = *param_2;
          pcVar3 = param_2;
          for (iVar7 = 0; (cVar2 != '\0' && (iVar6 + -2 != iVar7)); iVar7 = iVar7 + 1) {
            *psVar5 = (short)*pcVar3;
            psVar5 = psVar5 + 1;
            pcVar3 = pcVar3 + 1;
            cVar2 = *pcVar3;
          }
        }
        *psVar5 = 0;
      }
      fVar9 = (float10)FUN_00586130(local_130,*(undefined4 *)(param_1 + 0x1160),0,0);
      fVar10 = (float10)(*(int *)(param_1 + 0x115c) + -0x10);
    } while (fVar10 < fVar9 != (fVar10 == fVar9));
    if (iVar8 < iVar4) {
      for (iVar6 = iVar6 + -2; 0 < iVar6; iVar6 = iVar6 + -1) {
        if (param_2[iVar6] == ' ') {
          iVar4 = iVar6;
          if (iVar6 < 1) {
            return iVar8;
          }
          do {
            if (param_2[iVar4] != ' ') {
              if (0 < iVar4) {
                iVar6 = iVar4;
              }
              return iVar6 + 1;
            }
            iVar4 = iVar4 + -1;
          } while (0 < iVar4);
          return iVar6 + 1;
        }
      }
    }
  }
  return iVar8;
}

