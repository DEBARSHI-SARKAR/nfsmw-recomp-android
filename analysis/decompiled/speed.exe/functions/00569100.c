/* speed.exe 00569100 FUN_00569100; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 00568fc0 FUN_00568fc0
 * calls 00654af0 FUN_00654af0
 */

void __fastcall FUN_00569100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14));
  if (((iVar1 != 0) && (iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0)) &&
     (iVar1 = FUN_00460d20(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0)) {
    return;
  }
  FUN_00568fc0(*(undefined4 *)(param_1 + 0x14));
  FUN_00654af0();
  return;
}

