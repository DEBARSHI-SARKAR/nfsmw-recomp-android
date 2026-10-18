/* speed.exe 004c4690 FUN_004c4690; analysis pseudocode, not buildable source.
 * calls 004bb220 FUN_004bb220
 * calls 004b25f0 FUN_004b25f0
 * calls 004b3030 FUN_004b3030
 * calls 007ec1bd FUN_007ec1bd
 * calls 004b2730 FUN_004b2730
 * calls 007ec1c8 FUN_007ec1c8
 */

void FUN_004c4690(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    FUN_007ec1bd();
    if (((int)(param_2 & 0xff) < param_1[9]) &&
       (((iVar2 = (param_2 & 0xff) * 0x128, iVar3 = iVar2 + param_1[8],
         param_2 == *(uint *)(iVar2 + param_1[8]) && (iVar2 = *(int *)(iVar3 + 4), iVar2 != 0)) &&
        (iVar2 != 4)))) {
      bVar1 = true;
      if (iVar2 == 1) {
        FUN_004b2730();
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 4;
        local_c = (int *)param_1[0x17];
        local_18 = local_c;
        if (iVar3 != param_1[0x1a]) {
          local_18 = *(int **)(iVar3 + 0x124);
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 1)) {
          local_14 = (int *)param_1[0x18];
          bVar1 = false;
        }
        else {
          local_14 = *(int **)(iVar2 + 0x124);
          bVar1 = false;
        }
      }
    }
    else {
      bVar1 = true;
    }
    FUN_007ec1c8();
    if ((!bVar1) && (local_8 = 0, 0 < param_1[0xd])) {
      local_10 = 0;
      do {
        iVar2 = param_1[0xc] + local_10;
        if (0 < *(int *)(param_1[0xc] + 8 + local_10)) {
          piVar5 = *(int **)(iVar2 + 0xc);
          if (local_18 < local_c) {
            if (piVar5 < local_c) goto joined_r0x004c47d3;
LAB_004c47d5:
            iVar3 = *(int *)(iVar2 + 4);
            piVar5 = local_18;
            while (piVar5 != local_14) {
              if (*piVar5 == -1) {
                piVar5 = (int *)param_1[0xf];
              }
              else {
                uVar6 = piVar5[1] & 0xffffff;
                if ((piVar5[1] & 0xff000000U) == iVar3 << 0x18) {
                  FUN_007ec1bd();
                  *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) - uVar6;
                  FUN_007ec1c8();
                  FUN_004b25f0(uVar6);
                  *piVar5 = -2;
                  piVar5[1] = uVar6;
                }
                piVar5 = (int *)((int)piVar5 + uVar6);
              }
            }
          }
          else {
            if (local_c <= piVar5) {
joined_r0x004c47d3:
              if (piVar5 < local_18) goto LAB_004c47d5;
            }
            if (local_14 < local_18) goto joined_r0x004c485b;
            if (local_18 <= piVar5) {
              do {
                if (local_14 <= piVar5) break;
                do {
                  uVar4 = FUN_004b3030(iVar2);
                  FUN_004bb220(iVar2,uVar4);
                  if (*(int *)(iVar2 + 8) < 1) goto LAB_004c488d;
                  piVar5 = *(int **)(iVar2 + 0xc);
                  if (local_18 <= local_14) {
                    if (piVar5 < local_18) goto LAB_004c488d;
                    break;
                  }
joined_r0x004c485b:
                } while (local_18 <= piVar5);
              } while( true );
            }
          }
        }
LAB_004c488d:
        local_8 = local_8 + 1;
        local_10 = local_10 + 0x10;
      } while (local_8 < param_1[0xd]);
    }
  }
  return;
}

