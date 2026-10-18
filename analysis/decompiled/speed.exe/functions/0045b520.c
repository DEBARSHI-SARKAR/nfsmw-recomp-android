/* speed.exe 0045b520 FUN_0045b520; analysis pseudocode, not buildable source.
 * calls 0045b570 FUN_0045b570
 */

void __thiscall FUN_0045b520(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 2) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    *puVar2 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar2 + 1;
    return;
  }
  FUN_0045b570(&param_2,*(undefined4 *)(param_1 + 8),param_2);
  return;
}

