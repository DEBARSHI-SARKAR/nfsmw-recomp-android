/* speed.exe 005b1780 FUN_005b1780; analysis pseudocode, not buildable source.
 */

void FUN_005b1780(uint param_1,int *param_2,int *param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  for (iVar4 = param_1; iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    param_1 = 0;
    if (*(int *)(iVar4 + 0x10) != 0) {
      iVar7 = 0;
      do {
        puVar1 = (uint *)(*(int *)(iVar4 + 0x14) + iVar7);
        uVar3 = *puVar1;
        if (((uVar3 == 0x2c1) || (((0x1ff < uVar3 && (uVar3 < 0x205)) && (uVar3 != 0x203)))) &&
           (((0x1ff < uVar3 && (uVar3 < 0x205)) && (uVar3 != 0x203)))) {
          pcVar5 = (char *)(*param_3 + param_4);
          pcVar6 = (char *)puVar1[1];
          pcVar8 = pcVar5;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          *(char **)(param_4 + 4 + *param_2 * 8) = pcVar5;
          *(undefined4 *)(param_4 + 8 + *param_2 * 8) =
               *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar7);
          pcVar6 = pcVar5 + 1;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          *param_3 = (int)(pcVar5 + *param_3 + (1 - (int)pcVar6));
          *param_2 = *param_2 + 1;
        }
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 0xc;
      } while (param_1 < *(uint *)(iVar4 + 0x10));
    }
  }
  return;
}

