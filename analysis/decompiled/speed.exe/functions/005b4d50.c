/* speed.exe 005b4d50 FUN_005b4d50; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_005b4d50(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_4;
  
  uVar6 = param_6 + param_3;
  for (; uVar4 = param_2, param_3 < uVar6; param_3 = param_3 + 1) {
    for (; uVar4 < param_5 + param_2; uVar4 = uVar4 + 1) {
      iVar1 = *(int *)(param_1 + 0x6c);
      iVar2 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        local_4 = -1;
      }
      else {
        uVar7 = uVar4;
        if (iVar1 <= (int)uVar4) {
          uVar7 = (int)uVar4 % iVar1;
        }
        local_4 = uVar7 - *(int *)(param_1 + 0x74);
        if ((local_4 < 0) && (local_4 = local_4 + iVar1, local_4 < 0)) {
          if (iVar2 < 2) {
            local_4 = 0;
          }
          else {
            local_4 = iVar2 - -local_4 % iVar2;
          }
        }
        else {
          local_4 = local_4 % iVar2;
        }
      }
      iVar1 = *(int *)(param_1 + 0x70);
      iVar3 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        iVar5 = -1;
      }
      else {
        uVar7 = param_3;
        if (iVar1 <= (int)param_3) {
          uVar7 = (int)param_3 % iVar1;
        }
        iVar5 = uVar7 - *(int *)(param_1 + 0x78);
        if ((iVar5 < 0) && (iVar5 = iVar5 + iVar1, iVar5 < 0)) {
          if (iVar3 < 2) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar3 - -iVar5 % iVar3;
          }
        }
        else {
          iVar5 = iVar5 % iVar3;
        }
      }
      *(undefined4 *)((iVar2 * iVar5 + local_4) * 0x30 + *(int *)(param_1 + 0x8c)) = param_4;
    }
  }
  return;
}

