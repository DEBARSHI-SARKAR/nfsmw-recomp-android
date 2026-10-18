/* speed.exe 0078b090 FUN_0078b090; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083f5d0 FUN_0083f5d0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_0078b090(undefined4 param_1,undefined4 *param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_220 [4];
  undefined2 local_21c;
  char local_21a;
  undefined4 local_218 [133];
  
  local_21a = (param_4 == '\0') + '\x05';
  puVar3 = local_218;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  local_21c = (undefined2)param_3;
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  uVar1 = FUN_0083f5d0(param_1,local_220,1);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return uVar1;
}

