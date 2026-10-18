/* speed.exe 00654990 FUN_00654990; analysis pseudocode, not buildable source.
 */

undefined8 FUN_00654990(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((param_1 & 0xffff) << 8 | param_1 & 0xffff) & 0xff00ff;
  uVar3 = ((param_1 >> 0x10) << 8 | param_1 >> 0x10) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar4 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
  uVar1 = uVar1 << 2 | uVar1;
  uVar4 = uVar4 << 2 | uVar4;
  uVar3 = ((param_2 & 0xffff) << 8 | param_2 & 0xffff) & 0xff00ff;
  uVar2 = ((param_2 >> 0x10) << 8 | param_2 >> 0x10) & 0xff00ff;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
  uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
  uVar3 = (uVar3 << 2 | uVar3) & 0x33333333;
  uVar2 = (uVar2 << 2 | uVar2) & 0x33333333;
  return CONCAT44((((uVar2 << 1 | uVar2) ^ uVar4 & 0x33333333) & 0x2aaaaaaa ^ (uVar2 << 1 | uVar2))
                  << 1 | uVar4 & 0x11111111,
                  (((uVar3 << 1 | uVar3) ^ uVar1 & 0x33333333) & 0xaaaaaaaa ^ (uVar3 << 1 | uVar3))
                  << 1 | uVar1 & 0x11111111);
}

