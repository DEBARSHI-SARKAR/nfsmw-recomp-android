/* speed.exe 004b51e0 FUN_004b51e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

int __fastcall FUN_004b51e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_007c4b80();
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1fc);
  if (iVar2 < 3) {
    iVar2 = 2;
  }
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}

