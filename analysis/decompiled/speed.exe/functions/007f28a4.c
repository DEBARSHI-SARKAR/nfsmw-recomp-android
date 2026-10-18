/* speed.exe 007f28a4 FUN_007f28a4; analysis pseudocode, not buildable source.
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f3432 FUN_007f3432
 * calls 007f33d6 FUN_007f33d6
 * calls 007ec298 FUN_007ec298
 * calls 007f3450 FUN_007f3450
 * calls 007f347a thunk_FUN_007ecd3d
 * calls 007f312b FUN_007f312b
 */

undefined4 __fastcall FUN_007f28a4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  uint auStack_128 [6];
  byte abStack_110 [224];
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint *local_20;
  undefined4 local_1c;
  int local_c;
  uint *local_8;
  
  FUN_007f33d6();
  piVar1 = *(int **)(param_1 + 0x468);
  if (piVar1 == (int *)0x0) {
    uVar4 = 5;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 100))(piVar1);
    piVar1 = *(int **)(param_1 + 0x468);
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
      while (iVar2 == -0x7ff8ffe2) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x468) + 0x1c))(*(int **)(param_1 + 0x468));
        FUN_007ec298(0);
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x110,&local_140);
      if (iVar2 != 0) {
        return 6;
      }
      local_c = *(int *)(*(int *)(param_1 + 0x464) + 0xb0);
      if (local_c != 0) {
        FUN_007f3432();
        FUN_007f0fe0(local_30,0,0x24);
        local_2c = param_1;
        local_1c = thunk_FUN_007ecd3d();
        if (*(int *)(param_1 + 0x4a0) == 0) {
          local_28 = 0;
          FUN_007f312b(local_30);
          *(int *)(param_1 + 0x4a0) = 1;
        }
        if (((local_140 != *(int *)(param_1 + 0x234)) || (local_13c != *(int *)(param_1 + 0x238)))
           || (local_138 != *(int *)(param_1 + 0x23c))) {
          local_20 = (uint *)0x0;
          *(int *)(param_1 + 0x234) = local_140;
          *(int *)(param_1 + 0x23c) = local_138;
          *(int *)(param_1 + 0x238) = local_13c;
          local_24 = 3;
          local_28 = 4;
          FUN_007f312b(local_30);
        }
        if (((local_134 != *(int *)(param_1 + 0x440)) || (local_130 != *(int *)(param_1 + 0x444)))
           || (local_12c != *(int *)(param_1 + 0x448))) {
          *(int *)(param_1 + 0x440) = local_134;
          *(int *)(param_1 + 0x444) = local_130;
          *(int *)(param_1 + 0x448) = local_12c;
          local_24 = 4;
          local_28 = 4;
          FUN_007f312b(local_30);
        }
        local_8 = (uint *)0x0;
        puVar5 = (uint *)(param_1 + 0x44c);
        do {
          if (auStack_128[(int)local_8] != *puVar5) {
            *puVar5 = auStack_128[(int)local_8];
            local_20 = local_8;
            local_24 = 5;
            local_28 = 4;
            FUN_007f312b(local_30);
          }
          local_8 = (uint *)((int)local_8 + 1);
          puVar5 = puVar5 + 1;
        } while (local_8 < (uint *)0x2);
        puVar5 = (uint *)0x0;
        if (*(int *)(param_1 + 0x220) != 0) {
          local_8 = (uint *)(param_1 + 0x454);
          do {
            if (auStack_128[(int)puVar5 + 2] != *local_8) {
              *local_8 = auStack_128[(int)puVar5 + 2];
              local_24 = 6;
              local_28 = 4;
              local_20 = puVar5;
              FUN_007f312b(local_30);
            }
            puVar5 = (uint *)((int)puVar5 + 1);
            local_8 = local_8 + 1;
          } while (puVar5 < *(uint **)(param_1 + 0x220));
        }
        puVar5 = (uint *)0x0;
        if (*(int *)(param_1 + 0x224) != 0) {
          local_8 = (uint *)(param_1 + 0x240);
          do {
            uVar3 = (uint)abStack_110[(int)puVar5];
            if (uVar3 != *local_8) {
              *local_8 = uVar3;
              local_28 = 3 - (uint)(uVar3 != 0);
              local_24 = 1;
              local_20 = puVar5;
              FUN_007f312b(local_30);
            }
            puVar5 = (uint *)((int)puVar5 + 1);
            local_8 = local_8 + 1;
          } while (puVar5 < *(uint **)(param_1 + 0x224));
        }
        FUN_007f3450();
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

