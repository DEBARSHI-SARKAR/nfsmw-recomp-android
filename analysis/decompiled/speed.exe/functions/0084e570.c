/* speed.exe 0084e570 FUN_0084e570; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084e1c0 FUN_0084e1c0
 * calls 0084bd10 FUN_0084bd10
 * calls 0084bdf0 FUN_0084bdf0
 */

undefined4 FUN_0084e570(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0084bd10(param_3 + 0x1ec);
  if (iVar1 != 0) {
    GetTickCount();
    FUN_0084e1c0();
    FUN_0084bdf0(param_3 + 0x1ec);
  }
  return 0;
}

