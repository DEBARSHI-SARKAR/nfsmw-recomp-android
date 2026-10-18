/* speed.exe 00852e60 FUN_00852e60; analysis pseudocode, not buildable source.
 * calls 00852d60 FUN_00852d60
 */

undefined4 FUN_00852e60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00852d60(param_1);
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(puVar1[2],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[1];
}

