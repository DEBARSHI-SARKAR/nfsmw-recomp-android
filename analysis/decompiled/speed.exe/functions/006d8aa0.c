/* speed.exe 006d8aa0 FUN_006d8aa0; analysis pseudocode, not buildable source.
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006cac50 FUN_006cac50
 * calls 006ca440 FUN_006ca440
 * calls 006caa90 FUN_006caa90
 */

void __thiscall FUN_006d8aa0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006ca5f0(param_2,2);
  if ((((iVar1 == 0) &&
       (iVar1 = param_1 + 0x4470 + param_2 * 4, *(int *)(param_1 + 0x4470 + param_2 * 4) != 0)) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    iVar2 = FUN_006ca5f0(param_2,1);
    if (iVar2 == 0) {
      if (*(int *)(param_2 * 0x20 + 0x476c + param_1) == 0) {
        iVar2 = FUN_006caa90(param_2,1,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,0,param_3,
                             param_3,10000,10000,0,0,&DAT_008c040c);
      }
      else {
        if (*(int *)(param_1 + 0x4f80 + param_2 * 4) == param_3) {
          FUN_006ca440(param_2,1,iVar1);
          return;
        }
        iVar2 = FUN_006cac50(param_2,1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,0,param_3,
                             param_3,10000,10000,0,0);
      }
      if (-1 < iVar2) {
        *(int *)(param_1 + 0x4f80 + param_2 * 4) = param_3;
      }
      FUN_006ca440(param_2,1,iVar1);
    }
    else if ((*(int *)(param_1 + 0x4f80 + param_2 * 4) != param_3) &&
            (iVar1 = FUN_006cac50(param_2,1,0x12,0xffffffff,0,10000,0xffffffff,0,
                                  *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,0,param_3,
                                  param_3,10000,10000,0,0), -1 < iVar1)) {
      *(int *)(param_1 + 0x4f80 + param_2 * 4) = param_3;
      return;
    }
  }
  return;
}

