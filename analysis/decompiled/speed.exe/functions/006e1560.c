/* speed.exe 006e1560 FUN_006e1560; analysis pseudocode, not buildable source.
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006e1520 FUN_006e1520
 * calls 006e1450 FUN_006e1450
 * calls 006e1390 FUN_006e1390
 * calls 006e13d0 FUN_006e13d0
 * calls 006e1410 FUN_006e1410
 */

void __thiscall FUN_006e1560(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x4470 + param_2 * 4) != 0) &&
      (*(int *)(param_1 + 0x2220 + param_2 * 4) == 0)) &&
     (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0)) {
    *(undefined4 *)(param_1 + 0x2220 + param_2 * 4) = 1;
    iVar1 = FUN_006ca5f0(param_2,0);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) {
        iVar1 = FUN_006ca5f0(param_2,0);
        if (iVar1 != 0) {
          FUN_006ca4d0(param_2,0,param_1 + 0x4470 + param_2 * 4);
        }
      }
      *(undefined4 *)(param_1 + 0x4938 + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,0);
    if (iVar1 != 0) {
      FUN_006e1390(param_2);
      *(undefined4 *)(param_1 + 0x493c + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,1);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) {
        iVar1 = FUN_006ca5f0(param_2,1);
        if (iVar1 != 0) {
          FUN_006ca4d0(param_2,1,param_1 + 0x4470 + param_2 * 4);
        }
      }
      *(undefined4 *)(param_1 + 0x4940 + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,1);
    if (iVar1 != 0) {
      FUN_006e13d0(param_2);
      *(undefined4 *)(param_1 + 0x494c + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,2);
    if (iVar1 != 0) {
      FUN_006e1410(param_2);
      *(undefined4 *)(param_1 + 0x4950 + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,2);
    if (iVar1 != 0) {
      FUN_006e1450(param_2);
      *(undefined4 *)(param_1 + 0x4954 + param_2 * 0x28) = 1;
    }
    iVar1 = FUN_006ca5f0(param_2,3);
    if (iVar1 != 0) {
      FUN_006e1520(param_2);
      *(undefined4 *)(param_1 + 0x4958 + param_2 * 0x28) = 1;
    }
  }
  return;
}

