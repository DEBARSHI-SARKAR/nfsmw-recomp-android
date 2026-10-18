/* speed.exe 0045c380 FUN_0045c380; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 * calls 0045c090 FUN_0045c090
 */

void __fastcall FUN_0045c380(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x39) == '\0')) {
    FUN_0045c090();
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar5 = *(int **)(param_1 + 0x2c);
    do {
      if (*piVar5 != 0) break;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 < uVar1);
  }
  iVar3 = *(int *)(param_1 + 0x14) + uVar1;
  iVar4 = iVar3 * 0x10;
  DAT_0090dcd4 = DAT_0090dcd4 + iVar3 * -0x10;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar4 != 0)) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*(int *)(param_1 + 0xc),iVar4,0);
  }
  iVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  iVar4 = iVar3 * 4;
  DAT_0090dcd4 = DAT_0090dcd4 + iVar3 * -4;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar4 != 0)) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*(int *)(param_1 + 0x10),iVar4,0);
  }
  return;
}

