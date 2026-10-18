/* speed.exe 005dc9d0 FUN_005dc9d0; analysis pseudocode, not buildable source.
 * calls 005dc970 FUN_005dc970
 */

void __fastcall FUN_005dc9d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1d) != '\0')) {
    FUN_005dc970(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

