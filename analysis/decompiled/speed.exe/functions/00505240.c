/* speed.exe 00505240 FUN_00505240; analysis pseudocode, not buildable source.
 * calls 00502e80 FUN_00502e80
 */

undefined1 __fastcall FUN_00505240(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if ('\0' < *(char *)(param_1 + 0x19)) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 4 + iVar5 * 8);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar5 * 8);
      if (((iVar6 == DAT_00916040) && (iVar6 == DAT_00916040)) &&
         (iVar4 = FUN_00502e80(*puVar1), iVar4 != 0)) {
        *(undefined1 *)(iVar4 + 0x53) = 1;
        iVar6 = iVar4;
      }
      if (iVar6 != puVar1[1]) {
        puVar1[1] = iVar6;
        uVar2 = 1;
      }
      iVar5 = iVar5 + 1;
      uVar3 = uVar2;
    } while (iVar5 < *(char *)(param_1 + 0x19));
  }
  return uVar3;
}

