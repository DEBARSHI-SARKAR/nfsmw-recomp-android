/* speed.exe 008222a1 FUN_008222a1; analysis pseudocode, not buildable source.
 * calls 00822240 FUN_00822240
 * calls 00823e83 FUN_00823e83
 * calls 00823e2d FUN_00823e2d
 * calls 00823e0b FUN_00823e0b
 */

undefined4 FUN_008222a1(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_dc [204];
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_009c2188 == '\0') {
    uVar3 = 0xfffffff6;
  }
  else {
    DAT_009c21e4 = FUN_0081f86b;
    iVar2 = FUN_00823e0b();
    *param_1 = iVar2;
    piVar1 = (int *)(DAT_009c21f8 + iVar2 * 8);
    *piVar1 = param_2;
    *(undefined1 *)(piVar1 + 1) = 1;
    if (('\0' < DAT_009c218e) && (local_8 = 0, *(short *)(param_2 + 6) != 0)) {
      do {
        local_c = FUN_00823e2d(param_2,local_8);
        if (local_c != 0) {
          local_c = local_c + 4;
          do {
            local_10 = FUN_00823e83(&local_c,local_dc);
            FUN_00822240(local_dc,0xffffffff,0);
          } while (local_10 != 0);
        }
        local_8 = local_8 + 1;
      } while (local_8 < (int)(uint)*(ushort *)(param_2 + 6));
    }
    uVar3 = 8;
    *(undefined1 *)(piVar1 + 1) = 0;
  }
  return uVar3;
}

