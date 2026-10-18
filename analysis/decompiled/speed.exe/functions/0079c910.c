/* speed.exe 0079c910 FUN_0079c910; analysis pseudocode, not buildable source.
 * calls 0078ffb0 FUN_0078ffb0
 * calls 0079c410 FUN_0079c410
 * calls 00794f80 FUN_00794f80
 */

void __fastcall FUN_0079c910(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) != 0) {
    pcVar4 = FUN_0079bde0;
    uVar3 = 4;
    iVar1 = param_1;
    FUN_00794f80(4,FUN_0079bde0,param_1);
    iVar1 = FUN_0078ffb0(uVar3,pcVar4,iVar1);
    if (iVar1 < 0) {
      FUN_0079c410();
      puVar2 = (undefined4 *)(param_1 + 8);
      for (iVar1 = 0x19d; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
  }
  return;
}

