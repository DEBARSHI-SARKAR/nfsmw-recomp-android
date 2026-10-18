/* speed.exe 00801332 FUN_00801332; analysis pseudocode, not buildable source.
 * calls 00806f9d FUN_00806f9d
 */

uint FUN_00801332(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (param_2 = param_2 + -1, -1 < param_2) {
    iVar1 = FUN_00806f9d(param_1);
    uVar2 = uVar2 | iVar1 << ((byte)param_2 & 0x1f);
  }
  return uVar2;
}

