/* speed.exe 00599050 FUN_00599050; analysis pseudocode, not buildable source.
 * calls 005bcc10 FUN_005bcc10
 * calls 00585820 FUN_00585820
 * calls 005251e0 FUN_005251e0
 * calls 0057e8c0 FUN_0057e8c0
 */

undefined4 FUN_00599050(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 local_c [3];
  
  if (DAT_008f5360 != 0) {
    iVar1 = FUN_00585820(DAT_008f5350);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
      local_c[0] = 0xf9363f30;
      local_c[1] = 0xfb8b67d1;
      local_c[2] = 0xfde09072;
      iVar1 = FUN_005251e0(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x10),local_c[param_1]);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_3 != '\0') {
        FUN_005bcc10(param_2);
        return 1;
      }
      FUN_0057e8c0(param_2);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      return 1;
    }
  }
  return 0;
}

