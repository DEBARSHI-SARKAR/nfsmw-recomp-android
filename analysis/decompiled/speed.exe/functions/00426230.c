/* speed.exe 00426230 FUN_00426230; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 00403b70 FUN_00403b70
 * calls 004253c0 FUN_004253c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00426230(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  uint local_20;
  undefined1 local_c [8];
  uint local_4;
  
  uVar1 = FUN_00403b70();
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 10;
  if (uVar1 < 0xb) {
    uVar3 = uVar1;
  }
  local_24 = 0;
  local_20 = 0;
  if (uVar3 != 0) {
    do {
      if (local_24 != 0) {
        return local_24;
      }
      uVar1 = *(uint *)(param_1 + 0x60) % uVar3;
      *(uint *)(param_1 + 0x60) = uVar1;
      iVar2 = FUN_00454810(0x94e3c795,uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_006269b0(0x18);
      }
      if ((*(float *)(iVar2 + 0xc) < *(float *)(param_1 + 100 + *(int *)(param_1 + 0x60) * 4)) &&
         (_DAT_00890968 < *(float *)(iVar2 + 0xc))) {
        FUN_004253c0(local_c,**(undefined4 **)(param_1 + 0x94),*(undefined4 **)(param_1 + 0x94),
                     *(undefined4 *)(iVar2 + 4),1,0);
        if ((local_4 < *(uint *)(iVar2 + 0x10)) || (*(uint *)(iVar2 + 0x10) == 0)) {
          if (*(int *)(iVar2 + 0x14) != 0) {
            uVar1 = (uint)(((*(int *)(param_1 + 0x98) - DAT_0092cd24) + 0x14) *
                          *(int *)(iVar2 + 0x14)) / 100;
            if (uVar1 < 2) {
              uVar1 = 1;
            }
            if (uVar1 <= local_4) goto LAB_00426355;
          }
          local_24 = *(int *)(iVar2 + 4);
        }
      }
LAB_00426355:
      local_20 = local_20 + 1;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    } while (local_20 < uVar3);
  }
  return local_24;
}

