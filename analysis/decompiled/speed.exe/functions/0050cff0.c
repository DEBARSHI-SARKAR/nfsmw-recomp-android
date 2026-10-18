/* speed.exe 0050cff0 FUN_0050cff0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0050c7b0 FUN_0050c7b0
 * calls 00455fd0 FUN_00455fd0
 * calls 005094c0 FUN_005094c0
 * calls 00504000 FUN_00504000
 * calls 00503bc0 FUN_00503bc0
 * calls 004fd630 FUN_004fd630
 * calls 0045a430 FUN_0045a430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050cff0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_2c;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086e198;
  local_1c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x39c);
  ExceptionList = &local_1c;
  if (iVar5 != *(int *)(param_1 + 0x3a0)) {
    do {
      puVar1 = *(undefined4 **)(iVar5 + 4);
      if ((*(short *)(puVar1 + 2) != 0) && (*(short *)(puVar1 + 2) != 0xa28)) {
        uVar3 = FUN_00455fd0(0xaba86e60,*puVar1);
        FUN_004fd630(uVar3,0,0);
        local_50 = puVar1[0x10];
        local_14 = 0;
        local_48 = puVar1[0x12];
        local_4c = puVar1[0x11];
        cVar2 = FUN_00504000(&local_50,*(float *)(local_2c + 0x84) + _DAT_00894b64,1,0x3f0ccccd);
        if (cVar2 == '\0') {
          iVar4 = puVar1[3];
          if (iVar4 != 0) {
            FUN_005094c0();
            FUN_00463ca0(DAT_00916068,iVar4);
          }
        }
        else if ((((puVar1[3] == 0) && (DAT_008f86ec != '\0')) &&
                 (iVar4 = FUN_00455fd0(0xaba86e60,*puVar1), iVar4 != 0)) &&
                (iVar4 = FUN_0050c7b0(iVar4,0x8000000), iVar4 != 0)) {
          *(undefined4 **)(iVar4 + 0x60) = puVar1;
          *(undefined1 **)(iVar4 + 0x6c) = &LAB_004fdfd0;
          puVar1[3] = iVar4;
          FUN_00503bc0(puVar1 + 4);
          *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | 1;
        }
        local_14 = 0xffffffff;
        FUN_0045a430();
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != *(int *)(param_1 + 0x3a0));
  }
  ExceptionList = local_1c;
  return;
}

