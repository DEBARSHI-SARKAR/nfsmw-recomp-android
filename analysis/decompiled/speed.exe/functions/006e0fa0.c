/* speed.exe 006e0fa0 FUN_006e0fa0; analysis pseudocode, not buildable source.
 * calls 006ca4d0 FUN_006ca4d0
 * calls 006dcda0 FUN_006dcda0
 * calls 006ca5f0 FUN_006ca5f0
 * calls 006dcc00 FUN_006dcc00
 * calls 006dca60 FUN_006dca60
 * calls 006d8eb0 FUN_006d8eb0
 * calls 006d8680 FUN_006d8680
 * calls 006d8a60 FUN_006d8a60
 * calls 006d8aa0 FUN_006d8aa0
 */

void __thiscall FUN_006e0fa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  switch(param_3) {
  case 0:
    iVar2 = FUN_006ca5f0(param_2,0);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,0,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 1:
    goto LAB_006e0ff5;
  case 2:
    iVar2 = FUN_006ca5f0(param_2,1);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,1,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 3:
    iVar2 = FUN_006ca5f0(param_2,1);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,1,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 4:
LAB_006e0ff5:
    iVar2 = FUN_006ca5f0(param_2,0);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,0,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 5:
    iVar2 = FUN_006ca5f0(param_2,1);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,1,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 6:
    iVar2 = FUN_006ca5f0(param_2,2);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,2,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 7:
    iVar2 = FUN_006ca5f0(param_2,2);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,2,param_1 + 0x4470 + param_2 * 4);
    }
    if (*(int *)(param_1 + 0x4928 + param_2 * 4) != 0) {
      FUN_006d8aa0(param_2,*(undefined4 *)(param_1 + 0x4f80 + param_2 * 4));
      *(undefined4 *)(param_2 * 0x20 + 0x472c + param_1) = 1;
      *(undefined4 *)(param_1 + 0x4928 + param_2 * 4) = 0;
    }
    if (*(int *)(param_1 + 0x4930 + param_2 * 4) != 0) {
      FUN_006d8680(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4f58),
                   *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4),
                   *(undefined4 *)(param_1 + 0x4f60 + param_2 * 0xc));
      *(undefined4 *)(param_1 + 0x4930 + param_2 * 4) = 0;
      *(undefined4 *)(param_2 * 0x20 + 0x4728 + param_1) = 1;
      return;
    }
    break;
  case 8:
    iVar2 = FUN_006ca5f0(param_2,3);
    if (iVar2 != 0) {
      FUN_006ca4d0(param_2,3,param_1 + 0x4470 + param_2 * 4);
      return;
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x2220 + param_2 * 4) == 1) {
      iVar2 = param_1 + param_2 * 0x28;
      iVar1 = *(int *)(iVar2 + 0x4938);
      *(undefined4 *)(param_1 + 0x2220 + param_2 * 4) = 0;
      if (iVar1 == 1) {
        FUN_006d8680(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4f58),
                     *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4),
                     *(undefined4 *)(param_1 + 0x4f60 + param_2 * 0xc));
      }
      if (*(int *)(iVar2 + 0x493c) == 1) {
        FUN_006d8a60(param_2,*(undefined4 *)(param_1 + 0x4f70 + param_2 * 8),
                     *(undefined4 *)(param_1 + 0x4f74 + param_2 * 8));
      }
      if (*(int *)(iVar2 + 0x4940) == 1) {
        FUN_006d8aa0(param_2,*(undefined4 *)(param_1 + 0x4f80 + param_2 * 4));
      }
      if (*(int *)(iVar2 + 0x494c) == 1) {
        FUN_006dca60(param_2,*(undefined4 *)(param_1 + 0x4fa0 + param_2 * 4));
      }
      if (*(int *)(iVar2 + 0x4950) == 1) {
        FUN_006dcc00(param_2,*(undefined4 *)(param_1 + 0x4fa8 + param_2 * 4));
      }
      if (*(int *)(iVar2 + 0x4954) == 1) {
        FUN_006d8eb0(param_2,*(undefined4 *)(param_1 + 0x4fb0 + param_2 * 4));
      }
      if (*(int *)(iVar2 + 0x4958) == 1) {
        FUN_006dcda0(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4fb8),
                     *(undefined4 *)(param_1 + (param_2 * 3 + 0x13ef) * 4),
                     *(undefined4 *)(param_1 + 0x4fc0 + param_2 * 0xc));
      }
      *(undefined4 *)(param_1 + 0x4938 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x493c + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x4940 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x4944 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + (param_2 * 5 + 0x929) * 8) = 0;
      *(undefined4 *)(param_1 + 0x494c + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x4950 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x4954 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x4958 + param_2 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0x495c + param_2 * 0x28) = 0;
    }
  }
  return;
}

