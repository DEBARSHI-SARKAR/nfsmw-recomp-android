/* speed.exe 0079f900 FUN_0079f900; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 0078a310 FUN_0078a310
 * calls 0079f090 FUN_0079f090
 * calls 0078b090 FUN_0078b090
 * calls 007415d0 FUN_007415d0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079f900(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  puVar1 = &DAT_009b4250;
  do {
    puVar4 = puVar1;
    if (puVar1[1] == param_1) break;
    puVar1 = puVar1 + 7;
    puVar4 = (undefined4 *)0x0;
  } while ((int)puVar1 < 0x9b42a4);
  uVar3 = *puVar4;
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 1;
  iVar2 = 0;
  if (0 < DAT_009b46d8) {
    iVar2 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar2) {
    iVar2 = DAT_009b46dc;
  }
  FUN_0078a310(iVar2 - DAT_009b46d8,DAT_009b46d4);
  FUN_0078a310(param_1,0x20);
  FUN_0078a310(uVar3,0x20);
  uVar3 = DAT_00905dfc;
  FUN_0078a310(DAT_00905dfc,0x20);
  FUN_007415d0(uVar3,local_40c);
  FUN_0079f090(param_1);
  iVar2 = FUN_0078c380(param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x88) == 3)) {
    FUN_007c4b80();
    uVar5 = 1;
    uVar3 = FUN_007c4b80(1);
    FUN_0078b090(*(undefined4 *)(iVar2 + 0x9c),local_40c,uVar3,uVar5);
  }
  return;
}

