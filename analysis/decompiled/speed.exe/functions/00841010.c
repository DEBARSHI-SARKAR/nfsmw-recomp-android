/* speed.exe 00841010 FUN_00841010; analysis pseudocode, not buildable source.
 * calls 00852430 GetTickCount
 * calls 00840530 FUN_00840530
 * calls 0078af00 FUN_0078af00
 */

undefined4 FUN_00841010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_0078af00(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[1] = 0x6f6e6365;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  DVar2 = GetTickCount();
  puVar1[2] = DVar2;
  uVar3 = FUN_00840530();
  *puVar1 = uVar3;
  return uVar3;
}

