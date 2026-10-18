/* speed.exe 00712bf0 FUN_00712bf0; analysis pseudocode, not buildable source.
 * calls 00705cd0 FUN_00705cd0
 * calls 006fee80 FUN_006fee80
 * calls 004cb500 FUN_004cb500
 * calls 0065faf0 FUN_0065faf0
 * calls 006feef0 FUN_006feef0
 * calls 0070fa10 FUN_0070fa10
 * calls 0070b170 FUN_0070b170
 */

void FUN_00712bf0(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0xc) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x30))();
      if (1 < (ushort)uVar1) {
        DAT_00992264 = (ushort)uVar1;
      }
    }
    if (param_2 == '\0') {
      FUN_004cb500(*(undefined4 *)(param_1 + 8),uVar1);
      iVar3 = *DAT_009933e8;
      iVar2 = FUN_00705cd0(iVar3,*(undefined4 *)(iVar3 + 4),param_1 + 8);
      FUN_0070fa10(1);
      *(int *)(iVar3 + 4) = iVar2;
      **(int **)(iVar2 + 4) = iVar2;
      if (10 < DAT_009933ec) {
        FUN_0070b170();
        return;
      }
    }
    else {
      iVar3 = FUN_006fee80(param_1);
      *(undefined4 *)(iVar3 + 4) = 0x20d60dbf;
      FUN_0065faf0();
      if (*(int *)(param_1 + 8) == 0xcc) {
        iVar3 = FUN_006feef0();
        *(undefined4 *)(iVar3 + 4) = 0x20d60dbf;
        FUN_0065faf0();
      }
    }
  }
  return;
}

