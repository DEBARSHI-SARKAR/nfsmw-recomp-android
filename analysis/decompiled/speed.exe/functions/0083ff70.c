/* speed.exe 0083ff70 FUN_0083ff70; analysis pseudocode, not buildable source.
 * calls 0085ea90 _strtoul
 * calls 0083fac0 FUN_0083fac0
 */

undefined4 FUN_0083ff70(undefined4 *param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = _strtoul((char *)(param_3 + 1),(char **)0x0,0x10);
  uVar2 = FUN_0083fac0(uVar1);
  *param_1 = uVar2;
  return 9;
}

