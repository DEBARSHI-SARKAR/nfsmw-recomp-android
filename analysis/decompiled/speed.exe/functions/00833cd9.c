/* speed.exe 00833cd9 FUN_00833cd9; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 * calls 008349d8 FUN_008349d8
 * calls 00834ad8 FUN_00834ad8
 */

void FUN_00833cd9(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  int *local_18;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((DAT_009c2be8 != (code *)0x0) && (iVar2 = FUN_00831cd3(param_1,&local_18), iVar2 != 0)) {
    local_c = 0;
    iVar2 = local_18[1];
    uVar1 = *(undefined1 *)(*local_18 + 9);
    uVar6 = (uint)(*(byte *)(unaff_EBX + 2) >> 2);
    if (uVar6 != 0) {
      local_10 = 0;
      do {
        local_8 = 0;
        iVar4 = unaff_EBX + (uint)*(byte *)(unaff_EBX + 8 + local_c) * 4;
        iVar5 = (int)*(char *)(iVar4 + 4);
        if (0 < iVar5) {
          local_14 = (char *)(iVar4 + 0xd);
          do {
            if (*local_14 != -1) {
              uVar3 = FUN_00834ad8(param_2,*local_14);
              iVar4 = iVar2 * 0xa0 + local_10;
              iVar4 = FUN_008349d8(*(undefined4 *)
                                    (DAT_009c2c10 + 4 + *(short *)((int)&DAT_009c2c3c + iVar4) * 8),
                                   *(undefined2 *)((int)&DAT_009c2c40 + iVar4));
              if (iVar4 != 0) {
                (*DAT_009c2be8)(param_1,uVar3,1 << (*(byte *)(local_8 + iVar4) & 0x1f),uVar1);
              }
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 8;
          } while (local_8 < iVar5);
        }
        local_c = local_c + 1;
        local_10 = local_10 + 0xc;
      } while (local_c < (int)uVar6);
    }
  }
  return;
}

