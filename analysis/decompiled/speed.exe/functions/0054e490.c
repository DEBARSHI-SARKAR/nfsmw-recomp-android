/* speed.exe 0054e490 FUN_0054e490; analysis pseudocode, not buildable source.
 * calls 005868e0 FUN_005868e0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 004647c0 FUN_004647c0
 * calls 00592710 FUN_00592710
 * calls 00652ad0 _malloc
 */

void FUN_0054e490(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_c;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  puVar2 = _malloc(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar2 + 3;
    *puVar1 = puVar1;
    puVar2[4] = puVar1;
    *(undefined1 *)(puVar2 + 5) = 1;
    *puVar2 = &PTR_FUN_0089e3a4;
  }
  puVar2[6] = param_1;
  FUN_0051dcf0(param_1 + 8,0);
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_c = 0;
  local_1 = 0;
  FUN_004647c0(&local_c,&DAT_0089d764,*(undefined4 *)(param_1 + 0x20));
  FUN_0051dcf0(&local_c,0);
  FUN_005868e0(puVar2);
  FUN_00592710(puVar2);
  return;
}

