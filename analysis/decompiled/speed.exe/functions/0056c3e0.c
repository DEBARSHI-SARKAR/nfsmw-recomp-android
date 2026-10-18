/* speed.exe 0056c3e0 FUN_0056c3e0; analysis pseudocode, not buildable source.
 * calls 0078b210 FUN_0078b210
 * calls 00460c70 FUN_00460c70
 * calls 0079a220 FUN_0079a220
 * calls 0079a350 FUN_0079a350
 * calls 004647c0 FUN_004647c0
 * calls 0083ffa0 FUN_0083ffa0
 * calls 0078c1d0 FUN_0078c1d0
 * calls 007ec298 FUN_007ec298
 * calls 0078c2a0 FUN_0078c2a0
 * calls 0079f090 FUN_0079f090
 * calls 00799eb0 FUN_00799eb0
 * calls 0079f590 FUN_0079f590
 * calls 007412a0 FUN_007412a0
 */

void FUN_0056c3e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  puVar2 = &local_88;
  FUN_00799eb0();
  iVar1 = FUN_0078b210();
  while (iVar1 == 0) {
    FUN_007ec298(0);
    iVar1 = FUN_0078b210();
  }
  uVar4 = 0;
  iVar1 = DAT_00905d98 + 1;
  uVar3 = 0;
  FUN_0079f090(iVar1,0,0);
  FUN_0079f590(iVar1,uVar3,uVar4);
  if (DAT_009b416c == 0) {
    FUN_00460c70(local_40,"TheHost");
    local_84 = DAT_009b3e98;
    local_88 = DAT_009b3e98;
    FUN_0083ffa0(local_80,&DAT_009b3e98);
    uVar4 = 3;
    uVar3 = DAT_009b3e98;
    FUN_0079f090(&local_88,DAT_009b3e98,3);
    FUN_0079a350(puVar2,uVar3,uVar4);
  }
  else {
    uVar4 = 3;
    uVar3 = FUN_0078b210(3);
    FUN_0079f090(uVar3);
    FUN_0079a220(uVar3,uVar4);
  }
  iVar1 = 0;
  do {
    if ((&DAT_009b40f8)[iVar1] != 0) {
      FUN_004647c0(local_40,"Client%d",iVar1);
      local_88 = (&DAT_009b40f8)[iVar1];
      local_84 = local_88;
      FUN_0083ffa0(local_80,&local_88);
      puVar2 = &local_88;
      FUN_0079f090(puVar2);
      FUN_0078c1d0(puVar2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_0079f090();
  iVar1 = FUN_0078c2a0();
  if (iVar1 < DAT_00905d98) {
    do {
      FUN_007ec298(0);
      FUN_0079f090();
      iVar1 = FUN_0078c2a0();
    } while (iVar1 < DAT_00905d98);
  }
  FUN_007412a0();
  return;
}

