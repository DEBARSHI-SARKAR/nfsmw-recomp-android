/* speed.exe 005e3ec0 FUN_005e3ec0; analysis pseudocode, not buildable source.
 * calls 00452790 FUN_00452790
 * calls 004528d0 FUN_004528d0
 * calls 00454890 FUN_00454890
 * calls 004527b0 FUN_004527b0
 * calls 00452820 FUN_00452820
 */

int __thiscall FUN_005e3ec0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  uint local_c;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_10 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x24);
      if (*(int *)(iVar1 + local_10) != 0) {
        uVar2 = FUN_00452790();
        iVar3 = FUN_00454890("Attrib::CollectionLoadData");
        uVar5 = 0;
        if (uVar2 != 0) {
          do {
            iVar4 = FUN_004527b0(uVar5);
            if (((iVar4 == iVar3) && (iVar4 = FUN_00452820(uVar5), iVar4 != 0)) &&
               (iVar4 = FUN_004528d0(iVar4), param_2 == iVar4)) {
              return iVar1 + local_10;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x40;
    } while (local_c < *(uint *)(param_1 + 0x20));
  }
  return 0;
}

