/* speed.exe 00756890 FUN_00756890; analysis pseudocode, not buildable source.
 * calls 007513a0 FUN_007513a0
 * calls 007476f0 FUN_007476f0
 */

void __thiscall FUN_00756890(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0xf0);
  if (param_2 != iVar2) {
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      piVar4 = *(int **)(param_1 + 0x14);
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      piVar4 = (int *)(iVar2 + 0xe8);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FUN_007513a0();
        puVar1 = (undefined4 *)(iVar2 + 0x10);
        *DAT_009b0bcc = puVar1;
        puVar5 = puVar1;
        *(undefined4 **)(iVar2 + 0x14) = DAT_009b0bcc;
        DAT_009b0bcc = puVar5;
        *puVar1 = &DAT_009b0bc8;
      }
    }
    if (param_2 != 0) {
      FUN_007476f0(param_1);
    }
  }
  return;
}

