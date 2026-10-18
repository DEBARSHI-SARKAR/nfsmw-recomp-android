/* speed.exe 0085ca00 FUN_0085ca00; analysis pseudocode, not buildable source.
 * calls 0085c260 FUN_0085c260
 * calls 008646a0 FUN_008646a0
 * calls 0085c770 FUN_0085c770
 * calls 0085c510 FUN_0085c510
 * calls 008645d0 FUN_008645d0
 */

int FUN_0085ca00(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint local_8;
  int local_4;
  
  if (*(int *)(in_EAX + 0x170) != 0) {
    FUN_008645d0(*(undefined4 *)(in_EAX + 0x38));
    iVar1 = FUN_008646a0(*(undefined4 *)(in_EAX + 0x38),&local_8,&local_4);
    if (iVar1 != 0) {
      *(undefined4 *)(in_EAX + 0x170) = 0;
    }
  }
  local_8 = *(uint *)(in_EAX + 0x170);
  local_4 = 0;
  if (0 < *(int *)(in_EAX + 400)) {
    iVar1 = in_EAX + 0x198;
    iVar3 = 0;
    do {
      if (iVar3 != *(int *)(in_EAX + 0xd4)) {
        iVar2 = FUN_0085c260(iVar1,iVar3);
        local_4 = local_4 + iVar2;
        if ((*(int *)(in_EAX + 0x18c) != 1) && (*(int *)(in_EAX + 0x178) == 0)) break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xb0;
    } while (iVar3 < *(int *)(in_EAX + 400));
  }
  iVar1 = 0;
  if (0 < *(int *)(in_EAX + 400)) {
    do {
      if (iVar1 != *(int *)(in_EAX + 0xd4)) {
        iVar3 = FUN_0085c510(iVar1);
        local_4 = local_4 + iVar3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_EAX + 400));
  }
  iVar1 = 0;
  if (0 < *(int *)(in_EAX + 400)) {
    piVar4 = (int *)(in_EAX + 0x220);
    do {
      if (iVar1 != *(int *)(in_EAX + 0xd4)) {
        if ((*piVar4 == 2) && (local_8 == 0)) {
          FUN_0085c770(iVar1,0);
        }
        local_8 = local_8 | *(ushort *)((int)piVar4 + 6);
        if ((*(int *)(in_EAX + 0x18c) != 1) && (*(int *)(in_EAX + 0x178) == 0)) break;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 0x2c;
    } while (iVar1 < *(int *)(in_EAX + 400));
  }
  iVar1 = 0;
  if (0 < *(int *)(in_EAX + 400)) {
    piVar4 = (int *)(in_EAX + 0x228);
    do {
      if (iVar1 != *(int *)(in_EAX + 0xd4)) {
        if ((*piVar4 == 2) && (local_8 == 0)) {
          FUN_0085c770(iVar1,1);
        }
        local_8 = local_8 | *(ushort *)((int)piVar4 + 6);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 0x2c;
    } while (iVar1 < *(int *)(in_EAX + 400));
  }
  return local_4;
}

