/* speed.exe 005b16f0 FUN_005b16f0; analysis pseudocode, not buildable source.
 */

void FUN_005b16f0(int param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar6 = 0;
      do {
        uVar3 = *(uint *)(iVar6 + *(int *)(param_1 + 0x14));
        if (((uVar3 == 0x2c1) || (((0x1ff < uVar3 && (uVar3 < 0x205)) && (uVar3 != 0x203)))) &&
           (((0x1ff < uVar3 && (uVar3 < 0x205)) && (uVar3 != 0x203)))) {
          *param_2 = *param_2 + 1;
          pcVar4 = *(char **)(*(int *)(param_1 + 0x14) + 4 + iVar6);
          pcVar1 = pcVar4 + 1;
          do {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          *param_3 = (int)(pcVar4 + *param_3 + (1 - (int)pcVar1));
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (uVar5 < *(uint *)(param_1 + 0x10));
    }
  }
  return;
}

