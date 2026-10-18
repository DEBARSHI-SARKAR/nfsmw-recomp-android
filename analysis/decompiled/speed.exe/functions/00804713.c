/* speed.exe 00804713 FUN_00804713; analysis pseudocode, not buildable source.
 */

void FUN_00804713(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = *(uint *)(param_1 + 0x94);
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  local_14 = *(uint *)(param_1 + 0x90);
  *(int *)(param_1 + 0x18) = param_5;
  *(int *)(param_1 + 0x1c) = param_6;
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x20) = param_7;
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(int *)(&DAT_0090a6b8 + param_2 * 4) != 0) {
    uVar1 = (*DAT_009c6a84)(param_1,*(int *)(&DAT_0090a6b8 + param_2 * 4));
    param_6 = 0;
    do {
      if (param_6 == 0) {
        local_18 = *(uint *)(param_1 + 0x94);
        local_c = *(uint *)(param_1 + 0x90);
        iVar6 = *(int *)(param_1 + 0x78);
        local_8 = *(int *)(param_1 + 0x98);
        local_10 = 0;
LAB_00804823:
        iVar6 = iVar6 + *(int *)(param_1 + 0x10);
        local_14 = local_c;
      }
      else {
        if (param_6 == 1) {
          local_10 = *(int *)(param_1 + 0x84);
          iVar6 = *(int *)(param_1 + 0x7c);
          local_c = *(uint *)(param_1 + 0x90) >> 1;
          local_18 = *(uint *)(param_1 + 0x94) >> 1;
          local_8 = *(int *)(param_1 + 0x9c);
          goto LAB_00804823;
        }
        if (param_6 == 2) {
          local_10 = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x84);
          iVar6 = *(int *)(param_1 + 0x80);
          local_c = *(uint *)(param_1 + 0x90) >> 1;
          local_18 = *(uint *)(param_1 + 0x94) >> 1;
          local_8 = *(int *)(param_1 + 0x9c);
          goto LAB_00804823;
        }
      }
      bVar3 = (byte)*(undefined4 *)(param_1 + 0x20);
      if ((*(byte *)(*(int *)(param_1 + 0x1c) * local_10 + *(int *)(param_1 + 0x18)) & bVar3) != 0)
      {
        if ((*(byte *)((local_10 + 1) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) & bVar3
            ) == 0) {
          (*DAT_009c6ab8)(param_1,iVar6 + 6,local_8,uVar1);
        }
        if ((*(byte *)(param_1 + 0x20) &
            *(byte *)((local_c + local_10) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)))
            == 0) {
          (*DAT_009c6ad8)(param_1,local_8 * 8 + iVar6,local_8,uVar1);
        }
      }
      iVar4 = local_10 + 1;
      iVar2 = 1;
      if (1 < (int)(local_14 - 1)) {
        param_5 = local_c + iVar4;
        param_7 = local_14 - 2;
        param_3 = iVar6 + 0xe;
        do {
          if ((*(byte *)(param_1 + 0x20) &
              *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) {
            (*DAT_009c6ab8)(param_1,param_3 + -8,local_8,uVar1);
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)(((1 - local_c) + param_5) * *(int *)(param_1 + 0x1c) +
                         *(int *)(param_1 + 0x18))) == 0) {
              (*DAT_009c6ab8)(param_1,param_3,local_8,uVar1);
            }
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)(*(int *)(param_1 + 0x1c) * param_5 + *(int *)(param_1 + 0x18))) == 0) {
              (*DAT_009c6ad8)(param_1,local_8 * 8 + -6 + param_3,local_8,uVar1);
            }
          }
          param_3 = param_3 + 8;
          iVar4 = iVar4 + 1;
          param_5 = param_5 + 1;
          param_7 = param_7 + -1;
          iVar2 = local_14 - 1;
        } while (param_7 != 0);
      }
      if ((*(byte *)(param_1 + 0x20) &
          *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) {
        (*DAT_009c6ab8)(param_1,iVar2 * 8 + -2 + iVar6,local_8,uVar1);
        if ((*(byte *)(param_1 + 0x20) &
            *(byte *)((local_c + iVar4) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18))) == 0
           ) {
          (*DAT_009c6ad8)(param_1,iVar2 * 8 + local_8 * 8 + iVar6,local_8,uVar1);
        }
      }
      iVar6 = iVar6 + local_8 * 8;
      iVar4 = iVar4 + 1;
      if (1 < (int)(local_18 - 1)) {
        local_1c = local_18 - 2;
        do {
          if ((*(byte *)(param_1 + 0x20) &
              *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) {
            (*DAT_009c6ad8)(param_1,iVar6,local_8,uVar1);
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)((iVar4 + 1) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18))) == 0)
            {
              (*DAT_009c6ab8)(param_1,iVar6 + 6,local_8,uVar1);
            }
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)((local_c + iVar4) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)))
                == 0) {
              (*DAT_009c6ad8)(param_1,local_8 * 8 + iVar6,local_8,uVar1);
            }
          }
          iVar4 = iVar4 + 1;
          iVar2 = 1;
          if (1 < (int)(local_14 - 1)) {
            param_5 = local_c + iVar4;
            param_7 = local_14 - 2;
            param_3 = iVar6 + 0xe;
            do {
              if ((*(byte *)(param_1 + 0x20) &
                  *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) {
                (*DAT_009c6ab8)(param_1,param_3 + -8,local_8,uVar1);
                (*DAT_009c6ad8)(param_1,param_3 + -6,local_8,uVar1);
                if ((*(byte *)(param_1 + 0x20) &
                    *(byte *)(((1 - local_c) + param_5) * *(int *)(param_1 + 0x1c) +
                             *(int *)(param_1 + 0x18))) == 0) {
                  (*DAT_009c6ab8)(param_1,param_3,local_8,uVar1);
                }
                if ((*(byte *)(param_1 + 0x20) &
                    *(byte *)(*(int *)(param_1 + 0x1c) * param_5 + *(int *)(param_1 + 0x18))) == 0)
                {
                  (*DAT_009c6ad8)(param_1,local_8 * 8 + -6 + param_3,local_8,uVar1);
                }
              }
              param_3 = param_3 + 8;
              iVar4 = iVar4 + 1;
              param_5 = param_5 + 1;
              param_7 = param_7 + -1;
              iVar2 = local_14 - 1;
            } while (param_7 != 0);
          }
          if ((*(byte *)(param_1 + 0x20) &
              *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) {
            iVar2 = iVar2 * 8;
            (*DAT_009c6ab8)(param_1,iVar2 + iVar6 + -2,local_8,uVar1);
            (*DAT_009c6ad8)(param_1,iVar2 + iVar6,local_8,uVar1);
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)((local_c + iVar4) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)))
                == 0) {
              (*DAT_009c6ad8)(param_1,iVar2 + local_8 * 8 + iVar6,local_8,uVar1);
            }
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + local_8 * 8;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      if (((*(byte *)(param_1 + 0x20) &
           *(byte *)(*(int *)(param_1 + 0x1c) * iVar4 + *(int *)(param_1 + 0x18))) != 0) &&
         ((*DAT_009c6ad8)(param_1,iVar6,local_8,uVar1),
         (*(byte *)(param_1 + 0x20) &
         *(byte *)((iVar4 + 1) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18))) == 0)) {
        (*DAT_009c6ab8)(param_1,iVar6 + 6,local_8,uVar1);
      }
      iVar5 = iVar4 + 1;
      iVar2 = 1;
      if (1 < (int)(local_14 - 1)) {
        param_3 = iVar4 + 2;
        param_5 = local_14 - 2;
        param_2 = iVar6 + 0xe;
        do {
          if ((*(byte *)(param_1 + 0x20) &
              *(byte *)(*(int *)(param_1 + 0x1c) * iVar5 + *(int *)(param_1 + 0x18))) != 0) {
            (*DAT_009c6ab8)(param_1,param_2 + -8,local_8,uVar1);
            (*DAT_009c6ad8)(param_1,param_2 + -6,local_8,uVar1);
            if ((*(byte *)(param_1 + 0x20) &
                *(byte *)(*(int *)(param_1 + 0x1c) * param_3 + *(int *)(param_1 + 0x18))) == 0) {
              (*DAT_009c6ab8)(param_1,param_2,local_8,uVar1);
            }
          }
          param_2 = param_2 + 8;
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 1;
          param_5 = param_5 + -1;
          iVar2 = local_14 - 1;
        } while (param_5 != 0);
      }
      if ((*(byte *)(param_1 + 0x20) &
          *(byte *)(*(int *)(param_1 + 0x1c) * iVar5 + *(int *)(param_1 + 0x18))) != 0) {
        iVar2 = iVar6 + iVar2 * 8;
        (*DAT_009c6ab8)(param_1,iVar2 + -2,local_8,uVar1);
        (*DAT_009c6ad8)(param_1,iVar2,local_8,uVar1);
      }
      param_6 = param_6 + 1;
    } while (param_6 < 3);
  }
  return;
}

