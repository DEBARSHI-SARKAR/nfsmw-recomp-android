/* speed.exe 00735860 FUN_00735860; analysis pseudocode, not buildable source.
 * calls 0078b2c0 FUN_0078b2c0
 */

void __thiscall FUN_00735860(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0078b2c0();
  *(int *)(param_1 + 0x28) = param_2 - iVar1;
  return;
}

