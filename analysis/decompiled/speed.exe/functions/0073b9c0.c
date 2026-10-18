/* speed.exe 0073b9c0 FUN_0073b9c0; analysis pseudocode, not buildable source.
 * calls 00501640 FUN_00501640
 * calls 006da9b0 FUN_006da9b0
 * calls 00444fe0 FUN_00444fe0
 * calls 0073b790 FUN_0073b790
 * calls 006bd920 FUN_006bd920
 * calls 00405e80 FUN_00405e80
 * calls 00502520 FUN_00502520
 * calls 00502810 FUN_00502810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0073b9c0(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_94;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [48];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_008809c8;
  local_1c = ExceptionList;
  if (param_5 == 0) {
    local_84 = 0;
    ExceptionList = &local_1c;
  }
  else {
    local_84 = param_5 + 0x70;
    ExceptionList = &local_1c;
    FUN_0073b790(0x3f800000);
  }
  uVar3 = DAT_00915f84;
  local_14 = 0;
  uVar1 = DAT_00915f84 + 0x40;
  if (uVar1 < DAT_00915f88) {
    bVar4 = DAT_00915f84 != 0;
    DAT_00915f84 = uVar1;
    if (bVar4) {
      FUN_00444fe0(uVar3,param_6);
      if ((param_4 & 0x800) != 0) {
        *(float *)(uVar3 + 0x28) = -*(float *)(uVar3 + 0x28);
      }
      local_94 = 0;
      if (*(char *)(param_1 + 0x2b) != '\0') {
        local_94 = FUN_00405e80(0x130);
        if (local_94 == 0) goto LAB_0073bbc4;
        iVar2 = *(int *)(param_3 + 0x40);
        local_70 = *(undefined4 *)(iVar2 + 0x40);
        local_6c = *(undefined4 *)(iVar2 + 0x44);
        local_68 = *(undefined4 *)(iVar2 + 0x48);
        local_64 = 0x3f800000;
        if (param_5 == 0) {
          FUN_00502520(local_94,&DAT_008f2e70,uVar3,iVar2,&local_70,param_3);
        }
        else {
          local_7c = *(undefined4 *)(param_5 + 0x74);
          local_78 = *(undefined4 *)(param_5 + 0x78);
          local_80 = *(undefined4 *)(param_5 + 0x70);
          local_74 = *(undefined4 *)(param_5 + 0x7c);
          FUN_006bd920(&local_80,uVar3,&local_80);
          FUN_00444fe0(local_60,uVar3);
          local_2c = local_7c;
          local_30 = local_80;
          local_28 = local_78;
          local_24 = local_74;
          FUN_00502810(&DAT_008f2f10,&local_70);
          FUN_00502520(local_94,&DAT_008f2f10,local_60,iVar2,&local_70,param_3);
          _DAT_008f2fa0 = 0;
        }
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_00501640(*(undefined4 *)(param_1 + 0x84),*(int *)(param_1 + 0x80));
      }
      FUN_006da9b0(param_2,uVar3,local_94,0,param_5);
    }
  }
  else {
    DAT_00915f98 = DAT_00915f98 + 0x40;
    DAT_00915f94 = 1;
  }
LAB_0073bbc4:
  if (local_84 != 0) {
    FUN_0073b790(0xbf800000);
  }
  ExceptionList = local_1c;
  return;
}

