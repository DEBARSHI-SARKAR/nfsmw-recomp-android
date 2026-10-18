/* speed.exe 006340d0 FUN_006340d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006340d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = 0;
    if (DAT_009203a4 != 0) {
      do {
        if ((&DAT_0091e148)[uVar2] == param_1) goto LAB_006340f5;
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_009203a4);
    }
    uVar2 = 0xffffffff;
LAB_006340f5:
    if (uVar2 < DAT_009203a4) {
      uVar1 = DAT_009203a4 - 1;
      if (uVar2 < uVar1) {
        puVar4 = &DAT_0091e14c + uVar2;
        puVar5 = &DAT_0091e148 + uVar2;
        for (iVar3 = uVar1 - uVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      (&DAT_0091e144)[DAT_009203a4] = 0;
      DAT_009203a4 = uVar1;
    }
  }
  return;
}

