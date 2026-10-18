/* speed.exe 00808cd4 FUN_00808cd4; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 00808a53 FUN_00808a53
 * calls 00806f24 FUN_00806f24
 * calls 00808c12 FUN_00808c12
 */

void FUN_00808cd4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  iVar4 = param_1 + 0x730;
  do {
    iVar1 = FUN_00806f24(param_1 + 0x150,0xae);
    if (iVar1 != 0) {
      iVar1 = FUN_00801332(param_1 + 0x150,4);
      iVar3 = 0;
      puVar2 = &DAT_008c5549 + (iVar1 + local_8) * 0x14;
      do {
        *(undefined *)(iVar4 + 10 + iVar3) = puVar2[-1];
        *(undefined *)(iVar4 + iVar3) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar3 < 10);
    }
    iVar1 = FUN_00806f24(param_1 + 0x150,0xfe);
    if (iVar1 != 0) {
      iVar1 = 0;
      do {
        iVar3 = FUN_00808c12(param_1);
        iVar3 = iVar3 + (uint)*(byte *)(iVar4 + 10 + iVar1);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        *(char *)(iVar4 + 10 + iVar1) = (char)iVar3;
        iVar3 = FUN_00808c12(param_1);
        iVar3 = iVar3 + (uint)*(byte *)(iVar4 + iVar1);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        *(char *)(iVar4 + iVar1) = (char)iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 10);
    }
    local_8 = local_8 + 0x10;
    iVar4 = iVar4 + 0x14;
  } while (local_8 < 0x30);
  FUN_00808a53(param_1);
  return;
}

