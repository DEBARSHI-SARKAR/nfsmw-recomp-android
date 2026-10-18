/* speed.exe 00544a90 FUN_00544a90; analysis pseudocode, not buildable source.
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00592710 FUN_00592710
 * calls 00652ad0 _malloc
 */

undefined4 *
FUN_00544a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = _malloc(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar2 + 3;
    *puVar1 = puVar1;
    puVar2[4] = puVar1;
    *(undefined1 *)(puVar2 + 5) = 1;
    *puVar2 = &PTR_FUN_0089e460;
  }
  puVar2[7] = param_3;
  puVar2[6] = param_4;
  FUN_0051dcf0(param_1,0);
  FUN_0051dcf0(param_2,0);
  FUN_005868e0(puVar2);
  FUN_00592710(puVar2);
  FUN_005926b0(1);
  return puVar2;
}

