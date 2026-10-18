/* speed.exe 005add30 FUN_005add30; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005add30(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_c;
  uint local_8;
  
  local_c = *(uint *)(param_1 + 0x6c);
  if ((((local_c != 0) && (uVar1 = *(uint *)(param_1 + 0x70), uVar1 != 0)) &&
      (in_EAX = *(uint *)(param_1 + 100), in_EAX != 0)) &&
     (uVar4 = *(uint *)(param_1 + 0x60), uVar4 != 0)) {
    iVar6 = *(int *)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x74);
    if (uVar1 < in_EAX) {
      in_EAX = uVar1;
    }
    if (uVar4 <= local_c) {
      local_c = uVar4;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar1 = in_EAX;
      if (*(int *)(param_1 + 0x5c) != 0) {
        for (; iVar5 = iVar2, uVar4 = local_c, uVar1 != 0; uVar1 = uVar1 - 1) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            (**(code **)(**(int **)(param_1 + 0x5c) + 0x4c))(param_1,iVar5,iVar6);
            iVar3 = *(int *)(param_1 + 0x6c);
            iVar5 = iVar5 + 1;
            if (iVar5 < 0) {
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
          iVar5 = *(int *)(param_1 + 0x70);
          in_EAX = iVar6 + 1;
          if ((int)in_EAX < 0) {
            if (iVar5 < 2) {
              iVar6 = 0;
            }
            else {
              iVar6 = -in_EAX;
              in_EAX = iVar6 / iVar5;
              iVar6 = iVar5 - iVar6 % iVar5;
            }
          }
          else {
            iVar6 = (int)in_EAX % iVar5;
            in_EAX = (int)in_EAX / iVar5;
          }
        }
      }
    }
    else {
      iVar5 = iVar2;
      uVar1 = local_c;
      local_8 = in_EAX;
      if (in_EAX != 0) {
        do {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,iVar5,iVar6);
            iVar3 = *(int *)(param_1 + 0x6c);
            iVar5 = iVar5 + 1;
            if (iVar5 < 0) {
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
          iVar5 = *(int *)(param_1 + 0x70);
          uVar4 = iVar6 + 1;
          if ((int)uVar4 < 0) {
            if (iVar5 < 2) {
              iVar6 = 0;
            }
            else {
              iVar6 = -uVar4;
              uVar4 = iVar6 / iVar5;
              iVar6 = iVar5 - iVar6 % iVar5;
            }
          }
          else {
            iVar6 = (int)uVar4 % iVar5;
            uVar4 = (int)uVar4 / iVar5;
          }
          local_8 = local_8 - 1;
          iVar5 = iVar2;
          uVar1 = local_c;
        } while (local_8 != 0);
        return uVar4;
      }
    }
  }
  return in_EAX;
}

