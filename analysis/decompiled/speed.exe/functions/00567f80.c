/* speed.exe 00567f80 FUN_00567f80; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00460c70 FUN_00460c70
 * calls 00514d10 FUN_00514d10
 * calls 00514df0 FUN_00514df0
 */

void __fastcall FUN_00567f80(int param_1)

{
  char cVar1;
  
  if (0 < *(int *)(param_1 + 0x44)) {
    cVar1 = FUN_00514df0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x8c));
    if ((cVar1 == '\0') || ((*(char *)(param_1 + 0x90) != '\0' && (*(int *)(param_1 + 0x48) != 0))))
    {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x38),0x16a259);
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x38),0x16a259,1);
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      FUN_00460c70(param_1 + 0x4c,&DAT_00890978);
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),0x16a259);
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x40),0x16a259,1);
      }
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}

