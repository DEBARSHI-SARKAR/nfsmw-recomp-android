/* speed.exe 007f0961 FUN_007f0961; analysis pseudocode, not buildable source.
 */

undefined8 FUN_007f0961(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      uVar3 = uVar3 << 8 | uVar2 >> 0x18;
      uVar2 = (uint)*(byte *)(iVar1 + param_1) | uVar2 << 8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return CONCAT44(uVar3,uVar2);
}

