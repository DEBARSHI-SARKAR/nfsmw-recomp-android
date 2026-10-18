/* speed.exe 00557300 FUN_00557300; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 0054bf70 FUN_0054bf70
 * calls 0078c790 FUN_0078c790
 * calls 00837840 FUN_00837840
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 * calls 0054bd20 FUN_0054bd20
 */

void __fastcall FUN_00557300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_508 [6];
  int local_4f0;
  int local_4e0;
  int local_4d8;
  int local_4b0;
  undefined1 local_4ac [548];
  undefined1 local_288 [644];
  
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar1 = *(int *)(param_1 + 0x68) + 0x18;
    FUN_0078c730(iVar1);
    uVar2 = FUN_0078c790(iVar1);
    puVar3 = (undefined4 *)FUN_00513bc0(local_288,uVar2);
    puVar4 = local_508;
    for (iVar1 = 0x9f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (((local_4b0 != 0) && (local_4f0 != 0)) && (local_4d8 == 0)) {
      if (local_4e0 != 0) {
        FUN_0054bf70();
        return;
      }
      iVar1 = FUN_0078c730();
      iVar1 = FUN_00837840(*(undefined4 *)(iVar1 + 0xf8),local_4ac);
      if (iVar1 != 0) {
        FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar1);
      }
      FUN_0054bd20();
    }
  }
  return;
}

