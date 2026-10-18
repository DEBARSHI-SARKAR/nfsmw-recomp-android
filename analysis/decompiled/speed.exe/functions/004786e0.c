/* speed.exe 004786e0 FUN_004786e0; analysis pseudocode, not buildable source.
 * calls 0046e760 FUN_0046e760
 */

void __thiscall FUN_004786e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_0046e760(param_2,param_3);
  if (iVar2 == 0) {
    switch(param_2) {
    case 0:
      iVar2 = param_1[5];
      if (iVar2 < 0x100) {
        puVar1 = (undefined4 *)(*param_1 + iVar2 * 0x14);
        param_1[5] = iVar2 + 1;
        puVar1[1] = 0;
        *puVar1 = param_3;
        return;
      }
      break;
    case 1:
      iVar2 = param_1[6];
      if (iVar2 < 10) {
        puVar1 = (undefined4 *)(param_1[1] + iVar2 * 0x14);
        param_1[6] = iVar2 + 1;
        puVar1[1] = 1;
        *puVar1 = param_3;
        return;
      }
      break;
    case 2:
      iVar2 = param_1[7];
      if (iVar2 < 0x32) {
        puVar1 = (undefined4 *)(param_1[2] + iVar2 * 0x14);
        param_1[7] = iVar2 + 1;
        puVar1[1] = 2;
        *puVar1 = param_3;
        return;
      }
      break;
    case 3:
      iVar2 = param_1[8];
      if (iVar2 < 0x32) {
        puVar1 = (undefined4 *)(param_1[3] + iVar2 * 0x14);
        param_1[8] = iVar2 + 1;
        puVar1[1] = 3;
        *puVar1 = param_3;
      }
    }
  }
  return;
}

