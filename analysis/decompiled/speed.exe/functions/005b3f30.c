/* speed.exe 005b3f30 FUN_005b3f30; analysis pseudocode, not buildable source.
 * calls 005b2d80 FUN_005b2d80
 */

void __fastcall FUN_005b3f30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005b2d80();
  *(undefined4 *)
   ((*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x88)) * 0x30 +
   *(int *)(param_1 + 0x90)) = uVar1;
  return;
}

