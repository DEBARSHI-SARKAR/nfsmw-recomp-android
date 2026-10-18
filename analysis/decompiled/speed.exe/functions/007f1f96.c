/* speed.exe 007f1f96 FUN_007f1f96; analysis pseudocode, not buildable source.
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f3432 FUN_007f3432
 * calls 007f33d6 FUN_007f33d6
 * calls 007f3450 FUN_007f3450
 * calls 007f347a thunk_FUN_007ecd3d
 * calls 007f312b FUN_007f312b
 */

undefined4 __fastcall FUN_007f1f96(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_3c [4];
  int *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  int local_10;
  char local_c [8];
  
  FUN_007f33d6();
  iVar5 = 0;
  if (param_1[0x11a] == 0) {
    uVar4 = 5;
  }
  else {
    FUN_007f0fe0(&local_18,0,0x14);
    iVar3 = (**(code **)(*(int *)param_1[0x11a] + 0x24))((int *)param_1[0x11a],0x14,&local_18);
    if (iVar3 == 0) {
      if (*(int *)(param_1[0x119] + 0xb0) != 0) {
        FUN_007f3432();
        FUN_007f0fe0(local_3c,0,0x24);
        local_38 = param_1;
        local_28 = thunk_FUN_007ecd3d();
        if (((local_18 != 0) || (local_14 != 0)) || (local_10 != 0)) {
          param_1[0x8d] = local_18;
          param_1[0x8f] = local_10;
          param_1[0x8e] = local_14;
          local_30 = 2;
          local_34 = 4;
          FUN_007f312b(local_3c);
        }
        do {
          cVar2 = local_c[iVar5];
          pcVar1 = (char *)((int)param_1 + iVar5 + 0x240);
          if (cVar2 != *pcVar1) {
            *pcVar1 = cVar2;
            local_30 = 1;
            local_34 = 3 - (uint)(cVar2 != '\0');
            local_2c = iVar5;
            FUN_007f312b(local_3c);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        FUN_007f3450();
      }
    }
    else {
      (**(code **)(*param_1 + 8))();
    }
    uVar4 = 0;
  }
  return uVar4;
}

