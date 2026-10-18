/* speed.exe 0079bd50 FUN_0079bd50; analysis pseudocode, not buildable source.
 * calls 0083c9b0 FUN_0083c9b0
 * calls 0079bac0 FUN_0079bac0
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 */

void FUN_0079bd50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_88;
  undefined4 local_87;
  
  local_88 = 0;
  puVar2 = &local_87;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c9b0(&local_88,0x80,"MYGAME=1 STATS=5000 ASYNC=1 MESGS=1 ROOMS=1 USERSETS=1");
  iVar1 = FUN_0079bac0();
  if ((*(int *)(iVar1 + 0x1c) != -1) && (iVar1 != -0x1c)) {
    FUN_0083c880(&local_88,0x80,"USERSET0",iVar1 + 0x44);
  }
  FUN_00793340(0x73656c65,&local_88,0,0,0,0,1);
  return;
}

