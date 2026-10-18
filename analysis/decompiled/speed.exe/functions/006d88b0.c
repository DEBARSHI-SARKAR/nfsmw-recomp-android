/* speed.exe 006d88b0 FUN_006d88b0; analysis pseudocode, not buildable source.
 * calls 006ca940 FUN_006ca940
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006ca440 FUN_006ca440
 * calls 006ca7b0 FUN_006ca7b0
 */

void __thiscall FUN_006d88b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x4470 + param_2 * 4;
  if ((((*(int *)(param_1 + 0x4470 + param_2 * 4) != 0) &&
       (*(int *)(param_1 + 0x4468 + param_2 * 4) == 0)) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    iVar2 = FUN_006ca5f0(param_2,0);
    if (iVar2 == 0) {
      if (*(int *)(param_2 * 0x20 + 0x47e8 + param_1) == 0) {
        iVar2 = FUN_006ca7b0(param_2,0,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0
                             ,0,&DAT_008c048c);
      }
      else {
        if (*(int *)(param_1 + 0x4f70 + param_2 * 8) == param_3) {
          FUN_006ca440(param_2,0,iVar1);
          return;
        }
        iVar2 = FUN_006ca940(param_2,0,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0
                             ,0);
      }
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x4f70 + param_2 * 8) = param_3;
      }
      FUN_006ca440(param_2,0,iVar1);
    }
    else if (*(int *)(param_1 + 0x4f70 + param_2 * 8) != param_3) {
      iVar2 = FUN_006ca940(param_2,0,0x12,0xffffffff,0,10000,0xffffffff,0,
                           *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,0,0,0
                          );
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x4f70 + param_2 * 8) = param_3;
      }
      if (*(int *)(param_1 + 0x4460 + param_2 * 4) != 0) {
        FUN_006ca440(param_2,0,iVar1);
        FUN_006ca440(param_2,0,iVar1);
        return;
      }
    }
  }
  return;
}

