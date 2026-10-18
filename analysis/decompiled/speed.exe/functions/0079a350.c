/* speed.exe 0079a350 FUN_0079a350; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 * calls 0083ffa0 FUN_0083ffa0
 * calls 0056e340 FUN_0056e340
 * calls 0085cf40 FUN_0085cf40
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085cc30 FUN_0085cc30
 * calls 00460c70 FUN_00460c70
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls 00798bc0 FUN_00798bc0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079a350(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_118 [34];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [16];
  undefined1 local_48 [68];
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  FUN_00798bc0();
  puVar4 = local_118;
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
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
    local_90 = *(undefined4 *)(iVar2 + 0x20);
    local_8c = *(undefined4 *)(iVar2 + 0x220);
    iVar1 = iVar2 + 8;
    puVar4 = (undefined4 *)(iVar2 + 0x1e0);
    puVar5 = local_88;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    local_90 = DAT_009b417c;
    local_8c = DAT_009b417c;
    FUN_0083ffa0(&DAT_009b4ba0,&DAT_009b417c);
    puVar4 = &DAT_009b4ba0;
    puVar5 = local_88;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar1 = FUN_0056e340();
  }
  FUN_00460c70(local_48,iVar1);
  FUN_0085cf40(*param_1,0x74797065,1,0,0);
  FUN_0085cc30(*param_1,local_118,2,param_3);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

