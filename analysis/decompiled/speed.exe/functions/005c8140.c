/* speed.exe 005c8140 FUN_005c8140; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_005c8140(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    iVar1 = iVar1 * 0x10 + param_1;
  }
  return iVar1;
}

