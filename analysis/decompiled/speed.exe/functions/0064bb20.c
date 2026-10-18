/* speed.exe 0064bb20 FUN_0064bb20; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 004647c0 FUN_004647c0
 */

void FUN_0064bb20(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_64;
  undefined4 local_63;
  
  local_64 = 0;
  puVar2 = &local_63;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_004647c0(&local_64,"%d.%d.%d",1,3,DAT_008f8694);
  FUN_00460c70(param_1,&local_64);
  return;
}

