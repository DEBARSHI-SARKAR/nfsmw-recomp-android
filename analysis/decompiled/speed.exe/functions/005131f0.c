/* speed.exe 005131f0 FUN_005131f0; analysis pseudocode, not buildable source.
 * calls 00598700 FUN_00598700
 * calls 00460c50 FUN_00460c50
 */

undefined4 __fastcall FUN_005131f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460c50(param_1 + 0x12d);
  if (iVar1 < 1) {
    FUN_00598700(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0xd29a1a18,3,0xc);
    return 0;
  }
  return 1;
}

