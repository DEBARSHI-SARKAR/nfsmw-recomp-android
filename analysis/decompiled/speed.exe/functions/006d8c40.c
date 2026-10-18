/* speed.exe 006d8c40 FUN_006d8c40; analysis pseudocode, not buildable source.
 * calls 006ca940 FUN_006ca940
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006ca440 FUN_006ca440
 * calls 007cb9d0 __ftime
 * calls 006ca7b0 FUN_006ca7b0
 */

void __thiscall FUN_006d8c40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_c;
  ushort local_8;
  
  __ftime(&local_c);
  iVar2 = *(int *)(param_1 + 0x4f38 + param_2 * 4);
  if (((local_c == iVar2) &&
      ((int)((uint)local_8 - *(int *)(param_1 + 0x4f40 + param_2 * 4)) < 0x97)) ||
     ((local_c - iVar2 == 1 &&
      ((int)(((uint)local_8 - *(int *)(param_1 + 0x4f40 + param_2 * 4)) + 1000) < 0x97)))) {
    param_3 = param_3 + *(int *)(param_1 + 0x4f50 + param_2 * 4);
  }
  piVar1 = (int *)(param_1 + 0x4470 + param_2 * 4);
  *(uint *)(param_1 + 0x4f40 + param_2 * 4) = (uint)local_8;
  *(int *)(param_1 + 0x4f38 + param_2 * 4) = local_c;
  *(int *)(param_1 + 0x4f50 + param_2 * 4) = param_3;
  if ((*piVar1 != 0) && (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    iVar2 = FUN_006ca5f0(param_2,1);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x4f88 + param_2 * 8) != param_3) {
        iVar2 = FUN_006ca940(param_2,1,0x12,150000,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0
                             ,0);
        if (-1 < iVar2) {
          *(int *)(param_1 + 0x4f88 + param_2 * 8) = param_3;
        }
        FUN_006ca440(param_2,1,piVar1);
        return;
      }
      FUN_006ca440(param_2,1,piVar1);
      return;
    }
    if (*(int *)(param_2 * 0x20 + 0x47ec + param_1) == 0) {
      iVar2 = FUN_006ca7b0(param_2,1,piVar1,0x12,150000,0,10000,0xffffffff,0,
                           *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0,0
                           ,&DAT_008c048c);
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x4f88 + param_2 * 8) = param_3;
      }
      FUN_006ca440(param_2,1,piVar1);
      return;
    }
    if (*(int *)(param_1 + 0x4f88 + param_2 * 8) != param_3) {
      iVar2 = FUN_006ca940(param_2,1,0x12,150000,0,10000,0xffffffff,0,
                           *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0,0
                          );
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x4f88 + param_2 * 8) = param_3;
      }
      if (*(int *)(param_1 + 0x4460 + param_2 * 4) != 0) {
        FUN_006ca4d0(param_2,1,piVar1);
      }
    }
    FUN_006ca440(param_2,1,piVar1);
  }
  return;
}

