/* speed.exe 004e1e60 FUN_004e1e60; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e1e60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < DAT_0091429c) {
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[5] = DAT_009142a0;
    param_1[4] = DAT_009142a4;
    puVar2 = &DAT_009142a8;
    puVar3 = param_1 + 6;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *param_1 = &DAT_00914298;
    DAT_00914298 = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

