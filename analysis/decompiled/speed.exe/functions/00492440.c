/* speed.exe 00492440 FUN_00492440; analysis pseudocode, not buildable source.
 * calls 00492130 FUN_00492130
 */

int __thiscall FUN_00492440(int param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_8;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    *param_3 = 0;
    return 0;
  }
  uVar4 = FUN_00492130(param_2);
  local_8 = 0;
  do {
    iVar2 = *(int *)(iVar5 + uVar4 * 4);
    if (iVar2 != 0) {
      pbVar8 = (byte *)(iVar2 + 4);
      pbVar6 = param_2;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_004924a8:
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004924ad;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_004924a8;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_004924ad:
      if ((iVar7 == 0) && (iVar2 != 0)) {
        piVar3 = *(int **)(iVar5 + uVar4 * 4);
        if (piVar3 != (int *)0x0) {
          *param_3 = 1;
          return *piVar3;
        }
        *param_3 = 0;
        puVar9 = *(undefined4 **)(extraout_ECX + 0x10);
        iVar5 = 0;
        if (puVar9 == (undefined4 *)0x0) {
          return 0;
        }
        do {
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = (*(code *)*puVar9)(param_2,param_3);
          puVar9 = (undefined4 *)puVar9[2];
        } while (puVar9 != (undefined4 *)0x0);
        return iVar5;
      }
    }
    if (*(uint *)(extraout_ECX + 4) < local_8) {
      *param_3 = 0;
      return 0;
    }
    uVar4 = uVar4 + 1;
    if (*(uint *)(extraout_ECX + 4) <= uVar4) {
      uVar4 = 0;
    }
    local_8 = local_8 + 1;
  } while( true );
}

