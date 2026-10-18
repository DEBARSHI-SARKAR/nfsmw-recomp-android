/* speed.exe 00593f20 FUN_00593f20; analysis pseudocode, not buildable source.
 * calls 00747c00 FUN_00747c00
 * calls 00739c70 FUN_00739c70
 * calls 005816b0 FUN_005816b0
 * calls 0050de20 FUN_0050de20
 * calls 005910e0 FUN_005910e0
 * calls 007594a0 FUN_007594a0
 */

bool FUN_00593f20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_310 [784];
  
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
  if ((*(byte *)(param_2 + 4) < 0x4c) &&
     (param_1 = (uint)*(byte *)(param_2 + 4) * 0x198 + 4000 + param_1, param_1 != 0)) {
    switch(param_3) {
    case 0:
    case 1:
    case 3:
      return 0 < *(int *)(param_1 + 0x120);
    case 2:
      return 0 < *(int *)(param_1 + 0x11c);
    case 4:
      FUN_0050de20();
      FUN_005910e0(*param_2,0,local_310);
      FUN_007594a0();
      iVar1 = FUN_00739c70(0x2c);
      FUN_005816b0();
      iVar2 = FUN_00747c00((int)*(short *)(param_1 + 0x58));
      if ((iVar2 == 0) || (iVar2 == iVar1)) {
        iVar1 = FUN_00739c70(0x17);
        FUN_005816b0();
        iVar2 = FUN_00747c00((int)*(short *)(param_1 + 0x2e));
        if (iVar2 == 0) {
          return false;
        }
        if (iVar2 == iVar1) {
          return false;
        }
      }
      return true;
    case 5:
      return 0 < *(int *)(param_1 + 0x130);
    case 6:
      return 0 < *(int *)(param_1 + 300);
    }
  }
  return false;
}

