/* speed.exe 005ede20 FUN_005ede20; analysis pseudocode, not buildable source.
 * calls 0072ca00 FUN_0072ca00
 * calls 007236e0 FUN_007236e0
 * calls 005ec270 FUN_005ec270
 * calls 00723650 FUN_00723650
 */

void __fastcall FUN_005ede20(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 700) != 0) {
    uVar5 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x2c4) + uVar5 * 4);
      if ((*(short *)(iVar4 + 4) < 0) && (DAT_009a3ba4 != 0)) {
        local_8 = *(undefined4 *)(iVar4 + 0x10);
        local_4 = *(undefined4 *)(iVar4 + 0x14);
        iVar3 = FUN_0072ca00(&local_8);
        if (iVar3 != 0) {
          sVar1 = *(short *)(iVar3 + 0xc);
          *(short *)(iVar4 + 4) = sVar1;
          uVar2 = FUN_007236e0((int)sVar1);
          *(undefined2 *)(iVar4 + 6) = uVar2;
        }
      }
      if ((-1 < *(short *)(iVar4 + 4)) &&
         (((iVar3 = FUN_00723650((int)*(short *)(iVar4 + 4)), iVar3 != 0 &&
           (*(int *)(iVar3 + 0xc) == 4)) ||
          ((iVar4 = FUN_00723650((int)*(short *)(iVar4 + 6)), iVar4 != 0 &&
           (*(int *)(iVar4 + 0xc) == 4)))))) {
        FUN_005ec270();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 700));
  }
  return;
}

