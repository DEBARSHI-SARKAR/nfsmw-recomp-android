/* speed.exe 007267a0 FUN_007267a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007267a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0)) {
    **(undefined4 **)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}

