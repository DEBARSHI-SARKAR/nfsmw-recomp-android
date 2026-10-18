/* speed.exe 0053f9f0 FUN_0053f9f0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0053f560 FUN_0053f560
 * calls 00516af0 FUN_00516af0
 * calls 00513b50 FUN_00513b50
 * calls 00516be0 FUN_00516be0
 */

void __thiscall FUN_0053f9f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0053f560(0);
  if (param_3 != 0) {
    if ((*(char *)(param_1 + 0xf6) != '\0') && (param_3 == -0x6c)) {
      return;
    }
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
    return;
  }
  DAT_0091ca90 = 1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0xf015108a), iVar1 == 0)) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    return;
  }
  FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),iVar1,0xff);
  return;
}

