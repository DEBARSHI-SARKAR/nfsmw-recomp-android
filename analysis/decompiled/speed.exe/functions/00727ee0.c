/* speed.exe 00727ee0 FUN_00727ee0; analysis pseudocode, not buildable source.
 * calls 00723ad0 FUN_00723ad0
 * calls 00727de0 FUN_00727de0
 * calls 00658dc0 FUN_00658dc0
 */

void __thiscall FUN_00727ee0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0xc) = 3;
  FUN_00658dc0(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x18));
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(undefined4 *)(param_2 + 0x40) = DAT_008f82f4;
  if (*(char *)(param_2 + 0xb) != '\0') {
    FUN_00727de0(param_2);
  }
  if ((*(byte *)(param_2 + 0xb) & 1) != 0) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + *(int *)(param_2 + 0x18);
  }
  if ((*(byte *)(param_2 + 0xb) & 2) != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + *(int *)(param_2 + 0x18);
  }
  FUN_00723ad0();
  return;
}

