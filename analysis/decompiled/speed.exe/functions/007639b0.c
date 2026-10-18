/* speed.exe 007639b0 FUN_007639b0; analysis pseudocode, not buildable source.
 * calls 00763960 FUN_00763960
 * calls 005c8140 FUN_005c8140
 * calls 005cf0d0 FUN_005cf0d0
 */

void __thiscall FUN_007639b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_4;
  
  iVar1 = param_2;
  iVar2 = FUN_005cf0d0(0x63690000);
  iVar3 = FUN_005cf0d0(0x636f0000);
  iVar4 = FUN_005c8140();
  if (iVar2 == iVar4 + ((*(uint *)(param_2 + 4) >> 5) + *(int *)(param_2 + 8)) * 0x10) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0xc);
    if ((*(byte *)(iVar2 + 4) & 2) != 0) {
      iVar4 = iVar4 + iVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 8);
  }
  iVar2 = FUN_005c8140();
  if (iVar3 == iVar2 + ((*(uint *)(param_2 + 4) >> 5) + *(int *)(param_2 + 8)) * 0x10) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0xc);
    if ((*(byte *)(iVar3 + 4) & 2) != 0) {
      iVar2 = iVar2 + iVar3;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 8);
  }
  local_4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    param_2 = 0;
    do {
      iVar2 = *(int *)(param_1 + 8) + param_2;
      if (param_3 == 0) {
        if (*(ushort *)(iVar2 + 0x1a) == 0xffffffff) {
          uVar5 = 0x63612020;
        }
        else {
          uVar5 = *(ushort *)(iVar2 + 0x1a) | 0x63610000;
        }
        iVar3 = FUN_005cf0d0(uVar5);
        iVar4 = FUN_005c8140();
        if (iVar3 == iVar4 + ((*(uint *)(iVar1 + 4) >> 5) + *(int *)(iVar1 + 8)) * 0x10) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar3 + 0xc);
          if ((*(byte *)(iVar3 + 4) & 2) != 0) {
            iVar4 = iVar4 + iVar3;
          }
        }
        *(int *)(iVar2 + 0x1c) = iVar4;
        if (iVar4 != 0) {
          FUN_00763960();
        }
      }
      else if (*(int *)(iVar2 + 0x1c) != 0) {
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + param_3;
      }
      local_4 = local_4 + 1;
      param_2 = param_2 + 0x40;
    } while (local_4 < *(uint *)(param_1 + 4));
  }
  return;
}

