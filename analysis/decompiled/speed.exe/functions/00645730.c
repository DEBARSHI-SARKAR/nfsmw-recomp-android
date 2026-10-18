/* speed.exe 00645730 FUN_00645730; analysis pseudocode, not buildable source.
 * calls 0063ff30 FUN_0063ff30
 * calls 00634130 FUN_00634130
 */

uint __thiscall FUN_00645730(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint in_EAX;
  int *piVar4;
  uint uVar5;
  undefined1 local_11;
  int local_10;
  uint local_8;
  int local_4;
  
  uVar5 = in_EAX & 0xffffff00;
  local_11 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = 0;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0xc + local_10);
      if (iVar3 != 0) {
        iVar1 = iVar3 + 0x10;
        piVar2 = (int *)(iVar1 + *(int *)(iVar3 + 4) * 4);
        local_4 = param_2;
        piVar4 = (int *)FUN_0063ff30(iVar1,piVar2,&local_4,0);
        if ((piVar4 < piVar2) && (*piVar4 == param_2)) {
          uVar5 = (int)piVar4 - iVar1 >> 2;
        }
        else {
          uVar5 = 0xffffffff;
        }
        if (uVar5 < *(uint *)(iVar3 + 4)) {
          FUN_00634130(1,uVar5,param_3);
          local_11 = 1;
        }
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 0x40;
    } while (local_8 < *(uint *)(param_1 + 0x28));
    uVar5 = CONCAT31((int3)(local_8 >> 8),local_11);
  }
  return uVar5;
}

