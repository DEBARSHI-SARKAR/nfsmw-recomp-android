/* speed.exe 0047a8b0 FUN_0047a8b0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 005d51f0 FUN_005d51f0
 * calls 00471370 FUN_00471370
 * calls 00460bf0 FUN_00460bf0
 * calls 0046aaa0 FUN_0046aaa0
 */

void __fastcall FUN_0047a8b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  if ((((*(int *)(param_1 + 0x50) == 0) ||
       (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*(int *)(param_1 + 0x50)),
       iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) && (*(int *)(param_1 + 0x34) != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_007869c0(0);
  }
  if (((-1 < DAT_00911058) && (DAT_0091105c < 10)) && (-1 < DAT_0091105c)) {
    if ((((&DAT_0092cd24)[DAT_0091105c * 0x18] != 0) &&
        (piVar1 = *(int **)((&DAT_0092cd1c)[DAT_0091105c * 0x18] +
                           (DAT_00911058 % (int)(&DAT_0092cd24)[DAT_0091105c * 0x18]) * 4),
        piVar1 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*piVar1 + 4))(), *(int *)(iVar2 + 8) != *(int *)(param_1 + 0x50))) {
      piVar3 = (int *)(**(code **)(*piVar1 + 4))();
      iVar2 = (**(code **)(*piVar3 + 0x70))();
      if (iVar2 != 0) {
        FUN_0046aaa0();
        iVar4 = (**(code **)(*piVar1 + 0x48))();
        puVar5 = *(undefined1 **)(*(int *)(iVar4 + 8) + 0x1c);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00890978;
        }
        uVar6 = FUN_00460bf0(puVar5);
        FUN_00471370(uVar6);
        FUN_007869c0(iVar2);
        iVar2 = (**(code **)(*piVar1 + 4))();
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 8);
      }
    }
  }
  return;
}

