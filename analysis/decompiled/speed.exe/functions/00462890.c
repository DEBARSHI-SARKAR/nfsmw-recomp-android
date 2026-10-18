/* speed.exe 00462890 FUN_00462890; analysis pseudocode, not buildable source.
 */

void FUN_00462890(uint param_1,uint *param_2)

{
  uint uVar1;
  
  param_1 = param_1 ^ 0x1d872b41;
  uVar1 = param_1 >> 5 ^ param_1;
  *param_2 = uVar1 << 0x1b ^ uVar1 ^ param_1;
  return;
}

