/* speed.exe 0054c7e0 FUN_0054c7e0; analysis pseudocode, not buildable source.
 * calls 008382b0 FUN_008382b0
 * calls 005141e0 FUN_005141e0
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_0054c7e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0078c730();
  iVar1 = FUN_008382b0(*(undefined4 *)(iVar1 + 0xf8),&DAT_0091c39c,2,&LAB_00544c80,param_1);
  if (iVar1 == 0) {
    DAT_0091ca90 = 1;
    FUN_005141e0(0x4b14af4e,&DAT_0091c39c);
  }
  else if ((*(char *)(param_1 + 0xf6) == '\0') || (iVar1 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar1);
    return;
  }
  return;
}

