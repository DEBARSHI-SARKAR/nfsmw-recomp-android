/* speed.exe 006dca60 FUN_006dca60; analysis pseudocode, not buildable source.
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006d9610 FUN_006d9610
 * calls 006ca440 FUN_006ca440
 * calls 006d9460 FUN_006d9460
 */

void __thiscall FUN_006dca60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x4470 + param_2 * 4;
  if ((((*(int *)(param_1 + 0x4470 + param_2 * 4) != 0) &&
       (*(int *)(param_1 + 0x4460 + param_2 * 4) == 0)) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    iVar1 = FUN_006ca5f0(param_2,1);
    if (iVar1 == 0) {
      if (*(int *)(param_2 * 0x20 + 0x486c + param_1) == 0) {
        iVar1 = FUN_006d9460(param_2,1,iVar2,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,
                             65000,0,0,0,0,0,&DAT_008c045c);
      }
      else {
        if (*(int *)(param_1 + 0x4fa0 + param_2 * 4) == param_3) {
          FUN_006ca440(param_2,1,iVar2);
          return;
        }
        iVar1 = FUN_006d9610(param_2,1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,0,
                             65000,0,0,0,0,0);
      }
      if (-1 < iVar1) {
        *(int *)(param_1 + 0x4fa0 + param_2 * 4) = param_3;
      }
      FUN_006ca440(param_2,1,iVar2);
    }
    else if ((*(int *)(param_1 + 0x4fa0 + param_2 * 4) != param_3) &&
            (iVar2 = FUN_006d9610(param_2,1,0x12,0xffffffff,0,10000,0xffffffff,0,
                                  *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_3,0,
                                  0,64999,0,0,0,0,0), -1 < iVar2)) {
      *(int *)(param_1 + 0x4fa0 + param_2 * 4) = param_3;
      return;
    }
  }
  return;
}

