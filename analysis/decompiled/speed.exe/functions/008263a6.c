/* speed.exe 008263a6 FUN_008263a6; analysis pseudocode, not buildable source.
 * calls 0081f7cb FUN_0081f7cb
 */

uint FUN_008263a6(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_0081f7cb(param_1);
  return (uint)(iVar1 < 0);
}

