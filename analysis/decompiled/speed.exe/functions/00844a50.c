/* speed.exe 00844a50 FUN_00844a50; analysis pseudocode, not buildable source.
 * calls 008530f0 FUN_008530f0
 * calls 0083e550 FUN_0083e550
 * calls 0083e150 FUN_0083e150
 */

undefined4 FUN_00844a50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1834) == 0) {
    return uVar2;
  }
  if ((-1 < param_2) && (param_2 < 0x1d)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1834) + param_2 * 0x14);
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    uVar2 = FUN_008530f0(1000,2000);
    *puVar1 = uVar2;
    uVar2 = FUN_0083e150(100,100,0);
    puVar1[1] = uVar2;
    FUN_0083e550(uVar2,*puVar1);
    uVar2 = puVar1[1];
  }
  return uVar2;
}

