/* speed.exe 007edd78 FUN_007edd78; analysis pseudocode, not buildable source.
 * calls 007ed4db FUN_007ed4db
 * calls 007edca5 FUN_007edca5
 * calls 007ed751 FUN_007ed751
 */

int FUN_007edd78(char *param_1,uint param_2)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  char local_10c [256];
  int local_c;
  int local_8;
  
  local_c = -1;
  if (in_EAX == *(int *)(DAT_009bb13c + 0x98)) {
    local_8 = 0;
    if (DAT_009076e8 < 1) {
      return -1;
    }
    do {
      pcVar2 = *(char **)(*(int *)(DAT_009bb13c + 0x88) + local_8 * 4);
      if (pcVar2 == (char *)0x0) {
        return -1;
      }
      in_EAX = FUN_007edca5(pcVar2);
      if (*(int *)(in_EAX + 4) == 0) {
        FUN_007ed751();
      }
      iVar3 = -(int)pcVar2;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_10c + iVar3)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      puVar7 = (undefined2 *)&stack0xfffffef3;
      do {
        pcVar2 = (char *)((int)puVar7 + 1);
        puVar7 = (undefined2 *)((int)puVar7 + 1);
      } while (*pcVar2 != '\0');
      *puVar7 = DAT_008c20a8;
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar8 = &stack0xfffffef3;
      do {
        pcVar6 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar6 != '\0');
      pcVar6 = param_1;
      for (uVar5 = (uint)((int)pcVar2 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = (int)pcVar2 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      iVar3 = (**(code **)(**(int **)(in_EAX + 0x80) + 0xc))(local_10c,param_2,&local_c);
      if (iVar3 != -1) goto LAB_007ede82;
      local_8 = local_8 + 1;
    } while (local_8 < DAT_009076e8);
  }
  else {
    iVar3 = (**(code **)(**(int **)(in_EAX + 0x80) + 0xc))(param_1,param_2,&local_c);
  }
  if (iVar3 == -1) {
    return -1;
  }
LAB_007ede82:
  if ((param_2 & 0x10000) != 0) {
    (**(code **)(**(int **)(in_EAX + 0x80) + 0x10))(iVar3);
    return 1;
  }
  iVar4 = FUN_007ed4db();
  *(int *)(iVar4 + 8) = iVar3;
  *(int *)(iVar4 + 0xc) = in_EAX;
  uVar9 = (**(code **)(**(int **)(in_EAX + 0x80) + 0x20))(iVar3);
  *(undefined8 *)(iVar4 + 0x10) = uVar9;
  *(int *)(iVar4 + 4) = iVar4;
  if (local_c != -1) {
    *(int *)(iVar4 + 4) = local_c;
    return iVar4;
  }
  return iVar4;
}

