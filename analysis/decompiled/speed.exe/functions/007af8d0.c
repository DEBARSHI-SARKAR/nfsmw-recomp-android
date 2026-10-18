/* speed.exe 007af8d0 FUN_007af8d0; analysis pseudocode, not buildable source.
 * calls 007aef70 FUN_007aef70
 * calls 0056f250 FUN_0056f250
 * calls 007a4ff0 FUN_007a4ff0
 * calls 00672e80 FUN_00672e80
 * calls 00652ad0 _malloc
 * calls 005816b0 FUN_005816b0
 * calls 007a4e50 FUN_007a4e50
 * calls 0056f100 FUN_0056f100
 * calls 007aeca0 FUN_007aeca0
 */

void __thiscall FUN_007af8d0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  uint local_c;
  int local_8;
  
  iVar5 = FUN_00672e80(param_1 + 8,param_2);
  iVar2 = *(int *)(PTR_DAT_00905ea0 + 8);
  local_8 = 0;
  if (0 < iVar5 * iVar2) {
    do {
      puVar6 = _malloc(0x2c);
      puVar10 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[9] = 0;
        *puVar6 = &PTR_FUN_008b7518;
        puVar6[5] = local_8 + 1;
        puVar6[6] = param_2;
        *(undefined1 *)(puVar6 + 7) = 1;
        puVar6[8] = 1;
        *(undefined1 *)(puVar6 + 10) = 0;
        puVar10 = puVar6;
      }
      switch(param_2) {
      case 0:
      case 2:
      case 5:
      case 6:
        iVar11 = 3;
        break;
      case 1:
      case 3:
      case 4:
        iVar11 = 4;
        break;
      default:
        iVar11 = -1;
      }
      iVar7 = FUN_00672e80(param_1 + 8,param_2);
      iVar11 = ((iVar11 + local_8) - iVar7) + 1;
      local_c = 1;
      cVar4 = FUN_007a4e50(puVar10,iVar11);
      if (cVar4 == '\0') {
        cVar4 = FUN_007a4ff0(puVar10,iVar11);
        if (cVar4 != '\0') {
          local_c = 3;
        }
      }
      else {
        local_c = 2;
      }
      if (puVar10 == (undefined4 *)0x0) {
LAB_007afa28:
        iVar11 = FUN_007aeca0(puVar10);
        if (iVar11 != 0) {
          local_c = local_c | 0x20;
        }
      }
      else {
        if (*(char *)(puVar10 + 7) == '\0') {
          uVar8 = puVar10[4];
          FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
          uVar9 = FUN_005816b0(uVar8);
          iVar11 = FUN_0056f250(uVar9,uVar8);
          bVar12 = iVar11 == puVar10[3];
LAB_007afa26:
          if (!bVar12) goto LAB_007afa28;
        }
        else {
          iVar11 = puVar10[6];
          if (*(char *)(puVar10 + 10) == '\0') {
            iVar7 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
            bVar12 = puVar10[5] == *(int *)(iVar7 + 0x118 + iVar11 * 4);
            goto LAB_007afa26;
          }
          iVar7 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
          if ((*(uint *)(iVar7 + 0x134) & 1 << ((byte)iVar11 & 0x1f)) == 0) goto LAB_007afa28;
        }
        local_c = local_c | 0x10;
      }
      puVar10[8] = local_c;
      uVar8 = FUN_007aef70(puVar10);
      puVar10[9] = uVar8;
      piVar3 = *(int **)(param_3 + 4);
      piVar1 = puVar10 + 1;
      *piVar3 = (int)piVar1;
      *(int **)(param_3 + 4) = piVar1;
      puVar10[2] = piVar3;
      *piVar1 = param_3;
      local_8 = local_8 + 1;
    } while (local_8 < iVar5 * iVar2);
  }
  return;
}

