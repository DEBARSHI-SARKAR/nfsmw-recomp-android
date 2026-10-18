/* speed.exe 0045d380 FUN_0045d380; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0045d380(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  for (iVar2 = 0; (puVar1 != param_1 && (iVar2 != param_2)); iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}

