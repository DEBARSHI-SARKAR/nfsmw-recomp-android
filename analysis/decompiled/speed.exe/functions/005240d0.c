/* speed.exe 005240d0 FUN_005240d0; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 0078c760 FUN_0078c760
 * calls 00572e80 FUN_00572e80
 * calls 0078ce70 FUN_0078ce70
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_005240d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_508 [6];
  int local_4f0;
  int local_4c0;
  undefined1 local_288 [644];
  
  FUN_0078c730();
  iVar1 = FUN_0078ce70();
  iVar4 = 0;
  *(int *)(param_1 + 0x34) = iVar1;
  if (0 < iVar1) {
    do {
      iVar1 = iVar4;
      FUN_0078c730(iVar4);
      uVar2 = FUN_0078c760(iVar1);
      puVar3 = (undefined4 *)FUN_00513bc0(local_288,uVar2);
      puVar5 = local_508;
      for (iVar1 = 0x9f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      if ((local_4c0 != 0) && (local_4f0 != 0)) {
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x1b0) == 0) {
    FUN_00572e80(0,0);
  }
  return;
}

