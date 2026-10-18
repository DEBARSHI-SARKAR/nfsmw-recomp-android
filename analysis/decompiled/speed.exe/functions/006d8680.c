/* speed.exe 006d8680 FUN_006d8680; analysis pseudocode, not buildable source.
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006cac50 FUN_006cac50
 * calls 006ca440 FUN_006ca440
 * calls 006ca230 FUN_006ca230
 * calls 006caa90 FUN_006caa90
 */

void __thiscall
FUN_006d8680(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_006ca5f0(param_2,2);
  if ((((iVar1 == 0) &&
       (iVar1 = param_1 + 0x4470 + param_2 * 4, *(int *)(param_1 + 0x4470 + param_2 * 4) != 0)) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    iVar2 = FUN_006ca5f0(param_2,0);
    if (iVar2 == 0) {
      if (*(int *)(param_2 * 0x20 + 0x4768 + param_1) == 0) {
        iVar2 = FUN_006caa90(param_2,0,iVar1,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,1,param_3,param_5
                             ,param_5,param_4,param_4,0,0,&DAT_008c041c);
        if (-1 < iVar2) {
          iVar2 = param_1 + param_2 * 0xc;
          *(undefined4 *)(iVar2 + 0x4f58) = param_3;
          *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4) = param_4;
          *(undefined4 *)(iVar2 + 0x4f60) = param_5;
        }
      }
      else {
        iVar2 = FUN_006ca230(param_2,param_3,param_4,param_5);
        if (iVar2 == 0) {
          iVar2 = FUN_006cac50(param_2,0,0x12,0xffffffff,0,10000,0xffffffff,0,
                               *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,1,param_3,
                               param_5,param_5,param_4,param_4,0,0);
          if (-1 < iVar2) {
            iVar2 = param_1 + param_2 * 0xc;
            *(undefined4 *)(iVar2 + 0x4f58) = param_3;
            *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4) = param_4;
            *(undefined4 *)(iVar2 + 0x4f60) = param_5;
          }
          FUN_006ca440(param_2,0,iVar1);
          return;
        }
      }
      FUN_006ca440(param_2,0,iVar1);
      return;
    }
    iVar1 = FUN_006ca230(param_2,param_3,param_4,param_5);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_006cac50(param_2,0,0x12,0xffffffff,0,10000,0xffffffff,0,
                             *(undefined4 *)(param_1 + 0x4478 + param_2 * 4),0,4,1,1,param_3,param_5
                             ,param_5,param_4,param_4,0,0), -1 < iVar1)) {
      iVar1 = param_1 + param_2 * 0xc;
      *(undefined4 *)(iVar1 + 0x4f58) = param_3;
      *(undefined4 *)(iVar1 + 0x4f60) = param_5;
      *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4) = param_4;
      return;
    }
  }
  return;
}

