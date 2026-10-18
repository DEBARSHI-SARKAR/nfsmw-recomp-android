/* speed.exe 005ef5b0 FUN_005ef5b0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005e3f80 FUN_005e3f80
 * calls 00453fd0 FUN_00453fd0
 * calls 005e40f0 FUN_005e40f0
 * calls 005eed00 FUN_005eed00
 * calls 00457440 FUN_00457440
 */

void __fastcall FUN_005ef5b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005e3f80();
  FUN_005e40f0();
  FUN_005eed00();
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = FUN_00453fd0();
  FUN_00457440(0,iVar2 * iVar1 * 3);
  FUN_004655f0(*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_004655f0(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

