/* speed.exe 00852fd0 FUN_00852fd0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00852fd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = -param_2;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + (iVar2 % *(int *)(param_1 + 0x10)) * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1[2] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[1];
}

