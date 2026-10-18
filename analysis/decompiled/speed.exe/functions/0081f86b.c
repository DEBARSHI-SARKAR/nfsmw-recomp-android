/* speed.exe 0081f86b FUN_0081f86b; analysis pseudocode, not buildable source.
 * calls 0081f86b FUN_0081f86b
 * calls 00822240 FUN_00822240
 * calls 00823e83 FUN_00823e83
 * calls 00823e2d FUN_00823e2d
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081f39d FUN_0081f39d
 * calls 00823e53 FUN_00823e53
 */

undefined4 FUN_0081f86b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_dc [204];
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  if (param_1 == -1) {
    iVar2 = 0;
    if (DAT_009c2044 != 0) {
      do {
        FUN_0081f86b(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)DAT_009c2044);
    }
  }
  else {
    iVar2 = FUN_00823e53(param_1);
    if (iVar2 != 0) {
      return 0xfffffff8;
    }
    FUN_0081bccb();
    iVar3 = param_1 * 8;
    iVar2 = *(int *)(iVar3 + DAT_009c21f8);
    local_8 = 0;
    if (0 < DAT_009c218c) {
      local_10 = 0;
      do {
        if (*(short *)(DAT_009c21f4 + local_10 + 0x12) == param_1) {
          FUN_0081f39d(*(undefined4 *)(DAT_009c21f4 + local_10));
        }
        local_8 = local_8 + 1;
        local_10 = local_10 + 0x90;
      } while (local_8 < DAT_009c218c);
    }
    iVar1 = 0;
    if (*(short *)(iVar2 + 6) != 0) {
      do {
        local_c = FUN_00823e2d(iVar2,iVar1);
        if (local_c != 0) {
          local_c = local_c + 4;
          do {
            local_8 = FUN_00823e83(&local_c,local_dc);
            FUN_00822240(local_dc,0xffffffff,2);
          } while (local_8 != 0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(ushort *)(iVar2 + 6));
    }
    *(undefined4 *)(iVar3 + DAT_009c21f8) = 0;
    *(undefined1 *)(iVar3 + 4 + DAT_009c21f8) = 0;
    FUN_0081bcd9();
  }
  return 0;
}

