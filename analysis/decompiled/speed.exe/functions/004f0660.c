/* speed.exe 004f0660 FUN_004f0660; analysis pseudocode, not buildable source.
 * calls 0081d135 FUN_0081d135
 * calls 0082c490 FUN_0082c490
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0082d560 FUN_0082d560
 * calls 004b6590 FUN_004b6590
 */

void __fastcall FUN_004f0660(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_1 + 0x150) != -2) && ((*(uint *)(param_1 + 0x114) & 4) != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x128), iVar1 != *(int *)(param_1 + 300))) &&
     ((*(uint *)(param_1 + 0x114) & 0x800) == 0)) {
    *(int *)(param_1 + 300) = iVar1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    iVar1 = FUN_0082c490(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1),iVar1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined1 *)(param_1 + 0x11a) = 1;
      return;
    }
    FUN_0082d560(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1),0);
    if (*(int *)(param_1 + 0x110) != 0) {
      FUN_0081bccb();
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x10) >> 0x10 & 0x7fff;
      }
      uVar3 = FUN_004b6590(*(undefined4 *)(param_1 + 0x13c));
      FUN_0081d135(uVar3,uVar2);
      FUN_0081bcd9();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x34 + param_1) = 0;
    if (*(int *)(param_1 + 0x128) == 0x1c53fc7) {
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x148) = 3;
    }
  }
  return;
}

