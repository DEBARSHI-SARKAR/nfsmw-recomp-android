/* speed.exe 005b4e70 FUN_005b4e70; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_005b4e70(int param_1,uint param_2,uint param_3,undefined4 *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_4;
  
  uVar7 = param_6 + param_3;
  for (; uVar5 = param_2, param_3 < uVar7; param_3 = param_3 + 1) {
    for (; uVar5 < param_5 + param_2; uVar5 = uVar5 + 1) {
      iVar2 = *(int *)(param_1 + 0x6c);
      iVar3 = *(int *)(param_1 + 0x60);
      if (iVar2 == 0) {
        local_4 = -1;
      }
      else {
        uVar8 = uVar5;
        if (iVar2 <= (int)uVar5) {
          uVar8 = (int)uVar5 % iVar2;
        }
        local_4 = uVar8 - *(int *)(param_1 + 0x74);
        if ((local_4 < 0) && (local_4 = local_4 + iVar2, local_4 < 0)) {
          if (iVar3 < 2) {
            local_4 = 0;
          }
          else {
            local_4 = iVar3 - -local_4 % iVar3;
          }
        }
        else {
          local_4 = local_4 % iVar3;
        }
      }
      iVar2 = *(int *)(param_1 + 0x70);
      iVar4 = *(int *)(param_1 + 100);
      if (iVar2 == 0) {
        iVar6 = -1;
      }
      else {
        uVar8 = param_3;
        if (iVar2 <= (int)param_3) {
          uVar8 = (int)param_3 % iVar2;
        }
        iVar6 = uVar8 - *(int *)(param_1 + 0x78);
        if ((iVar6 < 0) && (iVar6 = iVar6 + iVar2, iVar6 < 0)) {
          if (iVar4 < 2) {
            iVar6 = 0;
          }
          else {
            iVar6 = iVar4 - -iVar6 % iVar4;
          }
        }
        else {
          iVar6 = iVar6 % iVar4;
        }
      }
      puVar1 = (undefined4 *)((iVar3 * iVar6 + local_4) * 0x30 + 4 + *(int *)(param_1 + 0x8c));
      *puVar1 = *param_4;
      puVar1[1] = param_4[1];
    }
  }
  return;
}

