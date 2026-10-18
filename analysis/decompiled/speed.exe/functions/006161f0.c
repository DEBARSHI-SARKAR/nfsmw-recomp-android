/* speed.exe 006161f0 FUN_006161f0; analysis pseudocode, not buildable source.
 * calls 00614ea0 FUN_00614ea0
 * calls 00614c50 FUN_00614c50
 */

void FUN_006161f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar5 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(iVar1 + 8);
    piVar6 = (int *)(iVar4 + -8);
    if (piVar6 == (int *)0x0) {
      local_c = 0;
    }
    else if (*piVar6 == 4) {
      local_c = *(uint *)(*(int *)(iVar4 + -4) + 0xc);
    }
    else {
      iVar2 = FUN_00614c50(iVar1,piVar6);
      if (iVar2 == 0) {
        local_c = 0;
      }
      else {
        local_c = *(uint *)(*(int *)(iVar4 + -4) + 0xc);
      }
    }
    local_4 = -0x10;
    local_8 = -9999;
    iVar4 = -0x13878;
    do {
      if (iVar4 < -0x13888) {
        piVar6 = (int *)(*(int *)(iVar1 + 0xc) + -8 + local_4);
        if (piVar6 < *(int **)(iVar1 + 8)) goto LAB_00616320;
LAB_0061627b:
        uVar3 = 0;
      }
      else {
        if (iVar4 < -8) {
          piVar6 = (int *)(*(int *)(iVar1 + 8) + local_4);
        }
        else if (iVar4 == 0) {
          piVar6 = (int *)(iVar1 + 0x40);
        }
        else if (iVar4 == -8) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x10) + 0x2c);
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + -4);
          if ((int)(uint)*(byte *)(iVar2 + 7) < local_8) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)(iVar4 + 8 + iVar2);
          }
        }
LAB_00616320:
        if (piVar6 == (int *)0x0) goto LAB_0061627b;
        if (*piVar6 == 4) {
          uVar3 = *(uint *)(piVar6[1] + 0xc);
        }
        else {
          iVar2 = FUN_00614c50(iVar1,piVar6);
          if (iVar2 == 0) goto LAB_0061627b;
          uVar3 = *(uint *)(piVar6[1] + 0xc);
        }
      }
      if (((*(int *)(param_1 + 4) - iVar5) + 1 < 10) && (local_c <= uVar3)) break;
      local_c = local_c + uVar3;
      local_4 = local_4 + -8;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 8;
      local_8 = local_8 + 1;
    } while (iVar5 < *(int *)(param_1 + 4));
    FUN_00614ea0(iVar1,iVar5);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (1 - iVar5);
  }
  return;
}

