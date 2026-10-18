/* speed.exe 00672a30 FUN_00672a30; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 00728920 FUN_00728920
 */

void __thiscall FUN_00672a30(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((iVar1 != 0) && (param_2 != *(char *)(param_1 + 0xec))) {
    if (param_2 == '\0') {
      iVar1 = FUN_00723c90(*(undefined4 *)(iVar1 + 0x2c));
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 0x10;
        FUN_00728920();
      }
    }
    else {
      iVar1 = FUN_00723c90(*(undefined4 *)(iVar1 + 0x2c));
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xef;
        FUN_00728920();
        *(char *)(param_1 + 0xec) = param_2;
        return;
      }
    }
    *(char *)(param_1 + 0xec) = param_2;
  }
  return;
}

