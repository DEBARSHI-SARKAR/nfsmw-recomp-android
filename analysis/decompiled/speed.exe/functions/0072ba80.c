/* speed.exe 0072ba80 FUN_0072ba80; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

void __thiscall FUN_0072ba80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_00460bf0(param_2);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x484)) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x488) + iVar6;
      if (*(int *)(*(int *)(param_1 + 0x488) + 0x14 + iVar6) == iVar2) {
        *(undefined1 *)(iVar4 + 0x10) = 1;
        for (puVar1 = DAT_009ab24c; (undefined4 **)puVar1 != &DAT_009ab24c;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[2] == iVar2) {
            if (*(char *)((int)puVar1 + 0x11) != '\0') {
              uVar3 = 1;
              goto LAB_0072bad3;
            }
            break;
          }
        }
        uVar3 = 0;
LAB_0072bad3:
        *(undefined1 *)(iVar4 + 0x12) = uVar3;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x484));
  }
  return;
}

