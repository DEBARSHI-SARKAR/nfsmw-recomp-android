/* speed.exe 0079a220 FUN_0079a220; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 * calls 0083ffa0 FUN_0083ffa0
 * calls 0056e340 FUN_0056e340
 * calls 0085cf40 FUN_0085cf40
 * calls 0085cbb0 FUN_0085cbb0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460c70 FUN_00460c70
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls 00798bc0 FUN_00798bc0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079a220(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined1 local_40 [64];
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  FUN_00798bc0();
  if (DAT_00926064 == 0) {
    FUN_00796d30();
    iVar2 = FUN_00794f80();
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00794f80(0x73656c66);
      iVar2 = FUN_00840c60(*(undefined4 *)(iVar2 + 0x38));
    }
    local_88 = *(undefined4 *)(iVar2 + 0x20);
    local_84 = *(undefined4 *)(iVar2 + 0x220);
    iVar1 = iVar2 + 8;
    puVar4 = (undefined4 *)(iVar2 + 0x1e0);
    puVar5 = local_80;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    local_88 = DAT_009b417c;
    local_84 = DAT_009b417c;
    FUN_0083ffa0(&DAT_009b4ba0,&DAT_009b417c);
    puVar4 = &DAT_009b4ba0;
    puVar5 = local_80;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar1 = FUN_0056e340();
  }
  FUN_00460c70(local_40,iVar1);
  FUN_0085cf40(*param_1,0x74797065,1,0,0);
  FUN_0085cbb0(*param_1,&local_88,1,param_2);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

