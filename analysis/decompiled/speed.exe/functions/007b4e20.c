/* speed.exe 007b4e20 FUN_007b4e20; analysis pseudocode, not buildable source.
 * calls 007ada50 FUN_007ada50
 * calls 0075bad0 FUN_0075bad0
 * calls 00516b50 FUN_00516b50
 * calls 00591e90 FUN_00591e90
 * calls 007ae350 FUN_007ae350
 * calls 007a3b80 FUN_007a3b80
 * calls 0056dbe0 FUN_0056dbe0
 */

void __fastcall FUN_007b4e20(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  int *local_4;
  
  piVar5 = *(int **)(param_1 + 0x2c);
  local_4 = (int *)0x0;
  iVar4 = DAT_0091cf90;
  piVar1 = local_4;
  if (piVar5 == (int *)(param_1 + 0x2c)) {
LAB_007b4ea2:
    local_4 = piVar1;
    if (((*(uint *)(iVar4 + 300) >> 0xf & 1) != 0) && (DAT_00905e2c == -1)) {
      cVar2 = FUN_00516b50("GarageMain.fng");
      if (cVar2 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00591e90("GarageMain.fng");
      }
      *(undefined4 *)(iVar4 + 0x54) = 1;
      if (*(char *)(*(int *)(iVar4 + 0x2c) + 0x620) != '\0') {
        FUN_0075bad0(*(undefined4 *)(*(int *)(iVar4 + 0x2c) + 0x624));
      }
      local_4 = *(int **)(param_1 + 0x2c);
      *(int *)(param_1 + 0x68) = local_4[2];
    }
    DAT_00905e2c = 0xffffffff;
    if ((local_4 == (int *)0x0) && (*(int **)(param_1 + 0x2c) != (int *)(param_1 + 0x2c))) {
      local_4 = *(int **)(param_1 + 0x2c);
    }
    FUN_007ae350(local_4,*(undefined4 *)(param_1 + 0x1a8));
    FUN_007ada50();
    return;
  }
  do {
    piVar1 = piVar5;
    if (DAT_00905e2c == -1) {
      uVar7 = FUN_007a3b80();
      iVar3 = (int)((ulonglong)uVar7 >> 0x20);
      if (iVar3 == *(int *)(param_1 + 0x50 + (int)uVar7 * 4)) goto LAB_007b4ea2;
      if ((*(byte *)(iVar4 + 300) & 1) == 0) {
        iVar4 = *(int *)(param_1 + 0x1a8);
        iVar3 = FUN_0056dbe0(0xb);
        bVar6 = piVar5[2] == *(int *)(iVar3 + 0x10 + iVar4 * 4);
        iVar4 = DAT_0091cf90;
      }
      else {
        bVar6 = iVar3 == *(int *)(*(int *)(iVar4 + 0x10) + 0xa8);
      }
    }
    else {
      bVar6 = piVar5[2] == DAT_00905e2c;
    }
    if ((bVar6) || (piVar5 = (int *)*piVar5, piVar1 = local_4, piVar5 == (int *)(param_1 + 0x2c)))
    goto LAB_007b4ea2;
  } while( true );
}

