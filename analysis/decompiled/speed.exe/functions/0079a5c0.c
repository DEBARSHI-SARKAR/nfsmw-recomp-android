/* speed.exe 0079a5c0 FUN_0079a5c0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00794f80 FUN_00794f80
 * calls 0085cc30 FUN_0085cc30
 * calls 00840c60 FUN_00840c60
 * calls 00460c70 FUN_00460c70
 * calls 007ec1bd FUN_007ec1bd
 * calls 00796d30 FUN_00796d30
 * calls 00798bc0 FUN_00798bc0
 * calls 0085cf40 FUN_0085cf40
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079a5c0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined1 local_40 [64];
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  FUN_00798bc0();
  local_110 = *(undefined4 *)(param_2 + 0x14);
  local_10c = *(undefined4 *)(param_2 + 0x18);
  FUN_00460c70(local_108,param_2 + 0x1c);
  FUN_00460c70(local_c8,param_2 + 4);
  FUN_00796d30();
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00794f80(0x73656c66);
    iVar1 = FUN_00840c60(*(undefined4 *)(iVar1 + 0x38));
  }
  local_88 = *(undefined4 *)(iVar1 + 0x20);
  local_84 = *(undefined4 *)(iVar1 + 0x220);
  puVar3 = (undefined4 *)(iVar1 + 0x1e0);
  puVar4 = local_80;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00460c70(local_40,iVar1 + 8);
  FUN_0085cf40(*param_1,0x74797065,1,0,0);
  FUN_0085cc30(*param_1,&local_110,2,param_3);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

