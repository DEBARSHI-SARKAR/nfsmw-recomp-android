/* speed.exe 007be7d0 FUN_007be7d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005251a0 FUN_005251a0
 * calls 00588120 FUN_00588120
 * calls 007b9740 FUN_007b9740
 * calls 005881f0 FUN_005881f0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_007be7d0(int param_1)

{
  void **ppvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883834;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (0 < *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x4c)) {
    do {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = iVar2 + 1;
      uVar3 = FUN_00573140("CAR_ICON_%d",iVar2);
      uVar4 = FUN_005251a0(uVar4,uVar3);
      pvVar5 = _malloc(0x14);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00588120(uVar4);
      }
      local_4 = 0xffffffff;
      FUN_005881f0(uVar4);
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x4c));
  }
  ExceptionList = ppvVar1;
  *(undefined4 *)(param_1 + 0x54) = 0xb271b295;
  FUN_007b9740();
  (**(code **)(*(int *)(param_1 + 0xe0) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"ACCELERATION",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(*(int *)(param_1 + 0x124) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"TOPSPEED",0,0x3f800000,0,0,0,0x43200000);
  pvVar5 = (void *)0x0;
  (**(code **)(*(int *)(param_1 + 0x168) + 0x28))
            (*(undefined4 *)(param_1 + 0x10),"HANDLING",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  ExceptionList = pvVar5;
  return;
}

