/* speed.exe 006fff90 FUN_006fff90; analysis pseudocode, not buildable source.
 */

undefined8 FUN_006fff90(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1 >> 0x10 | (int)param_1 >> 0x1f & 0xffffU;
  uVar3 = ((param_1 & 0xffff) << 8 | param_1 & 0xffff) & 0xff00ff;
  uVar2 = (uVar2 << 8 | uVar2) & 0xff00ff;
  uVar1 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
  uVar1 = uVar1 << 2 | uVar1;
  uVar4 = param_2 >> 0x10 | (int)param_2 >> 0x1f & 0xffffU;
  uVar2 = ((param_2 & 0xffff) << 8 | param_2 & 0xffff) & 0xff00ff;
  uVar4 = (uVar4 << 8 | uVar4) & 0xff00ff;
  uVar3 = uVar3 << 2 | uVar3;
  uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
  uVar4 = (uVar4 << 4 | uVar4) & 0xf0f0f0f;
  uVar2 = (uVar2 << 2 | uVar2) & 0x33333333;
  uVar4 = (uVar4 << 2 | uVar4) & 0x33333333;
  return CONCAT44((((uVar4 << 1 | uVar4) ^ uVar1 & 0x33333333) & 0x2aaaaaaa ^ (uVar4 << 1 | uVar4))
                  << 1 | uVar1 & 0x11111111,
                  (((uVar2 << 1 | uVar2) ^ uVar3 & 0x33333333) & 0xaaaaaaaa ^ (uVar2 << 1 | uVar2))
                  << 1 | uVar3 & 0x11111111);
}

