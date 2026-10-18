/* speed.exe 0082d3b0 FUN_0082d3b0; analysis pseudocode, not buildable source.
 * calls 0082caa0 FUN_0082caa0
 * calls 0082c880 FUN_0082c880
 * calls 0082e3e0 FUN_0082e3e0
 */

int FUN_0082d3b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_0082e3e0(param_1);
  if (iVar1 == 0) {
    return -8;
  }
  iVar1 = FUN_0082c880(param_1,param_2);
  if (-1 < iVar1) {
    puVar2 = (uint *)FUN_0082caa0(param_1);
    *(uint **)(DAT_009c2964 + 0x40 + (*puVar2 & 0xff) * 4) = puVar2;
    iVar1 = 0;
  }
  return iVar1;
}

