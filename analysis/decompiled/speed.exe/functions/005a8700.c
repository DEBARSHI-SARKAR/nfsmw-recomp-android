/* speed.exe 005a8700 FUN_005a8700; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 0065d9e0 FUN_0065d9e0
 * calls 005a3790 FUN_005a3790
 */

void __thiscall FUN_005a8700(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 0x410) == '\0') || (*(int *)(param_1 + 0x414) == 0)) {
    if (((DAT_00925e90 == 3) &&
        ((*(char *)(param_1 + 0x410) == '\0' || (*(int *)(param_1 + 0x414) == 0)))) &&
       ((param_2 == 0x71 || (param_2 == 0x51)))) {
      FUN_00516c50(0x62799a4c,0,0xff);
    }
  }
  else {
    FUN_005a3790(param_2);
  }
  if (DAT_008f8410 != '\0') {
    FUN_0065d9e0(param_2);
  }
  return;
}

