/* speed.exe 005d5aa0 FUN_005d5aa0; analysis pseudocode, not buildable source.
 * calls 005d4a40 FUN_005d4a40
 */

void FUN_005d5aa0(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint local_8 [2];
  
  puVar2 = param_2;
  puVar1 = DAT_0091ddc8;
  uVar3 = *param_2;
  if ((param_2[1] & 1) != 0) {
    uVar3 = uVar3 & 0xffff2020 | 0x2020;
  }
  local_8[1] = 0;
  local_8[0] = uVar3;
  FUN_005d4a40(&param_2,DAT_0091ddc4,DAT_0091ddc8,local_8,0);
  if ((param_2 != puVar1) && (*param_2 == uVar3)) {
    (*(code *)param_2[1])(puVar2,param_1);
  }
  return;
}

