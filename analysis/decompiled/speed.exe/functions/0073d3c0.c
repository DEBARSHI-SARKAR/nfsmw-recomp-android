/* speed.exe 0073d3c0 FUN_0073d3c0; analysis pseudocode, not buildable source.
 * calls 0045e300 FUN_0045e300
 * calls 006bd900 FUN_006bd900
 * calls 00444fe0 FUN_00444fe0
 * calls 004fb7d0 FUN_004fb7d0
 * calls 006bdd20 FUN_006bdd20
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdc60 FUN_006bdc60
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_0073d3c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_54;
  undefined1 local_50 [76];
  
  puVar3 = &DAT_00904b50;
  local_54 = 2;
  do {
    if (*(int *)(param_2 + 0x10) == puVar3[-3]) {
      uVar1 = FUN_004fb7d0();
      FUN_00444fe0(local_50,param_3);
      FUN_0045e300(local_50,local_50);
      FUN_006bd900(uVar1,param_3,local_50);
      if ((*(byte *)(puVar3 + -2) & 1) != 0) {
        iVar2 = FUN_007c4b80();
        FUN_006bdbb0(uVar1,uVar1,iVar2 / 0x168);
      }
      if ((*(byte *)(puVar3 + -2) & 2) != 0) {
        iVar2 = FUN_007c4b80();
        FUN_006bdc60(uVar1,uVar1,iVar2 / 0x168);
      }
      if ((*(byte *)(puVar3 + -2) & 4) != 0) {
        iVar2 = FUN_007c4b80();
        FUN_006bdd20(uVar1,uVar1,iVar2 / 0x168);
      }
      FUN_006bd900(param_3,uVar1,param_3);
    }
    puVar3 = puVar3 + 5;
    local_54 = local_54 + -1;
  } while (local_54 != 0);
  return;
}

