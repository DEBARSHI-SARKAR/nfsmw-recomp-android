/* speed.exe 0052ac70 FUN_0052ac70; analysis pseudocode, not buildable source.
 * calls 0059bd30 FUN_0059bd30
 * calls 00628230 FUN_00628230
 * calls 005b8550 FUN_005b8550
 * calls 00593880 FUN_00593880
 * calls 00628cb0 FUN_00628cb0
 * calls 00634370 FUN_00634370
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 0051d330 FUN_0051d330
 * calls 00627bb0 FUN_00627bb0
 * calls 00593560 FUN_00593560
 */

void __fastcall FUN_0052ac70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ef78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x84);
  FUN_00593880();
  iVar5 = *(int *)(param_1 + 0xe4);
  FUN_00634370();
  iVar1 = *(int *)(param_1 + 0xe4);
  if (((iVar1 == 1) || (iVar1 == 3)) && (iVar7 = 0, (iVar1 != 1) != 0xffffffee)) {
    iVar5 = (-(uint)(iVar5 != 1) & 2) * 0xc;
    puVar6 = (undefined4 *)(param_1 + 0xf4);
    do {
      iVar1 = FUN_00628cb0(iVar7);
      puVar2 = (undefined4 *)(iVar1 + iVar5);
      puVar6[-3] = *puVar2;
      puVar6[-2] = puVar2[1];
      puVar6[-1] = puVar2[2];
      iVar1 = FUN_00628cb0(iVar7);
      puVar2 = (undefined4 *)(iVar1 + 0xc + iVar5);
      *puVar6 = *puVar2;
      puVar6[1] = puVar2[1];
      puVar6[2] = puVar2[2];
      pvVar3 = _malloc(0x120);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        uVar4 = FUN_00627bb0(iVar7);
        iVar1 = FUN_0051d330(uVar4);
      }
      local_4 = 0xffffffff;
      FUN_00628230(iVar1 + 0x18,*(undefined4 *)(param_1 + 0xe4),iVar7,1);
      FUN_0059bd30(iVar1);
      pvVar3 = _malloc(0x120);
      local_4 = 1;
      if (pvVar3 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        uVar4 = FUN_00627bb0(iVar7);
        iVar1 = FUN_0051d330(uVar4);
      }
      local_4 = 0xffffffff;
      FUN_00628230(iVar1 + 0x18,*(undefined4 *)(param_1 + 0xe4),iVar7,0);
      FUN_0059bd30(iVar1);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 6;
    } while (iVar7 < (int)((*(int *)(param_1 + 0xe4) != 1) + 0x12));
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xe4) == 1) {
    if ((((iVar5 != 0) && (iVar5 = FUN_00516af0(iVar5), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(0x9ccf9099), iVar5 != 0)) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x2400001, *(int *)(iVar5 + 0x18) == 5))
    {
      iVar1 = *(int *)(iVar5 + 100);
      iVar5 = *(int *)(iVar5 + 0x60);
      if (0 < iVar5) {
        do {
          FUN_00514c70(iVar1);
          iVar1 = *(int *)(iVar1 + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (((iVar5 != 0) && (iVar5 = FUN_00516af0(iVar5), iVar5 != 0)) &&
          ((iVar5 = FUN_005b8550(0x9ccf9099), iVar5 != 0 &&
           (((*(uint *)(iVar5 + 0x1c) & 0x40) == 0 &&
            (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x2400000,
            *(int *)(iVar5 + 0x18) == 5)))))) {
    uVar4 = *(undefined4 *)(iVar5 + 100);
    iVar5 = *(int *)(iVar5 + 0x60);
    if (0 < iVar5) {
      do {
        FUN_00514cc0(uVar4);
        uVar4 = *(undefined4 *)(extraout_EDX + 4);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00593560(0);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  ExceptionList = pvStack_c;
  return;
}

