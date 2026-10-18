/* speed.exe 00595f80 FUN_00595f80; analysis pseudocode, not buildable source.
 * calls 0058de40 FUN_0058de40
 * calls 0056a080 FUN_0056a080
 * calls 005bcd20 FUN_005bcd20
 * calls 00515d70 FUN_00515d70
 * calls 00525220 FUN_00525220
 * calls 00514d10 FUN_00514d10
 * calls 0056a270 FUN_0056a270
 * calls 0056a130 FUN_0056a130
 */

void __fastcall FUN_00595f80(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_20 [8];
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0xfc);
  do {
    cVar2 = FUN_0056a270(iVar3);
    if (DAT_008f41c0 == 8) {
      iVar1 = piVar4[-0x2d];
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[0] = (uint)(ushort)(short)cVar2;
      local_20[7] = 0;
      FUN_005bcd20(local_20);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      iVar1 = *piVar4;
      FUN_005bcd20(local_20);
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    }
    else {
      FUN_00515d70(piVar4[-0x2d],&DAT_008a0d7c,(int)cVar2);
      FUN_00515d70(*piVar4,&DAT_008a0d7c,(int)cVar2);
    }
    cVar5 = cVar2 == '\0';
    if (!(bool)cVar5) {
      iVar1 = *(int *)(param_1 + 0x328);
      if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
        cVar5 = FUN_0056a080(cVar2);
      }
      else if (iVar1 == 4) {
        cVar5 = FUN_0056a130(cVar2);
      }
    }
    FUN_00514d10(piVar4[0x5a],(-(uint)(cVar5 != '\0') & 0x60567) + 0x16a259,1);
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x2d);
  if (*(char *)(param_1 + 0x39) == '\0') {
    bVar6 = *(char *)(param_1 + 0x3a) != '\0';
  }
  else {
    bVar6 = *(char *)(param_1 + 0x3a) == '\0';
  }
  if (bVar6) {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = 0x36f274d0;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = 0x20bc9973;
  }
  FUN_00525220(uVar7,0xde045b20,uVar8);
  FUN_0058de40();
  return;
}

