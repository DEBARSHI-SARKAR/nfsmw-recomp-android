/* speed.exe 00764400 FUN_00764400; analysis pseudocode, not buildable source.
 * calls 00763690 FUN_00763690
 */

int FUN_00764400(uint param_1)

{
  uint uVar1;
  uint3 uVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar1 = param_1;
  FUN_00763690(param_1,&param_1,&local_8);
  FUN_00763690(uVar1 + 0xc,&local_c,&local_4);
  uVar1 = local_c;
  if (local_c < param_1) {
    uVar1 = param_1;
    param_1 = local_c;
  }
  uVar3 = local_4;
  if (local_4 < local_8) {
    uVar3 = local_8;
    local_8 = local_4;
  }
  uVar2 = (uint3)(uVar1 - param_1 >> 8);
  if (0x14 < uVar1 - param_1) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,'\x01' - (0x14 < uVar3 - local_8));
}

