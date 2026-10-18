/* speed.exe 0079ff50 FUN_0079ff50; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 0079f090 FUN_0079f090
 * calls 0078b090 FUN_0078b090
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079ff50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = &DAT_009b4250;
  do {
    iVar1 = puVar3[1];
    if ((iVar1 != -1) && (puVar3 != (undefined4 *)0x0)) {
      FUN_0079f090(iVar1);
      iVar1 = FUN_0078c380(iVar1);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x88) == 3)) {
        FUN_007c4b80();
        uVar4 = param_3;
        uVar2 = FUN_007c4b80(param_3);
        FUN_0078b090(*(undefined4 *)(iVar1 + 0x9c),param_2,uVar2,uVar4);
      }
    }
    puVar3 = puVar3 + 7;
  } while ((int)puVar3 < 0x9b42a4);
  return;
}

