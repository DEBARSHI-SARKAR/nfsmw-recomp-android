/* speed.exe 006dcda0 FUN_006dcda0; analysis pseudocode, not buildable source.
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006ca440 FUN_006ca440
 * calls 006d9610 FUN_006d9610
 * calls 006d9460 FUN_006d9460
 * calls 006ca380 FUN_006ca380
 * calls 006ca560 FUN_006ca560
 */

void __thiscall FUN_006dcda0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  if (0x96 < param_5) {
    param_5 = 0x96;
  }
  iVar1 = param_1 + 0x4470 + param_2 * 4;
  if ((((*(int *)(param_1 + 0x4470 + param_2 * 4) != 0) &&
       (*(int *)(param_1 + 0x4460 + param_2 * 4) == 0)) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    switch(param_3) {
    case 0:
      local_4 = &DAT_008c045c;
      break;
    case 1:
      local_4 = &DAT_008c046c;
      break;
    case 2:
      local_4 = &DAT_008c044c;
      break;
    case 3:
      local_4 = &DAT_008c043c;
      break;
    case 4:
      local_4 = &DAT_008c042c;
    }
    iVar2 = FUN_006ca5f0(param_2,3);
    if (iVar2 == 0) {
      if (*(int *)(param_2 * 0x20 + 0x4874 + param_1) == 0) {
        iVar2 = FUN_006d9460(param_2,3,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_4,0,0,
                             param_5 * 1000,0,0,0,0,0,local_4);
        if (-1 < iVar2) {
          iVar2 = param_1 + param_2 * 0xc;
          *(int *)(iVar2 + 0x4fb8) = param_3;
          *(undefined4 *)(param_1 + (param_2 * 3 + 0x13ef) * 4) = param_4;
          *(int *)(iVar2 + 0x4fc0) = param_5;
        }
      }
      else {
        iVar2 = FUN_006ca380(param_2,param_3,param_4,param_5);
        if (iVar2 == 0) {
          iVar2 = param_1 + param_2 * 0xc;
          if (param_3 == *(int *)(param_1 + 0x4fb8 + param_2 * 0xc)) {
            iVar3 = FUN_006d9610(param_2,3,0x12,0xffffffff,0,10000,0xffffffff,0,
                                 *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_4,0,0
                                 ,param_5 * 1000,0,0,0,0,0);
          }
          else {
            FUN_006ca560(param_2,3,iVar1);
            iVar3 = FUN_006d9460(param_2,3,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                                 *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_4,0,0
                                 ,param_5 * 1000,0,0,0,0,0,local_4);
          }
          if (-1 < iVar3) {
            *(int *)(iVar2 + 0x4fb8) = param_3;
            *(undefined4 *)(param_1 + (param_2 * 3 + 0x13ef) * 4) = param_4;
            *(int *)(iVar2 + 0x4fc0) = param_5;
          }
          FUN_006ca440(param_2,3,iVar1);
          return;
        }
      }
      FUN_006ca440(param_2,3,iVar1);
      return;
    }
    iVar2 = FUN_006ca380(param_2,param_3,param_4,param_5);
    if (iVar2 == 0) {
      iVar2 = param_1 + param_2 * 0xc;
      if (param_3 == *(int *)(iVar2 + 0x4fb8)) {
        iVar3 = FUN_006d9610(param_2,3,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_4,0,0,
                             param_5 * 1000,0,0,0,0,0);
      }
      else {
        FUN_006ca560(param_2,3,iVar1);
        iVar3 = FUN_006d9460(param_2,3,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,0,param_4,0,0,
                             param_5 * 1000,0,0,0,0,0,local_4);
        FUN_006ca440(param_2,3,iVar1);
      }
      if (-1 < iVar3) {
        *(int *)(iVar2 + 0x4fb8) = param_3;
        *(undefined4 *)(param_1 + (param_2 * 3 + 0x13ef) * 4) = param_4;
        *(int *)(iVar2 + 0x4fc0) = param_5;
        return;
      }
    }
  }
  return;
}

