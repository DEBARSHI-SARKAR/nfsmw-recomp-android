/* speed.exe 007586b0 FUN_007586b0; analysis pseudocode, not buildable source.
 * calls 00758600 FUN_00758600
 */

undefined4 __thiscall FUN_007586b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      return 0;
    }
    if ((int *)puVar1[2] == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)puVar1[2];
    }
    if (iVar2 == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_00758600(puVar1);
  return 1;
}

