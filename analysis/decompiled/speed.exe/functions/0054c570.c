/* speed.exe 0054c570 FUN_0054c570; analysis pseudocode, not buildable source.
 * calls 0078caf0 FUN_0078caf0
 * calls 0078cac0 FUN_0078cac0
 * calls 005989b0 FUN_005989b0
 * calls 005141e0 FUN_005141e0
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 * calls 00839610 FUN_00839610
 */

void __thiscall FUN_0054c570(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0078c730();
  iVar1 = FUN_0078cac0();
  FUN_0078c730();
  iVar2 = FUN_0078caf0();
  if (99 < iVar2 + iVar1) {
    FUN_005989b0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,
                 0x6aa4c280);
    return;
  }
  iVar1 = FUN_0078c730();
  iVar1 = FUN_00839610(*(undefined4 *)(iVar1 + 0xf8),param_2,&LAB_00544ce0,param_1);
  if (iVar1 == 0) {
    FUN_005141e0(0xa948a646,&DAT_0091c39c);
  }
  else if ((*(char *)(param_1 + 0xf6) == '\0') || (iVar1 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar1);
    return;
  }
  return;
}

