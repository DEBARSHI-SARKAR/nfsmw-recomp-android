/* speed.exe 006455e0 FUN_006455e0; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 * calls 0063ff30 FUN_0063ff30
 */

void __thiscall FUN_006455e0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    local_10 = 0;
    local_8 = param_1;
    do {
      iVar6 = *(int *)(param_1 + 0x24) + local_10;
      if (*(int *)(*(int *)(param_1 + 0x24) + 4 + local_10) != 0) {
        if (*(int *)(iVar6 + 0xc) != 0) {
          uVar3 = 0;
          if (DAT_009203a4 != 0) {
            do {
              if ((&DAT_0091e148)[uVar3] == iVar6) goto LAB_00645641;
              uVar3 = uVar3 + 1;
            } while (uVar3 < DAT_009203a4);
          }
          uVar3 = 0xffffffff;
LAB_00645641:
          FUN_00645bc0(DAT_0092040c,uVar3,param_2,1,0);
        }
        iVar2 = *(int *)(iVar6 + 4);
        local_c = param_3;
        iVar5 = iVar2 + 0xc;
        piVar1 = (int *)(iVar5 + *(int *)(iVar2 + 8) * 4);
        piVar4 = (int *)FUN_0063ff30(iVar5,piVar1,&local_c,0);
        if ((piVar4 < piVar1) && (*piVar4 == param_3)) {
          iVar5 = *(int *)(iVar2 + 0xc + (((int)piVar4 - iVar5 >> 2) + *(int *)(iVar2 + 8)) * 4);
        }
        else {
          iVar5 = 0;
        }
        *(int *)(iVar6 + 8) = iVar5;
        if (iVar5 == 0) {
          local_c = *(int *)(iVar2 + 4);
          iVar5 = iVar2 + 0xc;
          piVar1 = (int *)(iVar5 + *(int *)(iVar2 + 8) * 4);
          piVar4 = (int *)FUN_0063ff30(iVar5,piVar1,&local_c,0);
          param_1 = local_8;
          if ((piVar4 < piVar1) && (*piVar4 == local_c)) {
            *(undefined4 *)(iVar6 + 8) =
                 *(undefined4 *)
                  (iVar2 + 0xc + (((int)piVar4 - iVar5 >> 2) + *(int *)(iVar2 + 8)) * 4);
            *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar2 + 4);
          }
          else {
            *(undefined4 *)(iVar6 + 8) = 0;
            *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar2 + 4);
          }
        }
        else {
          *(int *)(iVar6 + 0x20) = param_3;
          param_1 = local_8;
        }
      }
      local_4 = local_4 + 1;
      local_10 = local_10 + 0x40;
    } while (local_4 < *(uint *)(param_1 + 0x28));
  }
  return;
}

