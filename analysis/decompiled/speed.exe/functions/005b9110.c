/* speed.exe 005b9110 FUN_005b9110; analysis pseudocode, not buildable source.
 * calls 005b7300 FUN_005b7300
 * calls 00652ac0 _malloc
 * calls 005b59c0 FUN_005b59c0
 */

void FUN_005b9110(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _malloc(0x24);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0xabadcafe;
    puVar1[2] = 0xabadcafe;
    *puVar1 = &PTR_FUN_008a2c78;
    puVar2 = puVar1;
  }
  FUN_005b59c0(param_1);
  puVar2[5] = param_2;
  puVar2[6] = *(undefined4 *)(&DAT_008a2ba0 + param_2 * 4);
  FUN_005b7300(puVar2);
  return;
}

