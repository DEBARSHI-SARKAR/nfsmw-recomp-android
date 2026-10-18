/* speed.exe 00466270 FUN_00466270; analysis pseudocode, not buildable source.
 * calls 004653d0 FUN_004653d0
 * calls 007ec1a7 FUN_007ec1a7
 */

void __thiscall FUN_00466270(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  
  uVar1 = (param_2 >> 3) * 8;
  FUN_007ec1a7();
  puVar2 = (undefined2 *)FUN_004653d0(uVar1,0,0,0);
  *param_1 = param_2 >> 3;
  param_1[1] = uVar1;
  param_1[2] = (uint)puVar2;
  puVar2[2] = 0;
  *puVar2 = (short)*param_1;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  param_1[0xa0f] = (uint)puVar2;
  return;
}

