/* speed.exe 005010a0 FUN_005010a0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 __thiscall FUN_005010a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x18)) {
      return 0;
    }
    if (((param_2 == 0) || (iVar2 = FUN_00460d20(param_2,puVar1[2]), iVar2 == 0)) &&
       ((puVar1[5] == 0 || (0 < (int)puVar1[0xb])))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

